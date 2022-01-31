#include<stdio.h>
#include<string.h>
int main()
{

    char str[50];
    int i=0,count=0;
    printf("Enter a string:");
    gets(str);
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==ch)
        {
            printf("Position of %c is %d.\n",str[i],i);
        }
    }


}
