/* find total marks and percentage of all n students */
#include<stdio.h>
#include<conio.h>
struct student{
char name[30];
int roll_number;
int marks[5];
int total_marks;
float percentage;
};
 void find_total_marks_percentage_students (struct student student[], int number_student)
{

    int i,m;
    for(i=0;i<number_student;i++)
    {
        student[i].total_marks=0;
        student[i].percentage=0.0;
        for(m=0;m<5;m++){
            student[i].total_marks+=student[i].marks[m];
            student[i].percentage+=student[i].marks[m]*0.2;
        }

    }

}
