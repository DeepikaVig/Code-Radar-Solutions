// Your code here...
#include<stdio.h>
void main(){
    int num,prime=1;
    scanf("%d",&num);
    for (int i=2;i<num-1;i++){
        if(num%i==0){
            prime=0;
            break;
        }
    }
    if(prime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}