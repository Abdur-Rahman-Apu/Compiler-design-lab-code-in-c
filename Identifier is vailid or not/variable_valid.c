#include <ctype.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[50];
    int i,len;
    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++){

        if((i==0||i>0)&&str[i]=='_'){
            continue;
        }else if(i==0 && (isdigit(str[i])||!isalpha(str[i]))){
            printf("Invalid identifier");
            break;
        }else if(isdigit(str[i])){
            continue;
        }else if(!isalpha(str[i])){
            printf("Invalid identifier");\
            break;
        }
    }
    if(len==i){
        printf("Valid identifier");
    }
    return 0;
}
