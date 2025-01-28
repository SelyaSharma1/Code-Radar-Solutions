#include <stdio.h>

int main() {
    int a,i,j,s[a],b,c;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    for(j=1;j<sizeof(s);j++){
        if(s[j]>s[j-1]){
            c=s[j];
        }
    }
    printf("%d",)
    return 0;
}