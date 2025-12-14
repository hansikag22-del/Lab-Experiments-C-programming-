#include <stdio.h>

int main() {
    int a, b, c, d;
    int L = 20;  // Limit (you can change this value)

    printf("Ramanujan numbers up to limit %d:\n", L*L*L);

    // Check all combinations of a^3 + b^3 and c^3 + d^3
    for (a = 1; a <= L; a++) {
        for (b = a; b <= L; b++) {
            int sum1 = a*a*a + b*b*b;

            for (c = a; c <= L; c++) {
                for (d = c+1; d <= L; d++) {
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2) {
                        // Ensure all pairs are different
                        if ((a != c && a != d && b != c && b != d)) {
                            printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                                   sum1, a, b, c, d);
                        }
                    }
                }
            }
        }
    }

    return 0;
}