#include <stdio.h>

void swap(long long* a, long long* b) {
    long long temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("%d", &n);
    long long a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
    }

    // S?p x?p ba s? d?u tiên theo th? t? gi?m d?n
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (a[i] < a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }

    // In ba s? l?n nh?t ban d?u
    printf("%lld %lld %lld\n", a[0], a[1], a[2]);

    // So sánh và x? lý s? t? s? th? 4 tr? di
    for (int i = 3; i < n; i++) {
        if (a[i] > a[0]) {
            a[2] = a[1];
            a[1] = a[0];
            a[0] = a[i];
        } else if (a[i] > a[1]) {
            a[2] = a[1];
            a[1] = a[i];
        } else if (a[i] > a[2]) {
            a[2] = a[i];
        }

        // In ba s? l?n nh?t hi?n t?i
        printf("%lld %lld %lld\n", a[0], a[1], a[2]);
    }

    return 0;
}

