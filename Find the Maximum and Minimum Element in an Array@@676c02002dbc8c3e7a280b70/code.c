#include <stdio.h>

int main() {
    int a,i,k,j;

    scanf("%d",&a);
    int s[a];
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int max=0;
    for(j=1;j<sizeof(s);j++){
        if(max<s[j]){
            max=s[j];
        }
    }
    int min=0;

    for(k=1;k<sizeof(s);k++){
        if(min>s[k]){
            min=s[k];
        }
    }
    printf("%d ",s[k]);
    printf("%d",s[j]);

    return 0;
}