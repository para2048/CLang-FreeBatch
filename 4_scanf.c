// scanf - function
// it takes input from user
// scanf(format spec,var which wnt to store value)


#include<stdio.h>
int main()
{
    int a,b,c,d,n,m; //4
    char ch1,ch2,ch3,ch4;

    // printf("Enter a : ");
    // scanf("%d",&a);
    // printf("Enter b : ");
    // scanf("%d",&b);

    printf("\n Enter a and b : ");
    scanf("%d %d",&a,&b);

    printf("\n a : %d",a);
    printf("\n b : %d",b);

    c = a+b;

    printf("\n a+b = %d",c);

    // printf("Enter n : ");
    // scanf("%d",&n); // & address of

    // printf("\n value of n : %d",n);
    // printf("\n address of n : %u",&n); //%u unsigned int

    // printf("\n address of m : %u",&m); //%u unsigned int

    printf("\n address of a : %u",&a); //%u unsigned int
    printf("\n address of b : %u",&b); //%u unsigned int
    printf("\n address of c : %u",&c); //%u unsigned int
    printf("\n address of d : %u",&d); //%u unsigned int


    printf("\n address of ch1 : %u",&ch1); //%u unsigned int
    printf("\n address of ch2 : %u",&ch2); //%u unsigned int
    printf("\n address of ch3 : %u",&ch3); //%u unsigned int
    printf("\n address of ch4 : %u",&ch4); //%u unsigned int

    printf("\n");
    return 0;
}