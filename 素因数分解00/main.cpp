#include <stdio.h>

int main(void)
{
    int a,n;

    scanf("%d",&n);
    a = 2;
    while ( n >= a*a ) {
        if ( n % a == 0 ) {
            printf("%d、",a);
            n = n/a;
        } else {
            a ++;
        }
    }
    printf("%d\n",n);

    return 0;
}
