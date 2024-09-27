#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(1000000 * sizeof(int));

    if (arr == NULL) {
        printf("Loi khong the cap phat bo nho");
        return 1;
    }

    //su dung mang
    free(arr);

    return 0;
}

