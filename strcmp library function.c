#include<stdio.h>

int main(){
char str1[50];
char str2[30];
int i,f;
int j=0,l=0,len1=0,len2=0;
gets(str1);
gets(str2);
while(str1[j]!=0){
    len1++;
    j++;
}
while(str2[l]!=0){
    len2++;
    l++;
}
if(len1==len2){
for(i=0;str1[i]!='\0';i++){
    if(str1[i]!=str2[i]){
        f=1;
        break;
    }
}
if(f==1)
    printf("not same\n");
else
    printf("same");
}
else
    printf("not same\n");

return 0;
}



