#include <stdio.h>
 
struct student{
	char name[30];
	int rollNo;
 
	struct dateOfBirth{
		int dd;
		int mm;
		int yy;
	}DOB;
};
 
int main()
{
	struct student std;
 
	printf("Enter name: \n"); 
	gets(std.name);
	printf("Enter roll number: \n");
	scanf("%d",&std.rollNo);
	printf("Enter Date of Birth [DD MM YYYY] format: \n");
	scanf("%d%d%d",&std.DOB.dd,&std.DOB.mm,&std.DOB.yy);
	printf("\nName : %s \nRollNo : %d \nDate of birth : %02d - %02d - %02d\n",std.name,std.rollNo,std.DOB.dd,std.DOB.mm,std.DOB.yy);
 
	return 0;
}
 