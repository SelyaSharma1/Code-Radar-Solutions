#include <stdio.h>

int main() {
    int a,i,k,j;

    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int max=s[0];
    for(j=1;j<a;j++){
        if(max<=s[j]){
            max=s[j];
        }
    }
    int min=s[0];

    for(k=1;k<=a;k++){
        if(min>=s[k]){
            min=s[k];
        }
    }
    printf("%d ",min);
    printf("%d",max);

    return 0;
}