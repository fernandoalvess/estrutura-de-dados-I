#include <stdio.h>

int main (void) {
int x, y, *p;

y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;

printf("Y: %d\n", y);
printf("X: %d\n", x);
printf("P: %p\n", p);
}