#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

voidmain() {
    char str[50];
    char st[50];
    scanf("%s%s",&str,&st);
    printf("You entered: %s and %s", str,st);
   
}