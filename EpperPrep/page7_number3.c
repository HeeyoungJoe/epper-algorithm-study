/*#include<stdio.h>
#include<stdlib.h>
//catalan numbers
int factorial(int n) {
	int factorial_res = 1;
	for (int i = 1; i <= n; i++) {
		factorial_res *= i;
	}
	return factorial_res;
}
int catalan(int n) {
	return factorial(2*n) / (factorial(n + 1)*factorial(n));
}
void main()
{
	int num = 0;
	scanf_s("%d", &num);
	printf("\nnumber of valid parenthesis:%d", catalan(num));
}*/