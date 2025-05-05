#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);

    for(row=n;row<=n;row++)
    {
        for(col=1;col<=row;col++){
          if(row==1||row==n||col==1||col==n){
               printf("*");
          }
          else{
               printf(" ");
          }
        }
        printf("\n");
    }

    return 0;
}
