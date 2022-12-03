#include<string.h>
int iskeyword(char string1[32]){
    int i,flag=0;
     char key_list[32][10]={"auto","break","case","char","continue","do","default","const","double","else","enum","extern","for","if","goto","float","int","long","register","return","signed","static","sizeof","short","struct","switch","typedef","union","while","volatile","unsigned","void"};
     for(i=0;i<32;i++){
        if(strcmp(string1,key_list[i])==0) {flag=1;break;}
     }
     if(flag==1) return 1;
     else return 0;
}
