#include <stdio.h>

int main() {
    int a,j,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<i;j++){
            if(i%2==0&&j%2!=0||i%2!=0&&j%2==0){
                printf(0);
            else{
                printf(1);
            }
            }
        }
    }
    return 0;
}