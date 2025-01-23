#include <stdio.h>

int main() {
    int a,b,dif;
    scanf("%d %d",&a,&b);
    dif=a-b;
    if(dif>0){
        printf("Profit");
    }
    else if(dif<0){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}