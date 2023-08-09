#include<stdio.h>
int main()
{
    int r,c;
    // for(r=1;r<=5;r++) //Row
    // {
    //     for(c=1;c<=r;c++) //col
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=i)
        {
            printf("# ");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
    return 0;
}


// *                1
// * *              2
// * * *            3
// * * * *          4
// * * * * *        5
