#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isOperator(char ch){
 if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%'||ch=='<'||ch=='>'||
 ch=='!' || ch=='&&' || ch=='||' || ch=='='){
 return true;
 }else{
 return false;
 }
}

bool isDelimeter(char ch){

	if (ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == '>' || ch == '<' ||
		ch == '=' ){
        return true;
       }else{
        return false;
       }

}


bool isMisc(char ch){

	if (ch == '?' || ch == ';'){
        return true;
       }else{
        return false;
       }

}

int isInt(char str){


    if(isdigit(str))
    {
        return 1;
    }else{
        return 0;
    }

}


int main()
{
    char str[50],vol[50]="",constnt[50]="",integer[50]="",oprt[50]="",mis[50]="";
    int c=0,v=0,in=0,opt=0;
    int i,count=0,vow=0,cons=0,op=0,misc=0,full=0,point=0;
    gets(str);

    for(i=0;i<strlen(str);i++)
    {

        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            vol[vow]=str[i];
            vow++;

        }else if(!(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'|| str[i]==' ' || isdigit(str[i]))){
            if(!(isOperator(str[i]) || isDelimeter(str[i]) || isMisc(str[i]))){
                    constnt[cons]=str[i];
                cons++;
            }
        }

        if(isOperator(str[i])){
                oprt[op]=str[i];
            op++;
        }

        if(isMisc(str[i])){
                mis[misc]=str[i];
            misc++;
        }

        if(isInt(str[i]))
        {
            integer[full]=str[i];
            full++;
        }



    }

    printf("Vowel:%d.\n",vow);
    for(i=0;i<vow;i++)
    {
        printf("%c,",vol[i]);
    }
    printf("\n");
    printf("Consonant:%d.\n",cons);
    for(i=0;i<cons;i++)
    {
        printf("%c,",constnt[i]);
    }
     printf("\n");
    printf("Integer:%d\n",full);
    for(i=0;i<full;i++)
    {
        printf("%c,",integer[i]);
    }
     printf("\n");
    printf("Operator:%d\n",op);
    for(i=0;i<op;i++)
    {
        printf("%c,",oprt[i]);
    }
    printf("\n");

    printf("Misc:%d\n",misc);

    for(i=0;i<misc;i++)
    {
        printf("%c,",mis[i]);
    }
}
