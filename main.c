#include <stdio.h>

int main(void) {
    int n;

    printf("input an integer : ");
    scanf("%i", &n);

    if (n > 0) {
        printf("positive\n");
    } else if (n < 0) {
        printf("negative\n");
    } else {
        printf("zero\n");
    }

    return 0;
}