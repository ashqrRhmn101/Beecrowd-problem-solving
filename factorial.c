#include<stdio.h>
int main()
{
int n,i,num,j;
int fact=1;
printf("how many  number=");

scanf("%d",&num);
for(j=1;j<=num;j++){
          scanf("%d",&n);
for(i=1;i<=n;i++){

    fact=fact*i;
}
printf("%d \n",fact);
fact=1;
}
    return 0;
}



