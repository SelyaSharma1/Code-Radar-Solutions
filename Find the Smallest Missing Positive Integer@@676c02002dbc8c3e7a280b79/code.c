#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int s[a];
    for(int i=0;i<a;i++){
        scanf("%d",&s[i]);
    }
    for(int m=0;m<a;m++){
        for(int k=0;k<a-m;k++){
            if(s[k]>s[k+1]){
            int temp=s[k];
            s[k]=s[k+1];
            s[k+1]=temp;}
        }
    }
    int count=s[0];
    if(a>1){
    for( int j=0;j<a;j++){
        if(s[j]==count){
            count++;
        }
        
    }
    printf("%d",count);
}
else{
    printf("%d",a);
}
    
    
    return 0;
}