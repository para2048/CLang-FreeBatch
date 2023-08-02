#include<stdio.h>
int main()
{
    // int a=100,b=20;

    //arithmetic
    // printf("\n a + b = %d",a+b); //120
    // printf("\n a - b = %d",a-b); //80
    // printf("\n a * b = %d",a*b); //2000
    // printf("\n a / b = %d",a/b); //5
    // printf("\n a mod b = %d",a%b); //0

    //relational operator
    // printf("\n %d",10>10);  //F
    // printf("\n %d",10>=10); //T
    // printf("\n %d",10<=10); //T

    // printf("\n %d",10==10);  //T
    // printf("\n %d",10!=10);  //F
    // printf("\n %d",10==11);  //F
    // printf("\n %d",10!=11);  //T

    // assignment operator
    int a=10;
    a+=10; // a = a + 10 ->  a = 10 + 10 -> a=20
    printf("\n %d",a);//20

    a=a-5; //a = a - 5 -> a = 20 -5  -> a = 15
    printf("\n %d",a);//15

    a = a*3; // a = a * 3 -> a = 15 * 3 -> a = 45
    printf("\n %d",a);//15

    a = a/5; // a = a / 5 -> a = 45 / 5 -> a = 9
    printf("\n %d",a);//

    a = a%2; // a = a % 2 -> a = 9 / 2 -> a = 1
    printf("\n %d",a);//

    printf("\n");
    return 0;

}