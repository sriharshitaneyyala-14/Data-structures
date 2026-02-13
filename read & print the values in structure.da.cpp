# include<stdio.h>
struct student
{
int roll;
char name [20];
float marks;
char grade;};
int main(){
struct student s;
printf("\nenter student roll number: ");
scanf("%d",&s.roll);
printf("\nenter student name: ");
scanf(" %[^\n]s",s.name);
printf("\nenter student marks: ");
scanf("%f",&s.marks);
printf("\nenter student grade: ");
scanf(" %c",&s.grade);
printf("\nstudent roll number: %d\nstudent name: %s\nstudent marks: %f\nstudent grade: %c",s.roll,s.name,s.marks,s.grade);
return 0;}
