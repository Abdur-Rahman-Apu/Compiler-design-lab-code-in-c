#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool isDelimeter(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '>' || ch == '<' ||
            ch == '='||ch==' '||ch==';'||ch=='('||ch==')'||ch=='\0'||ch=='{'||ch=='}'||ch=='['||ch==']'|| ch=='%')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'||ch=='<'||ch=='>'||
            ch=='!' || ch=='&&' || ch=='||' || ch=='=')
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isReserved_word(char* str)
{

    if(!strcmp(str,"auto")||!strcmp(str,"double")||!strcmp(str,"int")||!strcmp(str,"struct")||

            !strcmp(str,"break")||!strcmp(str,"else")||!strcmp(str,"long")||!strcmp(str,"switch")||

            !strcmp(str,"case")||!strcmp(str,"enum")||!strcmp(str,"register")||!strcmp(str,"typedef")||

            !strcmp(str,"char")||!strcmp(str,"extern")||!strcmp(str,"return")||!strcmp(str,"union")
            ||

            !strcmp(str,"const")||!strcmp(str,"float")||!strcmp(str,"short")||!strcmp(str,"unsigned")||

            !strcmp(str,"continue")||!strcmp(str,"for")||!strcmp(str,"signed")||!strcmp(str,"void")
            ||

            !strcmp(str,"default")||!strcmp(str,"goto")||!strcmp(str,"sizeof")||!strcmp(str,"voltile")||
                    !strcmp(str,"do")||!strcmp(str,"if")||!strcmp(str,"static")||!strcmp(str,"while"))
{
    return true;
}
else
{
    return false;
}
}
bool isInt(char* str)
{
    int i,len=strlen(str);
    bool hasPoint=false;
    for(i=0; i<len; i++)
    {
        if(str[i]=='.')
        {
            hasPoint=true;
        }
    }
    return hasPoint;
}
void isValid(char str[50])
{
    int len=strlen(str),i;
    for(i=0; i<len; i++)
    {
        if((i==0||i>0)&&str[i]=='_')
        {
            continue;
        }
        else if(i==0 && (isdigit(str[i])))
        {
            printf("' %s ' is an Invalid Identifier.\n",str);
            if(isdigit(str)==0)
            {
                if(isInt(str)==false)
                {
                    printf(" But ' %s ' is a Integer.\n",str);
                }
                else
                {
                    printf("But ' %s ' is a Floating number.\n",str);
                }
            }
            break;
        }
        else if(isdigit(str[i]))
        {
            continue;
        }
        else if(!isalpha(str[i]))
        {
            printf("' %s ' is an Invalid Identifier.\n",str);
            break;
        }
    }
    if(len==i && len!=0)
    {
        printf("' %s ' is a Valid Identifier.\n",str);
    }
}
int main()
{
    char str[50];
    char s[50]="";
    int i,len;
    printf("Enter a instruction:\n");
    gets(str);
    printf("\n\nResult:\n\n");
    for(i=0; i<=strlen(str); i++)
    {
        if(isDelimeter(str[i]))
        {
            if(isReserved_word(s))
            {
                printf("' %s ' is a Reserved Word.\n",s);
                s[0]='\0';
            }
            else if(isOperator(str[i]))
            {
                printf("' %c ' is a Operator.\n",str[i]);
                isValid(s);
                s[0]='\0';
            }
            else if(isdigit(s))
            {
                if(isInt(s)==false)
                {
                    printf("' %s ' is a Integer.\n",s);
                    s[0]='\0';
                }
                else
                {
                    printf("' %s ' is a Floating number.\n",s);
                    s[0]='\0';
                }
            }
            else
            {
                isValid(s);
                s[0]='\0';
            }
        }
        else
        {
            strncat(s, &str[i], 1);
        }
    }
    return 0;
}
