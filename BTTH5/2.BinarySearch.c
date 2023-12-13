#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Tra ve vi tri cua phan tu trong mang
        }

        if (arr[mid] < target) {
            left = mid + 1; // Tiep tuc tim kiem trong nua dau tien cua mang
        } else {
            right = mid - 1; // Tiep tuc tim kiem trong nua dau tien cua mang
        }
    }

    return -1; // Tra ve -1 neu khong tim thay
}

int main() {
    int arr[] = {1 ,2 ,3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binarySearch(arr, size, target);

    if (result == -1) {
        printf("khong tim thay phan tu %d trong mang\n", target);
    } else {
        printf("phan tu %d nam tai vi tri %d trong mang\n", target, result);
    }

    return 0;
}
