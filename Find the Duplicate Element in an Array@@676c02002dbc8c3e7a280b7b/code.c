#include <stdio.h>

int main()
{
    int a ;
    scanf("%d",&a);
    int s[a];
    for(int k=0;k<a;k++){
        scanf("%d",&s[k]);
    }
    int b=s[0];
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(s[i]==s[j]){
                b=s[i];
                break;
            }
        }
        if(b!=s[0]){
            break;
        }
    }
    printf("%d",b);

    return 0;
}