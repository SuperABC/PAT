#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[], int n);
int main() {
	int n, i, j, temp;
	int max, num;
	int list[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", list + i);
	}
	for (i = 0; i < n - 1; i++) {
		max = list[i];
		for (j = i + 1; j < n; j++) {
			if (list[j] > max) {
				max = list[j];
				num = j;
			}
		}
		temp = list[i];
		list[i] = list[num];
		list[num] = temp;
	}
	for (i = 0; i < n; i++) {
		temp = list[i];
		if (temp <= 1)continue;
		while (temp != 1) {
			if (temp & 1)temp = (temp * 3 + 1) / 2;
			else temp /= 2;
			for (j = 0; j < n; j++) {
				if (list[j] == temp)list[j] = 0;
			}
		}
	}
	for (i = 0; i < n; i++) {
		if (list[i] > 1) {
			printf("%d", list [i]);
			i++;
			break;
		}
	}
	for ( ; i < n; i++) {
		if (list[i] > 1) {
			printf(" ");
			printf("%d", list [i]);
		}
	}
	return 0;
}
void quicksort(int a[], int n) {
	int max, num, i, j, temp;
	for (i = 0; i < n-1; i++) {
		max = a[i];
		for (j = i + 1; j < n; j++) {
			if (a[j] > max) {
				max = a[j];
				num = j;
			}
		}
		temp = a[i];
		a[i] = a[num];
		a[num] = temp;
	}
}