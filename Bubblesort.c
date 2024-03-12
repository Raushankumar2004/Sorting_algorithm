#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(&v[j], &v[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the vector: ");
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &v[i]);
    }
    bubblesort(v, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}



