// #include<stdio.h>
// int main()
// {
//     int r,c,sp=10;
//     for(r=1;r<=5;r++) //Row
//     {
//         for(c=1;c<=sp;c++) //col
//         {
//             printf(" ");
//         }
//         for(c=1;c<=r;c++) //col
//         {
//             printf("* ");
//         }
//         sp--;
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

//         *
//        **
//       ***
//      ****
//     *****

//         *_
//        *_*_
//       *_*_*_
//      *_*_*_*_
//     *_*_*_*_*_

    //       *
    //      * *
    //     * * *
    //    * * * *
    //   * * * * *


// #include<stdio.h>
// int main()
// {
//     int r,c,sp=10;
//     for(r=5;r>=1;r--) //Row
//     {
//         for(c=1;c<=sp;c++) //col
//         {
//             printf(" ");
//         }
//         for(c=1;c<=r;c++) //col
//         {
//             printf("* ");
//         }
//         sp++;
//         printf("\n");
//     }
//     printf("\n");
//     return 0;
// }

// *****
// ****
// ***
// **
// *


//          *****
//          ****
//          ***
//          **
//          *

//          *****
//           ****
//            ***
//             **
//              *

    //   * * * * *
    //    * * * *
    //     * * *
    //      * *
    //       *

#include<stdio.h>
int main()
{
    int i,j,k,sp=10;
    i=1;
    while(i<=5)
    {
        k=1;
        while(k<=sp)
            printf(" ",k++);
        j=1;
        while(j<=i)
            printf(" *",j++);
        printf("\n",i++);
        sp--;
    }
    printf("\n");
    return 0;
}
