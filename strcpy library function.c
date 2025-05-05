#include<stdio.h>

int main(){
char str1[50];
char str2[30];
int i;
gets(str1);

for(i=0;str1[i]!='\0';i++){
        str2[i]=str1[i];
}
str2[i]='\0';
puts(str2);

return 0;
}



