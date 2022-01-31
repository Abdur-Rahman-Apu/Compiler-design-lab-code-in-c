#include<stdio.h>
#include<string.h>
int main()
{
 char str[50]="",cnvrt[50]="";
 gets(str);
 int i,flag=0,j=0;
 for(i=0;i<strlen(str);i++){
 if(str[i]=='/' && str[i+1]=='/'){
 break;
 }else if(str[i]=='/' && flag==0){
 flag=1;
 }else if(str[i]=='/' && flag==1){
 flag=0;
 continue;
 }
 if(flag!=1){
 cnvrt[j]=str[i];
 j++;
 }
 }
 printf("%s",cnvrt);
 return 0;
}
