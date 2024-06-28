#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*33选7个不同的随机数并排序 

void main() {
	int num[7], n = 0;
	int i = 0, j = 0, temp = 0;
	int index = 0;
	int same = 0;
	srand((unsigned)time(NULL));
	while(1) {
		same = 0;
		n = rand() % 33 + 1;
		for(i = 0; i < index; i++) {
			if(num[i] == n) {
				same = 1;
				break;
			}
		}
		if(same) {
			continue;
		}
		num[index] = n;
		index++;
		if(index ==7) {
			break;
		}
	} 
	for(i = 0; i < index - 1; i++) {//排序 
		for(j = 0; j < 7 - i - 1; j++) {
			if(num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num [j + 1] = temp;
			}
		}
	}
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
} 
*/

/*生成是个随机数挨个放到数组的相应位置 
void main() {
	int num[10], n = 0;
	int i = 0;
	while(i < 10) {
		n = rand() % 10 + 1;
		if(n == (i + 1)) {
			num[i] = n;
			i++;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
} 
void main() {
	int num[10];
	int i = 0;
	int n = 0; 
	while(i < 10) {
		n = rand() % 10 + 1;
		if(n == (i + 1)) {
			num[i] = n;
			i++;
		}
	} 
	for(i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}
void main() {
	int num[10];
	int i = 0;
	int n = 0;
	while(i < 10) {
		n = rand() % 10 + 1;
		if(n == (i + 1)) {
			num[i] = n;
			i++;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}
void main() {
	int num[10], n = 0;
	int i = 0;
	while(i < 10) {
		n = rand() % 10 + 1;
		if(n == (i + 1)) {
			num[i] = n;
			i++;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}
void main() {
	int num[10], n = 0;
	int i = 0;
	while(i < 10) {
		n = rand() % 10 + 1;
		if(n == (i + 1)) {
			num[i] = n;
			i++;
		}
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}
*/

/*
void main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d %d %d\n", a, b, p1, p2);
	printf("%d %d %d %d", *p1, *p2, &a, &b);
}
void main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d %d %d\n", a, b, p1, p2);
	printf("%d %d %d %d", *p1, *p2, &a, &b); 
}
void main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d %d %d \n", a, b, p1, p2);
	printf("%d %d %d %d", *p1, *p2, &a, &b);
}
void main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d %d %d\n", a, b, p1, p2);
	printf("%d %d %d %d", *p1, *p2, &a, &b);
}
vodi main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d %d %d\n", a, b, p1, p2);
	printf("%d %d %d %d", *p1, *p2, &a, &b);
}
*/

/*
void main() {
	int a = 1, b = 2;
	int *p1;
	int *p2;
	p1 = &a;
	printf("%d %d %d\n", a, p1, *p1);
	printf("%d %d %d", a, *(p1 + 1), *p1);//离散的变量用指针来算术运算是错的 
}
void main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	printf("%d %d %d\n", a, p1, *p1);
	printf("%d %d %d", a, *(p1 + 1), (p1 + 1));
}
void main() {
	int a = 1, b =2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d %d %d \n", a, p1, *p1);
	printf("%d %d %d", a, *(p1 + 1), (p1 + 1));
}
void main() {
	int a = 1;
	int *p1;
	p1 = &a;
	printf("%d %d %d\n", a, p1, *p1);
	printf("%d %d %d", a, *(p1 + 1), (p1 + 1));
}
void main() {
	int a = 1;
	int *p1;
	p1 = &a;
	printf("%d %d %d\n", a, p1, *p1);
	printf("%d %d %d", a, *(p1 + 1), (p1 + 1)); 
} 
*/

/*
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d \n", *(p + i));//指针指向的地址没改变  
		//printf("%d ", *(p++));//指针指向的地址改变了
	}
} 
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d\n", *(p + i));
		//printf("%d", *(p++));
	} 
}
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i = 0;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d ", *(p + 1));
//		printf("%d ", *(p++));
	}
}
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i = 0;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d ", *(p + 1));
//		printf("%d ", *(p++)); 
	} 
}
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i = 0;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d ", *(p + i));
//		printf("%d ", *(p++));
	}
}
*/

/*
void main() {
	int a = 1, b = 1;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d\n", p1 == p2);//比较a和b的地址是否一样 
	printf("%d", *p1 == *p2);//比较a和b的值是否一样 
} 
void main() {
	int a = 1, b = 1;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d\n", p1 == p2);
	printf("%d", *p1 == *p2);
}
void main() {
	int a = 1, b = 1;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d\n", p1 == p2);
	printf("%d", *p1 == *p2);
}
void main() {
	int a = 1, b = 1;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d", p1 == p2);
	printf("%d", *p1 == *p2);
}
void main() {
	int a = 1, b = 1;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	printf("%d", p1 == p2);
	printf("%d", *p1 == *p2); 
}
*/

/*
void add(int *p1, int*p2) {
	(*p1)++;
	(*p2)++;
}
void main() {
	int a = 1, b = 2;
	int *pa, *pb;
	pa = &a;
	pb = &b;
	add(pa, pb);
	printf("%d %d", a, b);
} 
void add(int *p1, int *p2) {
	(*p1)++;
	(*p2)++;
}
void main() {
	int a = 1, b = 2;
	add(&a, &b);
	printf("%d %d", a, b);
}
void add(int *p1, int *p2) {
	(*p1)++;
	(*p2)++;
}
void main() {
	int a = 1, b = 2;
	add(&a, &b);
	printf("%d %d", a, b); 
}
void add(int *p1, int *p2) {
	(*p1)++;
	(*p2)++;
}
void main() {
	int a = 1, b = 2;
	int *pa, *pb;
	pa = &a;
	pb = &b;
	add(pa, pb);
	printf("%d ", a, b);
} 
void add(int *p1, int *p2) {
	(*p1)++;
	(*p2)++;
}
void main() {
	int a = 1, b = 2;
	int *p1, *p2;
	p1 = &a;
	p2 = &b;
	add(p1, p2);
	printf("%d %d", a, b);
}
*/

/*
void c(int *p1, int *p2) {
	int temp;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
void main() {
	int a = 1, b = 2;
	c(&a, &b);
	printf("%d %d", a, b);
}
void c(int *p1, int *p2) {
	int temp = 0;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
void main() {
	int a = 1, b = 2;
	c(&a, &b);
	printf("%d %d", a, b);
}
void c(int *p1, int *p2) {
	int temp = 0;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
void main() {
	int a = 1, b = 2;
	c(&a, &b);
	printf("%d %d", a, b);
}
void c(int *p1, int *p2) {
	int temp = 0;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
void main() {
	int a = 1, b = 2;
	c(&a, &b);
	printf("%d %d", a, b);
}
void c(int *p1, int *p2) {
	int temp = 0;
	temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
void main() {
	int a = 1, b = 2;
	c(&a, &b);
	printf("%d %d", a, b);
}
*/

/*
void add(int n[2]) {
	n[0]++;
	n[1]++;
}
void main() {
	int n[] = {1, 2};
	add(n);
	printf("%d %d", n[0], n[1]);
}
void add(int n[2]) {
	n[0]++;
	n[1]++;
} 
void main() {
	int n[] = {1, 2};
	add(n);
	printf("%d %d", n[0], n[1]);
}
void add(int n[2]) {
	n[0]++;
	n[1]++;
}
void main() {
	int n[] = {1, 2};
	add(n);
	printf("%d %d", n[0], [1]);
}
void add(int n[2]) {
	n[0]++;
	n[1]++;
}
void main() {
	int n[] = {1, 2};
	add(n);
	printf("%d %d", n[0], n[1]);
}
void add(int n[2]) {
	n[0]++;
	n[1]++;
}
void main() {
	int n[] = {1, 2};
	add(n);
	printf("%d %d", n[0], n[1]);
}
*/

/*
void main() {
	int num[] = {1, 2, 3, 4, 5};
	int i;
	int *p;
	p = num;
	for(i = 0; i < 5; i++) {
		printf("%d %d %d\n", (*(num + i)), (*(p + i)), num[i]);
	}
}
void main() {
	int n[] = {1, 2, 3, 4, 5};
	int i;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d %d %d\n", (*(n + i)), (*(p + i)), n[i]);
	}
}
void main() {
	int n[] = {1, 2, 3, 4, 5};
	int i = 0;
	int *p;
	p = n;
	printf("%d %d %d\n", (*(n + 1)), (*(p + 1)), n[i]);
}
void main() {
	int n[] = {1, 2, 3, 4, 5};
	int i = 0;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d %d %d\n", (*(n + 1)), (*(i + 1)), num[i]);
	}
}
void main() {
	int n[] = {1, 2, 3, 4, 5};
	int i = 0;
	int *p;
	p = n;
	for(i = 0; i < 5; i++) {
		printf("%d %d %d\n", (*(n + 1)), (*(p + 1)), n[i]);
	}
}

*/

//void main() {
//	int shu;
//	srand((unsigned)time(NULL));
//	shu = rand() % 7 + 1;
//	printf("%d", shu);
//} 

























