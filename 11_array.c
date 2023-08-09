// int n1,n2,n3,n4,n5;
// array - collection of which has same datatype
// int n[10];
//     n[0] = 11
//     n[1] = 22
//     n[2] = 33
//     n[3] = 44
//     n[4] = 55

//     n[9] = 100
//     n-> int variable
//     []-> index
//     index always start from 0
//     array store data sequentialy
// one dimension array

// #include<stdio.h>
// int main()
// {
//     double n[10];
//     int i;
    //insert value an array
//     for(i=0;i<5;i++)
//     {
//         printf("Enter n[ %d ] : ",i);
//         scanf("%ld",&n[i]);
//     }
//     //print value an array
//     for(i=0;i<5;i++)
//     {
//         printf("\n n[ %d ] : %ld  -  %u",i,n[i],&n[i]);
//     }
//     return 0;
// }
//  n[ 0 ] : 11  -  1807118688
                                    // 4
//  n[ 1 ] : 22  -  1807118692
                                    // 4
//  n[ 2 ] : 33  -  1807118696
                                    // 4
//  n[ 3 ] : 44  -  1807118700
                                    // 4
//  n[ 4 ] : 55  -  1807118704


//  0   1   2  |
// -----------------------
//  1   2   3  |   0  -> row
//  4   5   6  |   1
//  7   8   9  |   2

//  c
//  o
//  l

//  0-0 / 11     0-1 / 22    0-2 / 33
//  1-0 / 44     1-1 / 55    1-2 / 66
//  2-0 / 77     2-1 / 88    2-2 / 99

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10];
    int i,j;
    printf("\n Enter Matrix A \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a[ %d ][ %d ] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter Matrix B \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter b[ %d ][ %d ] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Matrix A \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix B \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n Matrix A + B \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}


