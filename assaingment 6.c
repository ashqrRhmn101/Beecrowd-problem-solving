#include<stdio.h>
int main()
{

float p,t,r,interest;
printf("Enter Principle=");
scanf("%f",&p);
printf("Enter Rate of interest=");
scanf("%f",&r);
printf("Enter Time=");
scanf("%f",&t);
interest=(p*t*r)/100;
printf("The simple interest is=%f",interest);



    return 0;
}

