#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[51];
    char author[31];
    float price;
} Book;


int main() {
    Book *arr;
    int n, i;
    printf("Nhap so luong sach : ");
    scanf("%d", &n);
    // cap phat bo nho cho mang
    arr = (Book*)malloc(n * sizeof(Book));
    // kiem tra co cap phat bo nho thanh cong ko
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.");
        exit(1);
    }
    // nhap gia tri mang
    for (i = 0; i < n; i++) {
        printf("Nhap ten sach thu %d: ", i + 1);
        scanf(" %51[^\n]", arr[i].name);
        printf("Nhap ten tac gia : ");
        scanf(" %31[^\n]", arr[i].author);
        printf("Nhap gia sach : ");
        scanf("%f", &arr[i].price);
    }
    // in gia tri mang
    printf("Cac phan tu trong mang: \n");
    for (i = 0; i < n; i++) {
    printf("ten sach: %s \ntac gia: %s \ngia sach: %f \n", arr[i].name, arr[i].author, arr[i].price);
    }
    // Giai phong bo nho
    free(arr);
    return 0;
}
