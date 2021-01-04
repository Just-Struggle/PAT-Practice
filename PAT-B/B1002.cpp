#include <stdio.h>
#include <string.h>

int main(void){
    char s[100];
    char py[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int digits[10];
    int sum=0;
    int length;
    int i;

    scanf("%s",s);
    length=strlen(s);

    for(i=0;i<length;i++){
        sum+=s[i]-'0';
    }

    length=0;
    while(sum){
        digits[length++]=sum%10;
        sum/=10;
    }

    for(i=length-1;i>=0;i--){
        printf("%s",py[digits[i]]);
        if(i) printf(" ");
        else printf("\n");
    }

    return 0;
}
