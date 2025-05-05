#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three value =");
scanf("%d %d %d",&a,&b,&c);
if((a==b)&&(b==c))
{
    printf("Equilateral");
}
else if((a==b)&&(b==c)&&(a==c))
{
    printf("Isosceles");
}n
else
{
    printf("Scalenen");
}

    getch();
}

