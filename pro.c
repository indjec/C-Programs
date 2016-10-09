
#include <stdio.h>
#include <string.h>
int main()
{
   	char fname[10], lname[10], fullname[30];	
	printf("enter your first name:");
	scanf("%s", &fname);	
	printf("enter your last name:");
	scanf("%s", &lname);
	strcat(fname, lname);
	printf("%s", fname);
	return 0;
}
