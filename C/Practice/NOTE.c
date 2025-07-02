&a as an address of a variable:
*&a → * and & cancel each other → becomes just a → value not address

Pointer:
int *p, x, a[5] = {1, 2, 3, 4, 5};
p = a + 1;

p = a + 1; means pointer p points to a[1], which holds the value 2.