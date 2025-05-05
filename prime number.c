#include<stdio.h>
#include<math.h>
int main()
{
int n,i,count=0;

printf("Enter any number=");
scanf("%d",&n);
if(n<=1){
    count++;
    break;
}
for(i=2;i<n;i++){
    if(n%i==0){
count++;
break;
    }
}
if(count==0){
    printf("%d is prime number",n);
}
else
{
    printf("%d is not prime number",n);
}

    return 0;
}




