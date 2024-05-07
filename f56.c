/*Create a structure to specify data on students given below: Roll number , Name , Department ,course ,year of joining Assume that there are not more than 450 students in the college.
(a)	Write a function to print names of all students who joined in a particular year.
(b)	Write a function to print the data of a student whose roll number is given.*/
#include <stdio.h>
struct student{
    char name[10];
    char dprtmnt[15];
    char  crse[10];
    int roll;
    int yoj;
};
void chk_yoj(struct student [],int,int);
void data(struct student [],int,int);
int main()
{
    int i, n, d, year, roll;
printf("Enter the number of students whose data you want to enter  [NOTE:(<=450)]:\n");
scanf("%d",&n);
    if(n>450){
printf("can't store data of more than 450 students.\nExiting...\n");
        return 1;
    }
    struct student s[n];
    for (i = 0; i< n; i++)
    {
printf("\nENTER RECORDS FOR STUDENT %d",i+1);
printf("\nNAME:");
scanf("%s",s[i].name);
printf("DEPARTMENT:");
scanf("%s",s[i].dprtmnt);
printf("COURSE OF STUDENT:");
scanf("%s",s[i].crse);
printf("ROLL NUMBER:");
scanf("%d",&s[i].roll);
printf("YEAR OF JOINING:");
scanf("%d",&s[i].yoj);
printf("\n");
}
printf("\n\nENTER THE YEAR TO BE CHECKED:");
scanf("%d",&year);
chk_yoj(s,year,n);
printf("\n\nENTER THE ROLL NUMBER OF STUDENT FOR DATA:");
scanf("%d",&roll);
data(s,roll,n);
 return 0;
}
void chk_yoj(struct student s[],int year,int n)
{
int i, c = 0;
printf("\n LIST OF STUDENTS WITH YEAR OF JOINING %d: \n", year);
for (i = 0; i< n; i++)
{
 if (s[i].yoj == year)
printf("%s  ", s[i].name);
 else
 c++;
 }
 if (c == n)
printf("No STUDENT HAS JOINED IN THE YEAR %d\n", year);
}
void data(struct student s[],int roll,int n)
{
int i, c = 0;
printf("\n\t\t\t*****OUTPUT*****\n\n");
for (i = 0; i< n; i++)
{
 if (s[i].roll == roll)
{
printf("\nNAME - %s\n", s[i].name);
printf("ROLL NO - %d\n", s[i].roll);
printf("DEPARTMENT - %s\n", s[i].dprtmnt);
printf("COURSE - %s\n", s[i].crse);
printf("YEAR OF JOINING - %d\n", s[i].yoj);
}
 else
 c++;
 }
if (c == n)
printf("STUDENT WITH THIS ROLL NUMBER DOESN’T EXIST....\n");
}
