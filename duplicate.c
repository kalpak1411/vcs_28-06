#include <stdio.h>
#include<conio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {2, 4, 1},
        {5, 5, 7}
    };

    int rows = 3, cols = 3;

    printf("Duplicates:\n");

    for (int i = 0; i < rows * cols; i++) {
        for (int j = i + 1; j < rows * cols; j++) {

            if (arr[i/cols][i%cols] == arr[j/cols][j%cols]) {
                printf("%d ", arr[i/cols][i%cols]);
            }
        }
    }

    return 0;
}