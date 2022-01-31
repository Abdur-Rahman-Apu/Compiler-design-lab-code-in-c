#include<stdio.h>
#include<string.h>
int main()
{

    char str[50]="",cnvrt[50]="";
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++){

        if(isupper(str[i])){
            str[i]=str[i]+32;
        }else if(islower(str[i])){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    printf("\n\n\n\nAfter removing last occurrence:\n");
    int len=strlen(str);
    for(i=0;i<len-1;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
