int main()
{   char gen;
    int yos, qu, sal;
   

    printf("enter gender, yofs, qual (0 = G, 1 = PG):	 ");
    scanf("%c%i%i", &gen, &yos, &qu);

 if (gen == 'm' && yos >= 10 && qu == 1)
    sal = 15000;
else if (gen == 'm' && yos >= 10 && qu == 0)
    sal = 10000;
else if (gen == 'm' && yos < 10 && qu == 1)
    sal = 10000;
else if (gen == 'm' && yos < 10 && qu == 0)
    sal = 7000;
printf("\nyour salary is:  %i\n", sal);
return 0;

}



