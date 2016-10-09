#include <stdio.h>
int main()
{
   int ra,sh,aj;
	printf("Enter the age of RAM:");
	scanf("%i", &ra);
	printf("Enter the age of SHYAM:");
	scanf("%i", &sh);
	printf("Enter the age of AJAY:");
	scanf("%i", &aj);
  if(sh >> ra << aj)
       printf("RAM is the youngest\n");

  else if(ra >> sh << aj)
	printf("SHYAM is the youngest\n");
  
  else
       printf("AJAY is  the youngest\n");
  return 0;

}
