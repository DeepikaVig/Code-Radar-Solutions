#include <stdio.h>

void main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    //printf("Age: %d",age);
}