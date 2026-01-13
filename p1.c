#include<stdio.h>
#include<string.h>
int main(){
int i,s=0;
    char s1[10];
   scanf("%s",s1);
   int d=strlen(s1);
   for(i=0;i<d;i++){
    if(s1[i]>='0' && s1[i]<='9'){
   
    s=s+(s1[i]-'0');
    }
   }
   printf("%d\n",s);
return 0;
}
