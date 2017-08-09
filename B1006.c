#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, h, t, o, i;
	scanf("%d", &n);
	for (i = 0; i < n / 100; i++) {
		printf("%c", 'B');
	}
	for (i = 0; i < (n / 10) % 10; i++) {
		printf("%c", 'S');
	}
	for (i = 0; i < n % 10; i++) {
		printf("%d", i + 1);
	}
	printf("\n");
}