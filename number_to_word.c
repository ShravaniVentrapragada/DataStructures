#include <stdio.h>
#include <stdlib.h>
int f(int *);
int main() {
	int a=5, *p;
	p = &a;
	f(&a);
	print("p=%d", *p);
	return 0;
}
int f(int *x){
	int y;
	y= *x+ *x;
	return y;
}
