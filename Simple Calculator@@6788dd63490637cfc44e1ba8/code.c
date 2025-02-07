#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (c =='+'){
        printf("%d",a+b);
    }
    else if ( c == '-'){
        printf("%d",a-b);
    }
    else if (c == '*'){
        printf("%d",a*b);
    }
    else if (c == '/'){
        printf("%d",a/b);
    }
    else{
        printf("error");
    }
    return 0;
}