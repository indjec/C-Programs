int main()
{
  int a,b,c,d,e, per;
  printf("ENter marks in five subjects: ");
  scanf("%i%i%i%i%i", &a, &b, &c, &d, &e);
 per = (a+b+c+d+e)*100/500;
 if (per >= 60)
  printf("First div\n");
 else
 {
    if(per >= 50)
    printf("Second Div\n");
   else
	{
		if (per >= 40)
		printf("Third div\n");
		else
		printf("Fail\n");
	}
    



 }
return 0;
}
