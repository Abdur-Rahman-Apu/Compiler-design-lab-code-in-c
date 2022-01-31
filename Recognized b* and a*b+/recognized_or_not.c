#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    gets(str);
    int len=strlen(str);

    if(under_b_star(str,len,0,0)||under_a_star_plus_b_positive(str,len,0,0)){
        if(under_b_star(str,len,0,0)==1){
            printf("Recognized under b*");
        }else{
            printf("Recognized under a*b+");
        }

    }else{
        printf("Not recognize");
    }

    return 0;
}
int under_b_star(char str[50],int len,int state,int i){
    for(i=0;i<len;i++){
        if(state==0 && str[i]==' '){
            state=0;
        }else if(state==0 && str[i]=='b'){
            state=0;
        }else{
            return 0;
        }
    }
    if(state==0){
        return 1;
    }
}

int under_a_star_plus_b_positive(char str[50],int len,int state,int i){

    for(i=0;i<len;i++){
        if(state==0&&str[i]=='a'){
            state=0;
        }else if((state==0||state==1)&&str[i]=='b'){
            state=1;
        }else if(state==1 && str[i]!='b'){
            return 0;
        }else{
            return 0;
        }
    }
    if(state==1){
        return 1;
    }else{
        return 0;
    }

}
