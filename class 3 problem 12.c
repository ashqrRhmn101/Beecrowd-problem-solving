#include<stdio.h>
int main()
{
float used_unit;
float unit_price;
scanf("%f",&used_unit);
if(used_unit>200)
{
  unit_price=1.2;
}
else if(used_unit<400)
{
  unit_price=1.5;
}
else if(used_unit<600)
{
  unit_price=1.8;
}

else
{
  unit_price=2;
}
float total_bill=unit_price*used_unit;
float charge;
if(total_bill>=400)
{
   charge=total_bill *0.15;
}
total_bill=charge+total_bill;
if(total_bill<100)
{
    total_bill=100;
}
printf("Total Use=%f\n",used_unit);
printf("Unit charge=%f\n",unit_price);
printf("Sub charge=%f\n",charge);
printf("Total Bill=%f\n",total_bill);

    getch();
}

