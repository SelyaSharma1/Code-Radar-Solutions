#include <stdio.h>

int main() {
    int a,i,j,k,l,m,n;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=1;j<=a-i;j++){
            printf("*");
        }
        for(k=1;k<=2*i+1;k++){
            printf(" ");
        }
        printf("\n")
    for(l=a-1;l>0;l--){
        for(m=a-1;m>=l;m--){
            printf("*");
        }
        for(n=2*l-1;n>=1;n--){
            printf(" ")
        }
    }printf("\n")
    }
    return 0;
}