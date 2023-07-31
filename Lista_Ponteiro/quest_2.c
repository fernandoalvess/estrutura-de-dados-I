#include <stdio.h>

int main(void) {
int x, *p; 
x = 100; 
p = x;
printf("Valor de P = %d.", p);
printf("Valor de *p = %p", *p);
}
