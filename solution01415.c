#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, i, omax = -1, emax = 0;
    for (i = 0; i < 10; ++i)
    {
        scanf("%d", &n);
        if (n % 2 == 1 && n > omax)
            omax = n;
        else if (n % 2 == 0 && n > emax)
            emax = n;
    }
    if (omax > 0)
        printf("%d", omax);
    if (omax > 0 && emax > 0)
        printf(" ");
    if (emax > 0)
        printf("%d", emax);
}