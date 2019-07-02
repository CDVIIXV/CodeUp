#include <stdio.h>

int arr[10000000];

int main(int argc, char *argv[]) {
    int n, m, i, num;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &num);
        arr[num - 1] = 1;
    }
    scanf("%d", &m);
    for (i = 0; i < m; ++i) {
        scanf("%d", &num);
        if (arr[num - 1] > 0)
            printf("1 ");
        else
            printf("0 ");
    }
}