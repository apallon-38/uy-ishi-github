#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "muhammadali.h"

int main() {
    srand(time(NULL));
    int A[10];
    
    for (int i = 0; i < 10; i++) {
        A[i] = rand() % 21;  
    }

    analyze_array(A, 10);

    return 0;
}

