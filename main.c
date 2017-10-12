#include <stdio.h>
#include <stdlib.h>

/*

= ggT(42, 27)
= ggT(15 + 27 * 1, 42)
= ggT(12 + 15 * 1, 27)
= ggT(3 + 12 * 1, 15)
= ggT(3 * 4 + 0 ,12)

= |3| = 3

 42 = 27 * 1 + 15
 27 = 15 * 1 + 12
 15 = 12 * 1 + 3
 12 = 3 * 4 + 0
    = 3

 */

//Laufzeit =(log(min(a, b)))

int EUCL(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return EUCL(b, a % b);
    }
}

int main() {
    printf("Hello, World!\n");
    printf("euk %d", EUCL(42, 27));
    return 0;
}