#include <stdio.h>
int main(void)
{
    double a[2][2]={{4,5},{8,9}};
    double det,num;

    det=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    num=a[0][0];
    a[0][0]=a[1][1]/det;
    a[0][1]=a[0][1]/det*(-1);
    a[1][0]=a[1][0]/det*(-1);
    a[1][1]=num/det;


    printf("逆行列↓\n%5.1f%5.1f\n%5.1f%5.1f\n",a[0][0],a[0][1],a[1][0],a[1][1]);


    return 0;
}

