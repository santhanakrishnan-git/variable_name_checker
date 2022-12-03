#include<C:\Users\ELCOT\Desktop\T and P\iskeyword.h>
#include<string.h>
#include<ctype.h>
int main(){
    char *s;int flag;      //dynamically creating Array of Characters i.e. Strings
    s=(char*)malloc(sizeof(char)*32);
    printf("Enter a Variable Name : ");
    gets(s);
    for(int i=0;i<strlen(s);i++){
            if(i==0) {if(!!isalpha(s[0])==1 || s[0]=='_') flag=1; else{ flag=0;break;}}
            else if(i>0) {if(!!isalnum(s[i])==1||s[i]=='_') flag=1;
            else {flag=0;break;}}
    }
    if(flag==1&&strlen(s)<32&&iskeyword(s)==0) printf("Valid");
    else printf("Invalid");
}
