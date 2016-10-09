int main()
{
  int sp, cp, p, l;
  printf("eter sp and cp: ");
    scanf("%i%i", &sp, &cp);
   if( sp >= cp)
 {
     p=sp-cp;
    printf("your profit is: %i\n",p);
 }
else
{
  l=cp-sp;
  printf("loss: %i\n",l);
}
 return 0;

}
