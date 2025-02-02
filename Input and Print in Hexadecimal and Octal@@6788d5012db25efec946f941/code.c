#include <stdio.h>
#include <ctype.h>
int main() {
    int c ;
    scanf("%d",&c);
    printf("Hexadecimal: %X\n",toupper(c));
    printf("Octal: %o",c);
    return 0;
}