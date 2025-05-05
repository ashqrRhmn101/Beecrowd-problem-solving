//number reverse korle jodi ager number fire ase taile palindrome numberf
#include<stdio.h>
int main()
{
int num,r,sum=0,temp;
printf("Enter any number=");
scanf("%d",&num);
temp=num;
while(temp!=0){
    r=temp%10;
    sum=sum*10+r;
    temp=temp/10;
}
if(num==sum){
    printf("%d is Palindrome number",num);
}
else{
    printf("%d is not Palindrome number",num);
}

    return 0;
}


