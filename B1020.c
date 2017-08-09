#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct pie {
	float t;
	float all, pr;
};
void quicksort(struct pie item[], int n);
float cmp(struct pie item1, struct pie item2);
int partition(struct pie item[], int n, int pivot_index);
void swap(struct pie * a, struct pie * b);
int main() {
	int n, i, full;
	float result = 0;
	struct pie a[1000];
	scanf("%d %d", &n, &full);
	for (i = 0; i < n; i++)scanf("%f", &a[i].t);
	for (i = 0; i < n; i++)scanf("%f", &a[i].all);
	for (i = 0; i < n; i++)a[i].pr = a[i].all / a[i].t;
	quicksort(a, n);
	for (i = 0; i < n; i++) {
		if (full <= a[i].t) {
			result += full*a[i].pr;
			break;
		}
		else {
			full -= a[i].t;
			result += a[i].all;
		}
	}
	printf("%.2f", result);
	getchar();
	getchar();
	return 0;
}
float cmp(struct pie item1, struct pie item2) {
	return (item1.pr - item2.pr);
}
void quicksort(struct pie item[], int n) {
	int left_count;
	if (n <= 1)return;
	left_count = partition(item, n, 0);
	quicksort(item, left_count);
	quicksort(&item[left_count + 1], n - (left_count + 1));
}
int partition(struct pie a[], int n, int pivot_index) {
	int i, left_count = 0;
	struct pie p = a[pivot_index];
	swap(&a[pivot_index], &a[n - 1]);
	for (i = 0; i < n - 1; i++) {
		if (cmp(a[i], p)>0) {
			swap(&a[i], &a[left_count]);
			left_count++;
		}
	}
	swap(&a[n - 1], &a[left_count]);
	return left_count;
}
void swap(struct pie * a, struct pie * b) {
	struct pie t;
	t = *a;
	*a = *b;
	*b = t;
}