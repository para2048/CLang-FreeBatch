//conditional statement
// a+b arithmatic expression
// a>b relational expression
// a&&b logical expression

//if
    // if(expression)
    // {
            // true part
    // }

// if - else
    // if(expression)
    // {
            // true part
    // }
    // else
    // {
            // false part
    // }
#include<stdio.h>
int main()
{
    // printf("\n Befor if");
    // if(0)
    // {
    //     printf("\n\t inside if");
    // }
    // printf("\n After if");

    // int a=100,b=20;
    // if(a>b)
    // {
    //     printf("\n a is greater ");
    // }

// ------------------------------

    // printf("\n Befor if");
    // if(0)
    // {
    //     printf("\n\t inside if - True Part");
    // }
    // else
    // {
    //     printf("\n\t inside else - False Part");
    // }
    // printf("\n After if");

    int a=100,b=200;
    if(a>b)
    {
        printf("\n a(%d) is greater than b(%d) ",a,b);
    }
    else
    {
        printf("\n b(%d) is greater than a(%d) ",b,a);
    }
    printf("\n");
    return 0;
}