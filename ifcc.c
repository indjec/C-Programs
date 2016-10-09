int main()
{
  int a;
	printf("Enter the number of days in a year:");
	scanf("%i", &a);
  if(a % 365 == 0)
	printf("This is a not leap year");
  else
	printf("This is a leap year\n");



return 0;



}
