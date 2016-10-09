int main()
{
  int a, b, c, d, e;
  float per;
  printf("enter marks in all subjects: ");
  scanf("%i%i%i%i%i", &a, &b, &c, &d, &e);

 per=(a+b+c+d+e)*100/500;

 if(per>60)
  printf("first div\n");
 if( (per>=50) && (per<60) )
 printf("Second div\n");
 if( (per>=40) && (per<50) ) 
 printf("Third div\n");
 if(per<40)  
 printf("Fail\n");
 return 0; 
 
 

}
