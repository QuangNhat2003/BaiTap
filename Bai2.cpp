#include <stdio.h>
#include <math.h>

// Hàm kiểm tra xem một số có phải là số chính phương hay không
int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTong so chinh phuong la: %d\n", count);
}

int main() {
    int n;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    countAndPrintPerfectSquares(n);
    return 0;
}
