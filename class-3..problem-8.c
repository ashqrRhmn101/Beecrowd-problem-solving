#include<stdio.h>
int main()
{
 int math,che,phy;
 printf("Enter three numbers =");
 scanf("%d %d %d",&math,&che,&phy);
 if((math>=65)&&(phy>=55)&&(che>=50)&&(math+phy+che)>=190)

 {
     printf("Eligible");
 }
else if(math+phy>=140)
{
    printf("Eligible");
}
else
{
    printf("Not eligible");
}
    getch();
}

