#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n);
int main() {
	int i, max, count = 0;
	scanf("%d", &max);
	for (i = 3; i < max - 1; i += 2) {
		if (prime(i) && prime(i + 2))count++;
	}
	printf("%d", count);
	getchar();
	getchar();
	return 0;
}
int prime(int n) {
	int i;
	for (i = 3; i <= sqrt(n); i++) {
		if (n%i==0)return 0;
	}
	return 1;
}