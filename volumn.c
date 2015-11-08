#include <stdio.h>

int main(){
	int a, b, c, V, S;
	scanf_s("%d %d %d", &a, &b, &c);
	printf_s("V=%d\nS=%d\n", a * b * c, a * b * 2 + b*c * 2 + a*c * 2);
	return 0;
}