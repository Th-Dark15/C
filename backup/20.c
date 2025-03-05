#include <stdio.h>

int main(void) {
    int i, j, x=5, y=10;
    for (i=1; i<=6; i++) {
        j = 0;
        while (j < i) {
            if ((i-j)%2 == 0) {
                x++;
                y += i;
                j *= 2;
            } else {
                j++;
                x *= j;
            }
        printf("i = %d / j = %d / ", i, j);
        printf("x = %d / y = %d\n\n", x, y);
    }
    i++;
    }

}
