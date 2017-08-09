#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int prime(int n);
int main() {
	int st, en, i, j, fi = 1, count = 0;
	scanf("%d %d", &st, &en);
	for (i = 2, j = 0; j < st; i++) {
		if (prime(i))j++;
	}
	i--;
	for (; j <= en; i++) {
		if (prime(i)) {
			j++;
			if (fi)fi = 0;
			else printf(" ");
			printf("%d", i);
			count++;
		}
		if (count >= 10) {
			printf("\n");
			fi = 1;
			count = 0;
		}
	}
	getchar();
	getchar();
	return 0;
}
int prime(int n) {
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n%i == 0)return 0;
	}
	return 1;
}