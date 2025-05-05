#include<stdio.h>
void sttrev(char a[])
{
    char temp;
    int i,j,l=0;
    for(i=0;a[i]!='\0';i++)
l++;
i=0;
j=l-1;
while(i<j){

    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
return a[i];
}
int main()
{
    char a[15];
    printf("Enter the string :");
    scanf("%s",a);
    strrev(a);
    printf("\n Reverse string =%s",a);

    getch();

}
