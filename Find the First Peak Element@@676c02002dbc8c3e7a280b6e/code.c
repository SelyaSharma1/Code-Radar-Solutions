#include <stdio.h>

int main() {
    int a,i,j,s[a],b;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    for(j=1;j<sizeof(s);j++){
        if(s[j-1]>s[j]){
            printf("%d",s[j-1]);
            break;
        }
        
        return 0;
    }
    
    return 0;
}