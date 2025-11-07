#include "stdio.h"

int main() {
    for (int i = 0; i < 11; i++) {
        if (i < 10) {
            printf("%d/", i);
        } else {
            printf("%d\n", i);
        }
    }

    
    for (int i = 27; i >= 7; i--) {
        if (i > 7) {
            printf("%d$", i);
        } else {
            printf("%d\n", i);
        }
    }

    for (int i = 0; i < 123; i += 7) {
        printf("%d ", i);
    }
    printf("\n");
    
    int i = 0;
    while (i <= 12) {
        if (i < 12) {
            printf("%d;", i);
        } else {

            printf("%d\n", i);
        }
        i += 2;
    }

    i = 123;
    while (i >= 111) {
        printf("%d ", i);
        i--;
    }
    printf("\n");

    return 0;
}

