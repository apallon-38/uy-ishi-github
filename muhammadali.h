
#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }
    return 1;
}

int count_even(int A[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] % 2 == 0) {
            s++;
        }
    }
    return s;
}

int sum_even(int A[], int size) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] % 2 == 0) {
            k += A[i];
        }
    }
    return k;
}

int count_odd(int A[], int size) {
    int l = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] % 2 != 0) {
            l++;
        }
    }
    return l;
}

int sum_odd(int A[], int size) {
    int n = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] % 2 != 0) {
            n += A[i];
        }
    }
    return n;
}

int count_prime(int A[], int size) {
    int y = 0;
    for (int i = 0; i < size; i++) {
        if (is_prime(A[i])) {
            y++;
        }
    }
    return y;
}

int sum_prime(int A[], int size) {
    int u = 0;
    for (int i = 0; i < size; i++) {
        if (is_prime(A[i])) {
            u += A[i];
        }
    }
    return u;
}

int count_negative(int A[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] < 0) {
            count++;
        }
    }
    return count;
}

int sum_negative(int A[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] < 0) {
            sum += A[i];
        }
    }
    return sum;
}

int count_positive(int A[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] > 0) {
            count++;
        }
    }
    return count;
}

int sum_positive(int A[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] > 0) {
            sum += A[i];
        }
    }
    return sum;
}

void print_array(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", A[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

void analyze_array(int A[], int size) {
    print_array(A, size);

    printf("Juft sonlar soni = %d\n", count_even(A, size));
    printf("Juftlar yig'indisi = %d\n", sum_even(A, size));
    printf("Toq sonlar soni = %d\n", count_odd(A, size));
    printf("Toq sonlar yig'indisi = %d\n", sum_odd(A, size));
    printf("Tub sonlar soni = %d\n", count_prime(A, size));
    printf("Tub sonlar yig'indisi = %d\n", sum_prime(A, size));
    printf("Manfiy sonlar soni = %d\n", count_negative(A, size));
    printf("Manfiy sonlar yig'indisi = %d\n", sum_negative(A, size));
    printf("Musbat sonlar soni = %d\n", count_positive(A, size));
    printf("Musbat sonlar yig'indisi = %d\n", sum_positive(A, size));
}

