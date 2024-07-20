#include <stdio.h>

struct student {
    char name[30];
    int roll_number;
    int marks[5];
    int total_marks;
    float percentage;
};

void find_total_marks_percentage_students(struct student students[], int number_of_students, int number_of_subjects) {
    int i, j;

    // Calculate the weight of each subject
    float weight = 1.0 / number_of_subjects;

    // Iterate through each student
    for (i = 0; i < number_of_students; i++) {
        // Initialize total marks and percentage
        students[i].total_marks = 0;
        students[i].percentage = 0.0;

        // Calculate total marks and percentage for each student
        for (j = 0; j < number_of_subjects; j++) {
            students[i].total_marks += students[i].marks[j];
        }

        // Calculate percentage
        students[i].percentage = (students[i].total_marks * weight) * 100;
    }
}

int main() {
    struct student students[2] = {
        {"John", 1, {80, 90, 70, 85, 75}, 0, 0.0},
        {"Jane", 2, {85, 75, 90, 95, 80}, 0, 0.0}
    };

    int number_of_students = 2;
    int number_of_subjects = 5;

    find_total_marks_percentage_students(students, number_of_students, number_of_subjects);

    for (int i = 0; i < number_of_students; i++) {
        printf("Student %d: %s\n", students[i].roll_number, students[i].name);
        printf("Total Marks: %d\n", students[i].total_marks);
        printf("Percentage: %.2f%%\n\n", students[i].percentage);
    }

    return 0;
}

