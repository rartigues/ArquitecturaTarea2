#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int m1();

int main() {
    //fix de seed random
    srand(time(0));
    int a[16];
    for (int i = 0; i < 16; i++) {
        a[i] = rand() % 23;
    }
    int m = m1(a, 16);
    printf("m %d\n", m);
    return 0;
}

int m1(int* a, int n) {
    if (n == 1) {
        return a[0];
    }
    int m = n / 2;
    int v1 = m1(a, m);
    int v2 = m1(a + m, n - m);
    if (v1 > v2) {
        return v1;
    } else {
        return v2;
    }
}