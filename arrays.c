#include<stdio.h>
int main()
{
int roll_number;
char name[50];
int sub[5];
int total=0;
printf("enter roll number: \n");
scanf("%d",&roll_number);
printf("enter name\n");
scanf("%[^\n]",&name);
int i;
for(i=0;i<5;i++)
{
printf("enter subject marks %d\n",i+1);
scanf("%d",&sub[i]);
total=total+sub[i];
}
printf("the student details are: \n");
printf("the roll number is %d\n",roll_number);
printf("the name is %s\n",name);
printf("the total marks is %d\n",total);
return 0;
}
