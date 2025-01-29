#include <stdio.h>

int main() {
    int a,i,s[a],k,j;
    int max=s[0];
    int min=s[0];
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(j=1;j<sizeof(s);j++){
        if(max<s[j]){
            max=s[j];
        }
    }

    for(k=1;k<sizeof(s);k++){
        if(min>s[k]){
            min=s[k];
        }
    }
    printf("%d",min);
    printf("%d",max);

    return 0;
}