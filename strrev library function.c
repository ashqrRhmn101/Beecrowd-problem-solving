#include<stdio.h>

int main(){
char str1[50];
char str2[30];
gets(str1);
int i=0,lenth=0,j;
while(str1[i]!='\0'){
   i++;
   lenth++;
}
for(j=0,i=lenth-1;i>=0;i--,j++){
    str2[j]=str1[i];
}
str2[j]='\0';
puts(str2);
if(str1==str2){
    printf("palindrome string\n");
}
else
    printf("not palindrome\n");
return 0;
}


