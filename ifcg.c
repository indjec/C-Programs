int main()
{
  int a,b,c,sum;
	printf("Enter the measure of the first angle:");
	scanf("%i", &a);
	printf("Enter the measure of the second angle:");
	scanf("%i", &b);
	printf("Enter the measure of the third angle:");
	scanf("%i", &c);
		sum=a+b+c;		
  if( sum == 180 )
	printf("It is trianlge\n");
  else
	printf("It is not a triangle\n");
  return 0;


}
