#include <stdio.h>

int main() {
    int a,i,s[a],k,j,c,d;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        scanf("%d",&s[i]);
    }
    for(j=1;j<=sizeof(s);j++){
        if(s[j-1]>s[j]){
            c=s[j-1];
        }
    }
    printf("%d",c);

    for(k=1;k<=sizeof(s);k++){
        if(s[k-1]<s[k]){
            d=s[k-1];
        }
    }
    printf("%d",d);

    return 0;
}