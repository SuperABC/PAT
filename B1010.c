#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, p;
	scanf("%d%d", &n, &p);
	if(p != 0)printf("%d %d", n*p, p-1);
	else printf("0 0");
	if (getchar() == '\n')return 0;
	while (1) {
		scanf("%d%d", &n, &p);
		if (p != 0)printf(" %d %d", n*p, p-1);
		if (getchar() == '\n')return 0;
	}
}