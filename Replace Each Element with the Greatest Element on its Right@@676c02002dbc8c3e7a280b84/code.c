#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<a-1;j++){
        for(int k=0;k<a-j-1;k++){
            if(s[k]<s[k+1]){
                int temp=s[k];
                s[k]=s[k+1];
                s[k+1]=temp;
                
            }
        }
    }
    for(int i=0;i<a;i++){
        printf("%d",s[i]);}
    

    return 0;
}