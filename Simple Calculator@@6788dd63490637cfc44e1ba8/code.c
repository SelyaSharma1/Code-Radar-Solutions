#include <stdio.h>

int main() {
    int a ,b;
    float divs;
    char c;
    divs=(float) a/(float) b;

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
        printf("%d",divs);
    }
    return 0;
}