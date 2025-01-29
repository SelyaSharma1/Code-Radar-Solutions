#include <stdio.h>

int main() {
    int a,i,s[a],k,j,c,d;
    int count=0;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        scanf("%d",&s[i]);
    }
    for(j=0;j<sizeof(s);j++){
        if(s[j-1]>s[j]){
            c==s[j-1];
        }
    }
    printf("%d",s[j-1]);

    for(k=0;k<sizeof(s);k++){
        if(s[k-1]<s[k]){
            d==s[k-1];
        }
    }
    printf("%d",s[k-1]);

    return 0;
}