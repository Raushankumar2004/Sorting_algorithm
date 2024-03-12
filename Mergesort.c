#include <stdio.h>

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    int i, j, k;

    for (i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            arr[k] = a[i];
 k++;
            i++;
        } else {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1) {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2) {
        arr[k] = b[j];
        k++; 
j++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
