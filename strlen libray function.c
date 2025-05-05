#include<stdio.h>

int main(){

char str1[]="sazib shaha";
int i=0,lenth=0;

while(str1[i]!='\0'){

    i++;
    lenth++;
}
printf("lenth=%d\n",lenth);

return 0;
}
