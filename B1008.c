#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, move, i, again = 0;
	int a[100];
	scanf("%d%d", &n, &move);
	move %= n;
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
	}
	if (move == 0) {
		printf("%d", a[0]);
		for (i = 1; i < n; i++) {
			printf(" ");
			printf("%d", a[i]);
		}
		return 0;
	}
	printf("%d", a[n - move]);
	for (i = n - move + 1;; i++) {
		if (i >= n) {
			i = 0;
			again = 1;
		}
		if (again && (i >= n - move))break;
		printf(" ");
		printf("%d", a[i]);
	}
	getchar();
	getchar();
	return 0;
}