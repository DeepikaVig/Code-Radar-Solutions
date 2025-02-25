// Your code here...
#include<stdio.h>
void main(){
    int num,count =0;
    scanf("%d",&num);
    for (int i=2;i<num/2;i++){
        if(num%i==0){
            count=count+1;
            break;
        }
    }
    if(count==0 && num>1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}