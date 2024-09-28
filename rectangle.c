#include<stdio.h>
int main(){
    float a,b;
    printf("enter the valuse of side a:");
    scanf("%f",&a);
    printf("enter the side b:");
    scanf("%f",&b);
    float area =2*a*b;
    printf("the area of rectangle is %.2f",area);
    return 0;
}