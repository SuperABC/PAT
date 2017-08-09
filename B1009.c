#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	char *a[40];
	int i;
	for (i = 0; i < 40; i++) {
		a[i] = malloc(80 * sizeof(char));
		scanf("%s", a[i]);
		if (getchar() == '\n')break;
	}
	printf("%s", a[i]);
	i--;
	while (i >= 0) {
		printf(" ");
		printf("%s", a[i]);
		i--;
	}
}