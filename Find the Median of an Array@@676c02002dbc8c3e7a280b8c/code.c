#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<a;j++){
        for(int k=0;k<a-j;k++){
            if(s[k]>s[k+1]){
                int temp=s[k];
                s[k]=s[k+1];
                s[k+1]=temp;
            }
        }
    }
    if(a%2==0){
        int x=a/2;
        int f=s[x]+s[x-1];
        int med=f/2;
        printf("%d",med);
    }
    else if(a%2!=0){
        int z=a/2;
        int r=z+0.5;
        printf("%d",s[r]);
    }
    
    

    return 0;
}