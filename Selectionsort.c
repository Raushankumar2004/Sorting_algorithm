#include <stdio.h>
#include <stdlib.h>

void selectionsort(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min_index]) {
                min_index = j;
            }
        }
        if (i != min_index) {
            int temp = v[i];
            v[i] = v[min_index];
            v[min_index] = temp;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int *v = (int*)malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    selectionsort(v, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v);

    return 0;
}




