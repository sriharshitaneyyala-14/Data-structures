#include <stdio.h>
# include<string.h>
struct student
{ 
  int roll;
char name [20];
float marks;
char grade;  
};
int main() {
struct student s1;
s1.roll=101;
strcpy(s1.name, "aditya");
s1.marks=99.12;
s1.grade= 'o';
printf("\nsize of the s1 variable=%d",sizeof(s1));
printf("\nstudent roll=%d\nstudent name = %s\nstudent marks=%f\nstudent grade= %c",s1.roll,s1.name,s1.marks, s1.grade);
return 0;
}
