#include<stdio.h>
int main()
{
    int num1=0,num2=1,num3,i,n;
    scanf("%d",&n);
    printf("%d %d ",num1,num2);
    for(i=2;i<=n;++i){
        num3=num1+num2;
        num1=num2;
        num2=num3;
        printf("%d ",num3);
    }


    return 0;
}
