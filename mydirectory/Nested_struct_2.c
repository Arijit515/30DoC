#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
 char name[15];
 int roll;
 float sub1,sub2;
 float tot;
 float avg;
}
stud[20];
int comparator(const void* p, const void* q)
{
  return strcmp(((struct student*)p)->name,
  (((struct student*)q)->name));
};
int main()
{
    int n,p,option;
    char s[15];
    struct student stud[20];
    printf("Enter the Number of students:\n");
    scanf("%d",&n);
    printf("Enter the Student data:\n");
    for(int i=0;i<n;i++)
    {
    printf("Enter Student-%d name:",i+1);
    scanf("%s",&stud[i].name);
    printf("Enter the Roll Num of student-%d:",i+1);
    scanf("%d",&stud[i].roll);
    printf("Enter the marks of subject 1 & 2 of student-%d:",i+1);
    scanf("%f%f",&stud[i].sub1,&stud[i].sub2);
    stud[i].tot=stud[i].sub1+stud[i].sub2;
    stud[i].avg=stud[i].tot/2;
    }
do
{
 printf("\nChoose option to perform : \n");
 printf("Enter the option you want to perform.Enter 0 if you want to exit:\n");
 printf("1.search the particular student using Roll_NO\n");
 printf("2.search the particular student using NAME\n");
 printf("3.Print the number students who got above 80:\n");
 printf("4.Sort the data with respect to name in ascending order:\n");
 scanf("%d",&option);
 switch(option)
 {
  case 0:
  break;
  case 1:
  printf("Enter the Roll Num to find the student: \n");
  scanf("%d",&p);
  for(int i=0;i<n;i++)
  {
   if(stud[i].roll==p)
   {
     printf("For the entered Roll Num we found : \n");
     printf("Name : %s\n",stud[i].name);
     printf("Roll Number : %d\n",stud[i].roll);
     printf("Subject 1 marks : %.2f\n",stud[i].sub1);
     printf("Subject 2 marks : %.2f\n",stud[i].sub2);
     printf("Total Marks : %.2f\n",stud[i].tot);
     printf("Average marks : %.2f\n",(stud[i].avg));
    }
   }
   break;
   case 2:
   printf("Enter Name of the student: \n");
   char std_name[15];int i,flag;
   getchar();
   scanf("%[^\n]s", std_name);
   getchar();
   for (i = 0; i < n; i++)
   {
    if (strcmp(std_name, stud[i].name) == 0)
    {
     flag =1;
     printf("For the entered name we found : \n");
     printf("Name : %s\n",stud[i].name);
     printf("Roll_no : %d\n",stud[i].roll);
     printf("Subject 1 marks: %.2f\n",stud[i].sub1);
     printf("Subject 2 marks: %.2f\n",stud[i].sub2);
     printf("Total Marks: %.2f\n",stud[i].tot);
     printf("Average marks %.2f\n",(stud[i].avg));
    }
   }
   break;
   case 3:
   printf("Students who get above 80 marks :\n");
   int c=0,i1,j;
   char t[15];
   for(int i1=0;i1<n;i1++)
   {
    if(stud[i1].sub1+stud[i1].sub2>80)
    {
     c=c+1;
    }
   }
   printf("No of students are: %d\n",c);
   break;
   case 4:
   qsort(stud, n, sizeof(struct student), comparator);
   for(i=0;i<n;i++)
   {
    printf("Name : %s\n",stud[i].name);
    printf("Roll Number : %d\n",stud[i].roll);
    printf("Subject 1 marks : %.2f\n",stud[i].sub1);
    printf("Subject 2 marks : %.2f\n",stud[i].sub2);
    printf("Total Marks : %.2f\n",stud[i].tot);
    printf("Average marks : %.2f\n",(stud[i].avg));
   }
   break;
  }
  break;
}
while(option!=0);
return 0;
}