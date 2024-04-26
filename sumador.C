#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
    int num1,num2,num3;
    p("/nsuma:");
    p("/ingrese un valor:");
    s("%d",&num1);
    num3=num1+num2;
    p("&d + &d = &d", num1,num2,num3);

}