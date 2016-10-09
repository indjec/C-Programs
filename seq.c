int main()
{
 int firstnum = 1;
 int secnum = 1;
  printf("%i\n%i\n", firstnum, secnum);
  for (int i = 0; i<23; i++)
	{
		int num = secnum;
		secnum += firstnum;
		firstnum = num;
   		printf("%i", secnum);
 

	}
  return 0;
}
