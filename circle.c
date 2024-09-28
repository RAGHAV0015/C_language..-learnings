#include<stdio.h>
int main(){
    float r;
    float pi =3.14;
    printf("enter the value of radius:");
    scanf("%f",&r);
    printf("radius of circle is:%.2f",(2*pi)*(r*r));
    return 0;

}