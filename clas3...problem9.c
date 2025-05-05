int main()
{
 float a,b,c;
 printf("Enter three numbers =");
 scanf("%f %f %f",&a,&b,&c);
float det=b*b-4*a*c;
 if(det==0)
 {
     printf("Roots are equal\n");
     printf("x1=%f\n",-b/(2*a));
     printf("x2=%f\n",-b/(2*a));
 }
else if(det>0)
{
    printf("Roots are not equal but real number\n");
    float x1=(-b+sqrt(det))/(2*a);
    float x2=(-b-sqrt(det))/(2*a);
     printf("x1=%f\n",x1);
     printf("x2=%f\n",x2);
 }
 else
 {
     printf("Number are img");
 }

    getch();
}

