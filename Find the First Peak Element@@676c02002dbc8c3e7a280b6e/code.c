#include <stdio.h>

int main() {
    int a,i,j,s[],b;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    for(j=0;j<=sizeof(s);j++){
        if(s[j]>s[j-1]){
            printf("%d",s[j]);
            break;
        }
    }
    return 0;
}