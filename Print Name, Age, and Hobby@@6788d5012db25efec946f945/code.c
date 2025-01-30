#include <stdio.h>

void main() {
    char name[50];
    char hobby[50];
    int age;
    scanf("%s%s%d",&name,&hobby,&age);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    
}