#include <stdio.h>

int main() {
    int c;
    int count = 0;

    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}


//
