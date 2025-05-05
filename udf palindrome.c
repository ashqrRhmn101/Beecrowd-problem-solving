#include<stdio.h>

char strcpy(char str3[30],char str4[30]){
int j;
for(j=0;str4[j]!='\0';j++){
        str3[j]=str4[j];
}
str3[j]='\0';
return str3;
}
char strlen(char str1[30]){
int i=0,len=0;
while(str1[i]!='\0'){
    len++;
    i++;
}
return len;

}
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
char strcmp(char str2[30],char str3[30]){
    int j,f=0;
for(j=0;str2[j]!='\0';j++){
    if(str2[j]!=str3[j]){
        f=1;
        break;
    }
}
if(f==1)
    printf("\nyour string is not palindrome\n");
else
    printf("\nstring is palindrome\n");

return f;
}

int main(){
    char str1[100],str2[100];
printf("Enter your string=");
gets(str1);
strcpy(str2,str1);
printf("\nyour copied string is=%s",str2);
sttrev(str2);
printf("\nYour reverse srting is=%s",str2);
int len1=strlen(str1);
int len2=strlen(str2);
if(len1==len2)
    strcmp(str1,str2);
else
    printf("\nstring is not palindrome");



}
