#include<stdio.h>
int main()
{
    int a=100,b=200;  // (initial)ization
    int z;          // declaration

    printf("\na + b = %d",A+b); //a + b = 300

    printf("\n%d + %d = %d",a,b,a+b);   //100 + 200 = 300

    z=a+b;
    printf("\n%d + %d = %d",a,b,z);  //100 + 200 = 300

    z=a-b;
    printf("\n%d + %d = %d",a,b,z);  //100 + 200 = -100

    z=a*b;
    printf("\n%d + %d = %d",a,b,z);  //100 + 200 = 2000

    z=a/b;
    printf("\n%d + %d = %d",a,b,z);  //100 + 200 = 0

    // printf(" 100+20=%d",100+20); //static

    printf("\n");
    return 0;
}
/*
Rules for variable
1)Case-sensitive
    area        Area      AREA
2)only this char are allow  A-Z, a-z, 0-9, _

3)start with only A-Z, a-z ,_
    x1,x2,x3        1x= x,2x = x+x ,3x = x+x+x
    _x1,_x2,_x3     valid
    1x              invalid
    x_              valid

4)no space between variable
    int simple intrest;     invalid
    int simple_intrest;     valid
    int simpleIntrest;      valid - camelcase
    int areaOfCircle;       valid - camelcase

5) variable name should be meaningfull
    float pi=3.14
*/
// Identifier vs Variable
// variable can be identifier
// identifier may not be variabel