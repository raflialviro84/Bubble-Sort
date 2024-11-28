#include <stdio.h>
int main() {
    // Data dummy yang akan diurutkan
    int data[] = {22, 10, 15, 3, 8, 2};
    int n = sizeof(data) / sizeof(data[0]);
    int i, j, temp;

    printf("Data sebelum diurutkan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    // Proses bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                // Tukar data[j] dan data[j + 1]
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    // Menampilkan hasil setelah diurutkan
    printf("\nData setelah diurutkan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
