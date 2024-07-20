#include<stdio.h>
#include<conio.h>
   struct student {
    char name[30];
    int roll_number;
    int marks[5];
    int total_marks;
    float percentage;
};

// Function to find total marks and percentage of all students
void find_total_marks_percentage_students(struct student students[], int number_students) {
    int i, j;

    // Iterate through each student
    for (i = 0; i < number_students; i++) {
        students[i].total_marks = 0;
        students[i].percentage = 0.0;

        // Calculate total marks and percentage for each student
        for (j = 0; j < 5; j++) {
            students[i].total_marks += students[i].marks[j];
        }

        // Calculate percentage
        students[i].percentage = (float) students[i].total_marks / 5;
    }
}
// display details of a student with a given roll number.
void display_details_student(struct student students[],int number_students,int roll_number){
int i,j;
for(i=0;i<number_students;i++){
    if(roll_number==students[i].roll_number){
        printf("The student's name:%s\n",students[i].name);
        printf("The student's roll_number:%d\n",students[i].roll_number);
        printf("The student's marks\n");
for(j=0;j<5;j++)
{
    printf("%d",students[i].marks[j]);
}
printf("\n The student's total marks:%d\n",students[i].total_marks);
printf("\n The student's percentage:%.2f\n",students[i].percentage);
printf("\n");
break;
}
}
}
// display the details for all student having percentage in a given range.
void display_details_students_percentage_range (struct student students[],int number_students,float percentage1,float percentage2)
{
    int i,j;
    for(i=0;i<number_students;i++)
    {
        if(students[i].percentage>=percentage1 && students[i].percentage<=percentage2)
        {
            printf ("The student's name:%s\n",students[i].name);
            printf ("The student's roll_number:%d\n",students[i].roll_number);
            printf ("The student's marks\n");
            for(j=0;j<5;j++)
{
    printf("%d",students[i].marks[j]);

}
printf("\n The student's total marks:%d\n",students[i].total_marks);
printf("\n The student's percentage:%.2f\n",students[i].percentage);
printf("\n");

        }
    }
}
//sort the array in ascending order of marks.
void sort_array_in_ascending_order_mark(struct student students[],int number_students)
{
    int i,j,k;
    for (i=0;i<number_students-1;i++)
    {
        for(k=0;k<number_students-i-1;k++)
        {
            if(students[k].total_marks>students[k+1].total_marks)
            {
                // swap temp and elements[i]
                struct student temp= students[k];
                students[k]=students[k+1];
                students[k+1]=temp;
            }
        }
    }
    for(i=0;i<number_students;i++)
    {
        printf("The student's name:%s\n", students[i].name);
        printf("The student's roll_number:%d\n", students[i].roll_number);
        printf("The student's marks\n");
        for(j=0;j<5;j++)
        {
            printf("%d",students[i].marks[j]);
        }
        printf("\n The student's Total marks:%d\n",students[i].total_marks);
        printf("\n The student's percentage:%.2f\n",students[i].percentage);
        printf("\n");
    }
}
void main ()
{

    struct student students[100];
    int number_students,i,j;
    int roll_number;
    float percentage1;
    float percentage2;
    printf("Enter the number of students:");
    scanf("%d",&number_students);
    for(i=0;i<number_students;i++){
		fflush(stdin);
		printf("Enter the student's name: ");
		gets(students[i].name);
		printf("Enter the student's roll_number: ");
		scanf("%d",&students[i].roll_number);
		for(j=0;j<5;j++){
			printf("Enter the student's mark %d: ",(j+1));
			scanf("%d",&students[i].marks[j]);
		}
		printf("\n");
	}
	find_total_marks_percentage_students(students,number_students);
	printf("Enter the student's roll number to search: ");
	scanf("%d",&roll_number);
	display_details_student(students,number_students,roll_number);

	printf("Enter the student's percentage1 to search: ");
	scanf("%f",&percentage1);
	printf("Enter the student's percentage2 to search: ");
	scanf("%f",&percentage2);
	display_details_students_percentage_range(students,number_students,percentage1,percentage2);

	printf("\nSort  the  array  in  ascending order of marks.\n");
	sort_array_in_ascending_order_mark(students,number_students);
	printf("\n");
	getch();
	getch();

}
