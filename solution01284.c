#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2 || (n > 2 && n % 2 == 0))
        return 0;
    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main(int argc, char *argv[]) {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i < n; ++i)
        if (n % i == 0 && isPrime(i) && isPrime(n / i)) {
            printf("%d %d", i, n / i);
            break;
        }
    if (n == i)
        printf("wrong number");
}