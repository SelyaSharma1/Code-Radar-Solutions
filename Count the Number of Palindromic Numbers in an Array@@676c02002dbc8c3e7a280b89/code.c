#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    int count=0;
    for(int j=0;j<a-1;j++){
        int num=s[j];
        int rr=0;
        while(num>0){
            int r=num%10;
            rr=rr*10+r;
            num/=10;
        }
        
        if(rr==s[j]){
            count++;
        }
        
        
    }
    printf("%d",count);
    
    

    return 0;
}