#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	char *a1, *a2;
	char *b1, *b2;
	int wk, h, m = 0;
	a1 = malloc(61 * sizeof(char));
	a2 = malloc(61 * sizeof(char));
	b1 = malloc(61 * sizeof(char));
	b2 = malloc(61 * sizeof(char));
	scanf("%s%s%s%s", a1, a2, b1, b2);
	while (1) {
		if (*a1 == *a2&&*a1 <= 'G'&&*a1 >= 'A')break;
		a1++;
		a2++;
	}
	wk = *a1 - 'A' + 1;
	a1++;
	a2++;
	while (1) {
		if (*a1 == *a2 && ((*a1 <= 'N'&&*a1 >= 'A') || (*a1 <= '9'&&*a1 >= '0')))break;
		a1++;
		a2++;
	}
	if (*a1 <= '9')h = *a1-'0';
	else h = *a1 - 'A' + 10;
	while (1) {
		if (*b1 == *b2&&((*b1 >= 'a'&&*b1 <= 'z')||(*b2 >= 'A'&&*b2 <= 'Z')))break;
		b1++;
		b2++;
		m++;
	}
	switch (wk) {
	case 1:printf("MON "); break;
	case 2:printf("TUE "); break;
	case 3:printf("WED "); break;
	case 4:printf("THU "); break;
	case 5:printf("FRI "); break;
	case 6:printf("SAT ");  break;
	case 7:printf("SUN "); break;
	}
	if (h < 10)printf("0");
	printf("%d:", h);
	if (m < 10)printf("0");
	printf("%d", m);
	getchar();
	getchar();
	return 0;
}