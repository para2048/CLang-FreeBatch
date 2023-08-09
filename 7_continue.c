//Continue Statement / loop
// 1)for 2)while 3)do-while
/*
for(exp1 ; exp2 ; exp3 )
{
    iterative statement
}
exp1 - initialization   - start         i=1         only once
exp2 - condition        - stop          i<=10       every time befor enter
exp3 - inc/dec          - step          i++/i--     every time befor exit
*/

#include<stdio.h>
int main()
{
    int i=10;
    for(;i>=1;)
    {
        printf("%d\t",i--);
    }
    printf("\n After for - %d ",i );
    printf("\n");
    return 0;
}
/*
exp1        exp2
i=1         i<=10           print       i++
1           1<=10   T       1           2
            2<=10   T       2           3
            3<=10   T       3           4
            4<=10   T       4           5
            5<=10   T       5           6
            6<=10   T       6           7
            7<=10   T       7           8
            8<=10   T       8           9
            9<=10   T       9          10
            10<=10  T       10         11
            11<=10  False





*/

