#include <stdio.h>

/*1.getchar,putchar������� 
void main() {
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
} 
void main() {
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
} 
void main() {
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
}
void main() {
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
}
void main() {
	char c1, c2;
	c1 = getchar();
	c2 = getchar();
	putchar(c1);
	putchar(c2);
}
*/
/*
һ��С���� 
�ҷ���������ǰ��������ַ�˫���ȵ�˳������������ͻ�������
���ǰ����ַ�����˫���ȵ����������û������
void main() {
	int a;
	char c1;
	double b;
	
	printf("������һ������");
	scanf("%d", &a);
	printf("������һ���ַ�");
	scanf("%c", &c1);
	printf("������һ��˫����");
	scanf("%lf", &b);
	printf("%d\n", a);
	printf("%c\n", c1);
	printf("%7.2lf\n", b);
}
void main() {
	char c1;
	int a;
	double c;
	scanf("%c", &c1);
	scanf("%d", &a);
	scanf("%lf", &c);
	printf("%c ", c1);
	printf("%d ", a); 
	printf("%lf", c); 
	
}

void main() {
	int a;
	char c1;
	double c;
	scanf("%d", &a);
	scanf("%c", &c1);
	scanf("%lf", &c);
	printf("%d \n", a);
	printf("%c \n", c1); 
	printf("%7.2lf\n", c); 


} 	
*/

/*2.scanf,printf������� 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d������Ҫ����ĸ�ʽ���ִ�%d", &a, &b); 
	c = a + b;
	printf("%d�����Ǵ�ӡ�������ʽ�����ִ�", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d������Ҫ����ĸ�ʽ���ִ�%d", &a, &b); 
	c = a + b;
	printf("%d�����Ǵ�ӡ�������ʽ�����ִ�", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d������Ҫ����ĸ�ʽ���ִ�%d", &a, &b); 
	c = a + b;
	printf("%d�����Ǵ�ӡ�������ʽ�����ִ�", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d������Ҫ����ĸ�ʽ���ִ�%d", &a, &b); 
	c = a + b;
	printf("%d�����Ǵ�ӡ�������ʽ�����ִ�", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d������Ҫ����ĸ�ʽ���ִ�%d", &a, &b); 
	c = a + b;
	printf("%d�����Ǵ�ӡ�������ʽ�����ִ�", c);
} 
void main() {
	int a = 10, b = 100, c = 1000;
	printf("%5d\n", a);
	printf("%5d\n", b);
	printf("%5d\n", c);
} 
void main() {
	int a = 10, b = 100, c = 1000;
	printf("%5d\n", a);
	printf("%5d\n", b);
	printf("%5d\n", c);
} 
void main() {
	int a = 10, b = 100, c = 1000;
	printf("%5d\n", a);
	printf("%5d\n", b);
	printf("%5d\n", c);
} 
void main() {
	int a = 10, b = 100, c = 1000;
	printf("%5d\n", a);
	printf("%5d\n", b);
	printf("%5d\n", c);
} 
void main() {
	int a = 10, b = 100, c = 1000;
	printf("%5d\n", a);
	printf("%5d\n", b);
	printf("%5d\n", c);
} 

void main() {
	int a, b, c;
	printf("������������\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}
void main() {
	int a, b, c;
	printf("������������\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}

void main() {
	int a, b, c;
	printf("������������\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}
void main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}
void main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}

void main() {
	double a = 10.0, b = 100.0, c = 1000.0;
	printf("%7.2lf\n", a);
	printf("%7.2lf\n", b);
	printf("%7.2lf\n", c);
} 
void main() {
	double a = 10.0, b = 100.0, c = 1000.0;
	printf("%7.2lf\n", a);
	printf("%7.2lf\n", b);
	printf("%7.2lf\n", c);
} 
void main() {
	double a = 10.0, b = 100.0, c = 1000.0;
	printf("%7.2lf\n", a);
	printf("%7.2lf\n", b);
	printf("%7.2lf\n", c);
} 
void main() {
	double a = 10.0, b = 100.0, c = 1000.0;
	printf("%7.2lf\n", a);
	printf("%7.2lf\n", b);
	printf("%7.2lf\n", c);
} 
void main() {
	double a = 10.0, b = 100.0, c = 1000.0;
	printf("%7.2lf\n", a);
	printf("%7.2lf\n", b);
	printf("%7.2lf\n", c);
} 
*/

/*3.��������� 
void main() {
	int a = 1, b = 2, c = 3, d ,e ,f;
	d = a++;
	e = b + (++a);
	f = a;
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
}
void main() {
	int a = 1, b = 2, c = 3, d, e, f;
	d = a++;
	e = b + (++a);
	f = a;
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
}
void main() {
	int a = 1, b = 2, c = 3, d, e, f;
	d = a++;
	e = b + (++a);
	f = a;
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
}
void main() {
	int a = 1, b = 2, c = 3, d, e, f;
	d = a++;
	e = b + (++a);
	f = a;
	printf("%d %d %d %d %d %d", a, b, c, d, e, f); 
}
void main() {
	int a = 1, b = 2, c = 3, d, e, f;
	d = a++;
	e = b + (++a);
	f = a;
	printf("%d %d %d %d %d %d", a, b, c, d, e, f);
}
*/

/*4.��ϵ������ж��Ƿ�ΪСд�ַ� 
void main() {
	char c;
	printf("������һ���ַ���");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("%c��һ��Сд�ַ�", c);
	} else{
		printf("�Ƿ��ַ�");
	}
} 

void main() {
	char c;
	printf("������һ���ַ���");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("����һ��Сд�ַ�");
	} else {
		printf("�Ƿ��ַ�"); 
	}
}

void main() {
	char c;
	printf("������һ���ַ���");
	scanf("%c", &c);
	if(c >= 'a' && c <='z') {
		printf("����һ��Сд�ַ�");
	} else {
		printf("�Ƿ��ַ�");
	}
}

void main() {
	char c;
	printf("��������һ���ַ�");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("����һ��Сд�ַ�");
	} else {
		printf("�Ƿ��ַ�");
	}
}

void main() {
	char c;
	printf("������һ���ַ�");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("����һ��Сд�ַ�");
	} else {
		printf("�Ƿ��ַ�");
	}
}
*/

/*5.sizeof����� 
void main() {
	printf("%d",sizeof(int)); 
}

void main() {
	printf("%d", sizeof(int));
}

void main() {
	printf("%d", sizeof(int));
}

void main() {
	printf("%d", sizeof(int));
}

void main() {
	printf("%d", sizeof(int));
}
*/


/*6.�ж��Ƿ���� 
void main() {
	double p1, p2, p3, sum;
	printf("������������Ʒ�ļ۸�");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >=50 || p2 >= 50 || p3 >= 50){
		printf("��������������Ӧ֧���ܼۣ�%lf", 0.85 * sum);
	} else {
		printf("�������������Ӧ֧���ܼۣ�%lf", sum);
	}
}

void main() {
	double p1, p2, p3, sum;
	printf("������������Ʒ�ļ۸�");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 || p3 >= 50) {
		printf("���������۵�����Ӧ֧���ܼۣ�%lf", 0.85 * sum); 	
	} else {
		printf("�������������Ӧ֧���ܼۣ�%lf", sum);
	}
} 

void main() {
	double p1, p2, p3, sum;
	printf("������������Ʒ�ļ۸�");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 +p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 ||p3 >=50) {
		printf("���������۵�����Ӧ֧���ܼۣ�%lf"�� 0.85 * sum);
	} else {
		printf("�������������Ӧ֧���ܼۣ�%lf", sum);
	}
}

void main() {
	double p1, p2, p3, sum;
	printf("������������Ʒ�ļ۸�");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 || p3 >= 50) {
		printf("��������������Ӧ֧���ܼۣ�%lf", 0.85 * sum);
	} else {
		printf("�������������Ӧ֧���ܼۣ�%lf", sum);
	}
}

void main() {
	double p1, p2, p3, sum;
	printf("������������Ʒ�ļ۸�");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 || p3 >= 50) {
		printf("��������������Ӧ֧���ܼۣ�%lf", 0.85 * sum);
	} else {
		printf("�������������Ӧ֧���ܼۣ�", sum);
	}
}
*/

/*7.�жϻ����� 
void main() {
	int num, w, q, s, g;
	printf("������һ����λ����");
	scanf("%d", &num);
	w = num / 10000;
	q = (num % 10000) / 1000;
	s = (num % 100) / 10;
	g = num % 10;
	if(w == g && q == s){
		printf("%d��һ��������", num);
	} else {
		printf("%d���ǻ�����", num);	
	}	
} 

void main() {
	int num, w, q, s, g;
	printf("������һ����λ����");
	scanf("%d", &num);
	w = num / 10000;
	q = (num % 10000) / 1000;
	s = (num % 100) / 10;
	g = num & 10;
	if(w == g && q == s) {
		printf("�ǻ�����"); 
	} else {
		printf("���ǻ�����");
	}
}

void main() {
	int sum, w, q, s, g;
	printf("������һ����λ����");
	scanf("%d", &sum)��
	w = sum / 10000;
	q = (sum % 10000) / 1000;
	s = (sum % 100) / 10;
	g = sum % 10;
	if(w == g && q == s) {
		printf("�ǻ�����");
	} else {
		printf("���ǻ�����");
	}
}

void main() {
	int sum, w, q, s, g;
	printf("������һ����λ����");
	scanf("%d", &sum);
	w = sum / 10000;
	q = (sum % 10000) / 1000;
	s = (sum % 100) / 10;
	g = sum % 10;
	if(w == g && q ==s) {
		printf("�ǻ�����");
	} else {
		printf("���ǻ�����"); 
	}
} 

void main() {
	int sum, w, q, s, g;
	printf("������һ����λ��");
	scanf("%d", &sum);
	w = sum / 10000;
	q = (sum % 10000) / 1000;
	s = (sum % 100) / 10;
	g = sum % 10;
	if(w == g && q == s) {
		printf("�ǻ�����");
	} else {
		printf("���ǻ�����");
	}
}
*/
/*8.�ж�ˮ�ɻ��� 
void main() {
	int num, b, s, g, sum;
	printf("������һ����λ��:");
	scanf("%d", &num);
	b = num / 100;
	s = num % 100 / 10;
	g = num % 10;
	sum = (g * g * g) + (s * s * s) + (b * b * b);
	if(sum == num) {
		printf("%d��ˮ�ɻ���", num);
	} else {
		printf("%d����ˮ�ɻ���", num);
	}
}
//��λ����ˮ�ɻ�������Щ 
void main() {
	int num, b, s, g, sum;
	int n = 0;
	printf("��λ����ˮ�ɻ����У�"); 
	for(num = 100;num < 1000;num++) {
		b = num / 100;
		s = num % 100 / 10;
		g = num % 10;
		sum = (g * g * g) + (s * s * s) + (b * b * b);		
		if(sum == num) {
			printf("%d,", num);
			n++;
		}
	}
	printf("\n��λ����ˮ�ɻ�����%d��", n);
} 

void main() {
	int num, b, s, g, sum;
	int n = 0;
	printf("��λ����ˮ�ɻ����У�");
	for(num = 100;num < 1000;num++) {
		b = num / 100;
		s = (num %100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);		
		if(sum == num) {
			printf("%d,", num);
			n++;
		}
	}
	printf("\nˮ�ɻ�����%d��", n);
} 

void main() {
	int num, b, s, g;
	int n = 0;
	printf("��λ����ˮ�ɻ����У�");
	for(num = 100;num <= 1000; num++) {
		b = num / 100;
		s = (num % 100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);
		if(sum = num) {
			printf("%d", num);
			n++;
		}
		printf("\n��λ��ˮ�ɻ����У�%d��", n); 
	}
}

void main() {
	int num, b, s, g, sum;
	int n = 0;
	printf("��λ����ˮ�ɻ����У�");
	for(num = 100;num < 1000;num++) {
		b = num / 100;
		s = (num %100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);		
		if(sum == num) {
			printf("%d,", num);
			n++;
		}
	}
	printf("\nˮ�ɻ�����%d��", n);
} 

void main() {
	int num, b, s, g;
	int n = 0;
	printf("��λ����ˮ�ɻ����У�");
	for(num = 100;num <= 1000; num++) {
		b = num / 100;
		s = (num % 100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);
		if(sum = num) {
			printf("%d", num);
			n++;
		}
		printf("\n��λ��ˮ�ɻ����У�%d��", n); 
	}
}
void main() {
	int num, b, s, g;
	int n = 0;
	printf("��λ����ˮ�ɻ����У�");
	for(num = 100;num <= 1000; num++) {
		b = num / 100;
		s = (num % 100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);
		if(sum = num) {
			printf("%d", num);
			n++;
		}
		printf("\n��λ��ˮ�ɻ����У�%d��", n); 
	}
}


*/

/*10.����֧ 
void main() {
	int a;
	printf("������һ���������֣�");
	scanf("%d", &a);
	if(a > 0) {
		printf("%d������\n", a);
	} else {
		printf("%dС����\n", a);
	}
	printf("���������");
} 

void main() {
	int a;
	printf("����һ���������֣�");
	scanf("%d", &a);
	if(a > 0) {
		printf("a������");
	} else {
		printf("aС�ڵ�����");
	}
	printf("�������");
}

void main() {
	int a;
	printf("����һ���������֣�");
	scanf("%d", &a);
	if(a > 0) {
		printf("a������");
	} else {
		printf("aС�ڵ�����");
	}
	printf("�������");
}

void main() {
	int a;
	printf("����һ���������֣�");
	scanf("%d", &a);
	if(a > 0) {
		printf("a������");
	} else {
		printf("aС�ڵ�����");
	}
	printf("�������"); 
}

void main() {
	int a;
	printf("����һ���������֣�");
	scanf("%d", &a);
	if(a > 0) {
		printf("a������");
	} else {
		printf("aС�ڵ�����");
	}
	printf("�������");
}

*/










