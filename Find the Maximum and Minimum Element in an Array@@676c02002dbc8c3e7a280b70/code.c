#include <stdio.h>

int main() {
    int a,i,s[a],k,j;

    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int max=s[0]
    for(j=1;j<sizeof(s);j++){
        if(max<s[j]){
            max=s[j];
        }
    }
    int min=s[0]

    for(k=1;k<sizeof(s);k++){
        if(min>s[k]){
            min=s[k];
        }
    }
    printf("%d",min);
    printf("%d",max);

    return 0;
}