#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int item[1000];
	int n, i, a = 0, b = 0;
	int suma1 = 0, suma2 = 0, oe = 0, numa3 = 0, n4 = 0, maxa5 = 0;
	double suma4 = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", item + i);
	}
	for (i = 0; i < n; i++) {
		if (item[i] % 10 == 0)suma1 += item[i];
	}
	for (i = 0; i < n; i++) {
		if (item[i] % 5 == 1) {
			if (oe)suma2 -= item[i];
			else suma2 += item[i];
			oe = !oe;
			a++;
		}
	}
	for (i = 0; i < n; i++) {
		if (item[i] % 5 == 2)numa3++;
	}
	for (i = 0; i < n; i++) {
		if (item[i] % 5 == 3) {
			suma4 += item[i];
			n4++;
			b++;
		}
	}
	if(b)suma4 = suma4 / n4;
	for (i = 0; i < n; i++) {
		if (item[i] % 5 == 4)
			if (item[i] > maxa5)maxa5 = item[i];
	}
	if (suma1)printf("%d", suma1);
	else printf("N");
	printf(" ");
	if (a)printf("%d", suma2);
	else printf("N");
	printf(" ");
	if (numa3)printf("%d", numa3);
	else printf("N");
	printf(" ");
	if (b)printf("%.1f", suma4);
	else printf("N");
	printf(" ");
	if (maxa5)printf("%d", maxa5);
	else printf("N");
	getchar();
	getchar();
	return 0;
}