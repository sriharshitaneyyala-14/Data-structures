# include<stdio.h>
struct student
{
int roll;
char name [20];
float marks;
char grade;
};
int main()
{
struct student s = {101, "seetha",98.26,'0'};
printf("\nstudent roll number: %d\nstudent name: %s\nstudent marks: %f\nstudent grade: %c",s.roll,s.name,s.marks,s.grade);
return 0;
}
