
#include <stdio.h>
int main()
{
    int n, rev_num=0, remainder;
    scanf("%d", &n);

    while(n!= 0)
    {
        remainder = n%10;
        rev_num=rev_num*10+remainder;
        n/=10;
    }
    printf("Reversed Number=%d",rev_num);
    return 0;
}
