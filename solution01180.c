#include <stdio.h>
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    n = (2 * (n % 10 * 10 + n / 10)) % 100;
    n <= 50 ? printf("%d\nGOOD", n) : printf("%d\nOH MY GOD", n);
    return 0;
}