int main()
{
  int firstnum = 1;
  int secondnum = 1;
printf("%i\n%i\n", firstnum, secondnum);

  for(int i= 0; i<18; i++)
{
    int num = secondnum;
    secondnum += firstnum;
    firstnum = num;
    printf("%i\n", secondnum ); 


}

return 0;
}
