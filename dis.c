int main()
{
  int qty,dis = 0;
  float rate, tot;

  printf("Please enter quantity: ");
  scanf("%i %f", &qty, &rate);

 if(qty > 1000)
 dis=10;

 tot = (qty * rate) - (qty * rate * dis / 100);
 printf("total expense = Rs %f\n", tot);

return 0;

}
