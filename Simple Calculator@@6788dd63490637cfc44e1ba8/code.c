#include <stdio.h>

int main() {
    int a ,b;
    float divs;
    char c;
    divs= a/ b;

    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        printf("%d",a+b);
    }
    else if (c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else{
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    return 0;
}