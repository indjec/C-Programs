int main()
{
 int bonus, cy, yos, yoj ;
 printf("ENter current year and year of joining: ");
 scanf("%i%i", &cy, &yoj);

 yos = cy - yoj;
 
 if(yos >= 3)
{
 bonus = 2500;
 printf("Bonus Rs. %i\n", bonus);

}
 return 0;

}
