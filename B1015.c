#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct stu {
	int code;
	int de;
	int ca;
	int all;
};
void quicksort(struct stu item[], int n);
int cmp(struct stu item1, struct stu item2);
int partition(struct stu item[], int n, int pivot_index);
void swap(struct stu * a, struct stu * b);
int main() {
	int n, high, low, i, l = 0, m = 0, j = 0, o = 0;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, all = 0, temp = -1;
	struct stu a[10000],b[10000],c[10000], d[10000], p;
	scanf("%d%d%d", &n, &low, &high);
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &p.code, &p.de, &p.ca);
		if (p.de >= high && p.ca >= high) {
			a[l].code = p.code;
			a[l].de = p.de;
			a[l].ca = p.ca;
			a[l].all = p.de + p.ca;
			l++;
			all++;
		}
		else if (p.de >= high && p.ca >= low) {
			b[m].code = p.code;
			b[m].de = p.de;
			b[m].ca = p.ca;
			b[m].all = p.de + p.ca;
			m++;
			all++;
		}
		else if (p.de >= low && p.ca >= low&&p.de >= p.ca) {
			c[j].code = p.code;
			c[j].de = p.de;
			c[j].ca = p.ca;
			c[j].all = p.de + p.ca;
			j++;
			all++;
		}
		else if (p.de >= low && p.ca >= low) {
			d[o].code = p.code;
			d[o].de = p.de;
			d[o].ca = p.ca;
			d[o].all = p.de + p.ca;
			o++;
			all++;
		}
	}
	printf("%d\n", all);
	quicksort(a, l);
	quicksort(b, m);
	quicksort(c, j);
	quicksort(d, o);
	for (i = 0; i < l; i++) {
		printf("%d %d %d\n", a[i].code, a[i].de, a[i].ca);
	}
	for (i = 0; i < m; i++) {
		printf("%d %d %d\n", b[i].code, b[i].de, b[i].ca);
	}
	for (i = 0; i < j; i++) {
		printf("%d %d %d\n", c[i].code, c[i].de, c[i].ca);
	}
	for (i = 0; i < o; i++) {
		printf("%d %d %d\n", d[i].code, d[i].de, d[i].ca);
	}
	getchar();
	getchar();
	return 0;
}
int cmp(struct stu item1, struct stu item2) {
	if (item1.all != item2.all)return item1.all - item2.all;
	else if (item1.de != item2.de)return item1.de - item2.de;
	else return item2.code - item1.code;
}
void quicksort(struct stu item[], int n) {
	int left_count;
	if (n <= 1)return;
	left_count = partition(item, n, 0);
	quicksort(item, left_count);
	quicksort(&item[left_count + 1], n - (left_count + 1));
}
int partition(struct stu a[], int n, int pivot_index) {
	int i, left_count = 0;
	struct stu p = a[pivot_index];
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
void swap(struct stu * a, struct stu * b) {
	struct stu t;
	t = *a;
	*a = *b;
	*b = t;
}