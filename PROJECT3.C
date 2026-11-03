#include<stdio.h>

struct student
 {
 char name;
 int roll;
 int marks;
 char city[20];
 char dream[20];
 };
 void main()
{
  struct student s[10];
  int n,i;

  clrscr();
  printf("enter the no of students:");
  scanf("%d",&n);

  for (i=0;i<n;i++)
 {
  printf("enter your name:");
  scanf("%s",s[i].name);
  printf("enter your roll:");
  scanf("%d",&s[i].roll);
  printf("enter your marks:");
  scanf("%d",&s[i].marks);
  printf("enter your city:");
  scanf("%s",s[i].city);
  printf("enter your dream:");
  scanf("%s",s[i].dream);
  }

  printf("----------STUDENT DETAILS----------");
  for(i=0;i<n;i++)
  {
  printf("name: %s",s[i].name);
  printf("roll no: %d",s[i].roll);
  printf("marks: %d",s[i].marks);
  printf("city: %s",s[i].city);
  printf("dream: %s",s[i].dream);
  }
  printf("\n");
  getch();

 }
