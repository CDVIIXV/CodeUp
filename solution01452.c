#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int n1 = *(int *)a;
    int n2 = *(int *)b;
    return n1 < n2 ? -1 : (n1 > n2 ? 1 : 0);
}

int main(int argc, char *argv[]) {
    int n, i;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);

    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compare);

    for (i = 0; i < n; ++i)
        printf("%d\n", arr[i]);

    free(arr);
    return 0;
}