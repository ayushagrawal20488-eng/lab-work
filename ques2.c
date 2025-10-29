#include<stdio.h>
int main(){
    int a,b,c,*p1,*p2;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    c=*p1+*p2;
    printf("Sum is %d",c);
    return 0;
}