#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

class Diabetes {
private:
    std::string name;
    float age;
    int weight;
    float height;
    char sex;
    std::vector<char> symptoms;

public:
    void welcomeScreen();
    void getValue();
    void getLevel1Symptoms();
    void getLevel2Symptoms();
    void getLevel3Symptoms();
    int analyseSymptoms(int level);
    char displayMessage(int level, int result);
    void displayResults();
};

void Diabetes::welcomeScreen() {
    std::cout << "********* W E L C O M E *********\n";
    std::cout << " S C H O O L  O F  E N G I N E E R I N G \n";
    std::cout << "M E D I C A L   D I A G N O S I S   S O F T W A R E\n";
    std::cout << "******** PRESS ANY KEY TO CONTINUE *********\n";
    std::cin.get();
}

void Diabetes::getValue() {
    std::cout << "P E R S O N A L   I N F O R M A T I O N\n";
    std::cout << "N A M E        : ";
    std::getline(std::cin, name);
    std::cout << "A G E          : ";
    std::cin >> age;
    std::cout << "W E I G H T    : ";
    std::cin >> weight;
    std::cout << "H E I G H T    : ";
    std::cin >> height;
    std::cout << "S E X (M/F)    : ";
    std::cin >> sex;
    std::cin.ignore(); // To ignore the newline character left in the buffer
}

void Diabetes::getLevel1Symptoms() {
    symptoms.clear();
    char symptom;
    std::cout << "APPETITE (H/L/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "FREQUENCY OF THIRST (H/L/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "FREQUENCY OF URINATION (H/L/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "VISION (I/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "URINE SUGAR (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "KETONUREA (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "FASTING BLOOD SUGAR (H/L/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "R B S (H/L/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "FAMILY HISTORY OF DIABETES (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "OGTT (D/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
}

void Diabetes::getLevel2Symptoms() {
    symptoms.clear();
    char symptom;
    std::cout << "PANCREATITIS (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "CARCINOMA (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "CIRRHOSIS (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "HCTS (H/L/N): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "HEPATITIS (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "HORMONAL DISORDER (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "PANCREATECTOMY (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
}

void Diabetes::getLevel3Symptoms() {
    symptoms.clear();
    char symptom;
    std::cout << "AGE (Y/M/E): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "BODY WEIGHT (N/A/B/O): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "DURATION (W/M/Y): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "KETONUREA (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
    std::cout << "AUTO ANTIBODIES (P/A): ";
    std::cin >> symptom;
    symptoms.push_back(toupper(symptom));
}

int Diabetes::analyseSymptoms(int level) {
    int count = 0;
    switch (level) {
        case 1:
            if (symptoms[9] == 'D') return -1;
            if (symptoms[5] == 'P' && symptoms[6] == 'P' && symptoms[7] == 'H') return -1;
            count = std::count_if(symptoms.begin(), symptoms.end(), [](char s) {
                return s == 'H' || s == 'P' || s == 'D' || s == 'I';
            });
            return (count > 5) ? -1 : 0;
        case 2:
            return (std::any_of(symptoms.begin(), symptoms.end(), [](char s) {
                return s == 'P' || s == 'H';
            })) ? -1 : 0;
        case 3:
            if ((symptoms[0] == 'Y' && symptoms[1] == 'N' && symptoms[2] == 'W' && symptoms[3] == 'P' && symptoms[4] == 'P') ||
                (symptoms[0] == 'Y' && symptoms[1] == 'B' && symptoms[2] == 'W' && symptoms[3] == 'P' && symptoms[4] == 'P') ||
                (symptoms[0] == 'Y' && symptoms[1] == 'N' && symptoms[2] == 'M' && symptoms[3] == 'P' && symptoms[4] == 'P') ||
                (symptoms[0] == 'Y' && symptoms[1] == 'N' && symptoms[2] == 'Y' && symptoms[3] == 'P' && symptoms[4] == 'P')) {
                return 0;
            }
            return -1;
        default:
            return 0;
    }
}

char Diabetes::displayMessage(int level, int result) {
    char choice;
    switch (level) {
        case 1:
            if (result == 0) {
                std::cout << "THE PERSON IS NOT DIABETIC\n";
                std::cout << "PRESS ANY KEY TO QUIT.\n";
                std::cin.get();
                exit(0);
            } else {
                std::cout << "THE PERSON IS DIABETIC\n";
                std::cout << "PROCEED (Y/N)? ";
                std::cin >> choice;
            }
            break;
        case 2:
            if (result == 0) {
                std::cout << "IT IS PRIMARY DIABETES.\n";
                std::cout << "Proceed (Y/N)? ";
                std::cin >> choice;
            } else {
                std::cout << "IT IS SECONDARY DIABETES\n";
                std::cout << "PRESS ANY KEY TO QUIT.\n";
                std::cin.get();
                exit(0);
            }
            break;
        case 3:
            if (result == 0) {
                std::cout << "IT IS INSULIN DEPENDENT DIABETES\n";
                std::cout << "PRESS ANY KEY TO QUIT.\n";
                std::cin.get();
                exit(0);
            } else {
                std::cout << "IT IS NON INSULIN DEPENDENT DIABETES\n";
                std::cout << "PRESS ANY KEY TO QUIT.\n";
                std::cin.get();
                exit(0);
            }
            break;
        default:
            break;
    }
    return toupper(choice);
}

void Diabetes::displayResults() {
    std::cout << "\n********* D I A G N O S I S   R E S U L T S *********\n";
    std::cout << std::left << std::setw(20) << "Name" << ": " << name << "\n";
    std::cout << std::left << std::setw(20) << "Age" << ": " << age << "\n";
    std::cout << std::left << std::setw(20) << "Weight" << ": " << weight << "\n";
    std::cout << std::left << std::setw(20) << "Height" << ": " << height << "\n";
    std::cout << std::left << std::setw(20) << "Sex" << ": " << sex << "\n";
    std::cout << "Symptoms:\n";
    std::cout << std::left << std::setw(30) << "Symptom" << std::setw(10) << "Value" << "\n";
    std::cout << "----------------------------------------\n";
    std::vector<std::string> symptomNames = {
        "Appetite", "Frequency of Thirst", "Frequency of Urination", "Vision", "Urine Sugar",
        "Ketonurea", "Fasting Blood Sugar", "R B S", "Family History of Diabetes", "OGTT"
    };
    for (size_t i = 0; i < symptoms.size(); ++i) {
        std::cout << std::left << std::setw(30) << symptomNames[i] << std::setw(10) << symptoms[i] << "\n";
    }
    std::cout << "*****************************************\n";
}

void diagnosis() {
    std::cout << " **  D I A G N O S I S   W I N D O W **\n";
    std::cout << "Let's have a look at symptoms...\n";
    std::cout << "Please enter the form in the next page.\n";
    std::cout << "***** PRESS ANY KEY *****\n";
    std::cin.get();
}

bool adminLogin() {
    std::string username, password;
    const std::string adminUsername = "admin";
    const std::string adminPassword = "password";

    std::cout << "Enter Admin Username: ";
    std::cin >> username;
    std::cout << "Enter Admin Password: ";
    std::cin >> password;

    if (username == adminUsername && password == adminPassword) {
        std::cout << "Login successful!\n";
        return true;
    } else {
        std::cout << "Invalid username or password.\n";
        return false;
    }
}

int main() {
    if (!adminLogin()) {
        std::cout << "Access denied. Exiting...\n";
        return 1;
    }

    Diabetes dts;
    dts.welcomeScreen();
    dts.getValue();
    diagnosis();
    dts.getLevel1Symptoms();
    int result = dts.analyseSymptoms(1);
    char choice = dts.displayMessage(1, result);
    if (choice == 'Y') {
        dts.getLevel2Symptoms();
        result = dts.analyseSymptoms(2);
        choice = dts.displayMessage(2, result);
        if (choice == 'Y') {
            dts.getLevel3Symptoms();
            result = dts.analyseSymptoms(3);
            dts.displayMessage(3, result);
        }
    }
    dts.displayResults();
    return 0;
}


