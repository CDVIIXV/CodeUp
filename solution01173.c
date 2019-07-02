#include <stdio.h>

int main(int argc, char *argv[]) {
    const int max_hour = 23, max_minute = 59;
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    minute -= 30;
    if (minute < 0) {
        minute += max_minute + 1;
        --hour;
        if (hour < 0)
            hour = max_hour;
    }
    printf("%d %d", hour, minute);
    return 0;
}