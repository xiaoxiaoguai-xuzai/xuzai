#include <stdio.h>

/*1.getchar,putchar输入输出 
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
一个小问题 
我发现我如果是按照整形字符双精度的顺序输入输出他就会有问题
但是按照字符整形双精度的输入输出就没有问题
void main() {
	int a;
	char c1;
	double b;
	
	printf("请输入一个整形");
	scanf("%d", &a);
	printf("请输入一个字符");
	scanf("%c", &c1);
	printf("请输入一个双精度");
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

/*2.scanf,printf输入输出 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d这里是要输入的格式需手打%d", &a, &b); 
	c = a + b;
	printf("%d这里是打印的输出格式不需手打", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d这里是要输入的格式需手打%d", &a, &b); 
	c = a + b;
	printf("%d这里是打印的输出格式不需手打", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d这里是要输入的格式需手打%d", &a, &b); 
	c = a + b;
	printf("%d这里是打印的输出格式不需手打", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d这里是要输入的格式需手打%d", &a, &b); 
	c = a + b;
	printf("%d这里是打印的输出格式不需手打", c);
} 
void main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	//scanf("%d这里是要输入的格式需手打%d", &a, &b); 
	c = a + b;
	printf("%d这里是打印的输出格式不需手打", c);
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
	printf("请输入两个数\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}
void main() {
	int a, b, c;
	printf("请输入两个数\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c = %d", c);
}

void main() {
	int a, b, c;
	printf("请输入两个数\n");
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

/*3.算术运算符 
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

/*4.关系运算符判断是否为小写字符 
void main() {
	char c;
	printf("请输入一个字符：");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("%c是一个小写字符", c);
	} else{
		printf("非法字符");
	}
} 

void main() {
	char c;
	printf("请输入一个字符：");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("这是一个小写字符");
	} else {
		printf("非法字符"); 
	}
}

void main() {
	char c;
	printf("请输入一个字符：");
	scanf("%c", &c);
	if(c >= 'a' && c <='z') {
		printf("这是一个小写字符");
	} else {
		printf("非法字符");
	}
}

void main() {
	char c;
	printf("请输入以一个字符");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("这是一个小写字符");
	} else {
		printf("非法字符");
	}
}

void main() {
	char c;
	printf("请输入一个字符");
	scanf("%c", &c);
	if(c >= 'a' && c <= 'z') {
		printf("这是一个小写字符");
	} else {
		printf("非法字符");
	}
}
*/

/*5.sizeof运算符 
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


/*6.判断是否打折 
void main() {
	double p1, p2, p3, sum;
	printf("请输入三个商品的价格：");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >=50 || p2 >= 50 || p3 >= 50){
		printf("满足打八五折条件应支付总价：%lf", 0.85 * sum);
	} else {
		printf("不满足打折条件应支付总价：%lf", sum);
	}
}

void main() {
	double p1, p2, p3, sum;
	printf("请输入三个商品的价格：");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 || p3 >= 50) {
		printf("满足打八五折的条件应支付总价：%lf", 0.85 * sum); 	
	} else {
		printf("不满足打折条件应支付总价：%lf", sum);
	}
} 

void main() {
	double p1, p2, p3, sum;
	printf("请输入三个商品的价格：");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 +p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 ||p3 >=50) {
		printf("满足大八五折的条件应支付总价：%lf"， 0.85 * sum);
	} else {
		printf("不满足打折条件应支付总价：%lf", sum);
	}
}

void main() {
	double p1, p2, p3, sum;
	printf("请输入三个商品的价格：");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 || p3 >= 50) {
		printf("满足打八五折条件应支付总价：%lf", 0.85 * sum);
	} else {
		printf("不满足打折条件应支付总价：%lf", sum);
	}
}

void main() {
	double p1, p2, p3, sum;
	printf("请输入三个商品的价格：");
	scanf("%lf %lf %lf", &p1, &p2, &p3);
	sum = p1 + p2 + p3;
	if(sum >= 100 || p1 >= 50 || p2 >= 50 || p3 >= 50) {
		printf("满足打八五折条件应支付总价：%lf", 0.85 * sum);
	} else {
		printf("不满足打折条件应支付总价：", sum);
	}
}
*/

/*7.判断回文数 
void main() {
	int num, w, q, s, g;
	printf("请输入一个五位数：");
	scanf("%d", &num);
	w = num / 10000;
	q = (num % 10000) / 1000;
	s = (num % 100) / 10;
	g = num % 10;
	if(w == g && q == s){
		printf("%d是一个回文数", num);
	} else {
		printf("%d不是回文数", num);	
	}	
} 

void main() {
	int num, w, q, s, g;
	printf("请输入一个五位数：");
	scanf("%d", &num);
	w = num / 10000;
	q = (num % 10000) / 1000;
	s = (num % 100) / 10;
	g = num & 10;
	if(w == g && q == s) {
		printf("是回文数"); 
	} else {
		printf("不是回文数");
	}
}

void main() {
	int sum, w, q, s, g;
	printf("请输入一个五位数：");
	scanf("%d", &sum)；
	w = sum / 10000;
	q = (sum % 10000) / 1000;
	s = (sum % 100) / 10;
	g = sum % 10;
	if(w == g && q == s) {
		printf("是回文数");
	} else {
		printf("不是回文数");
	}
}

void main() {
	int sum, w, q, s, g;
	printf("请输入一个五位数：");
	scanf("%d", &sum);
	w = sum / 10000;
	q = (sum % 10000) / 1000;
	s = (sum % 100) / 10;
	g = sum % 10;
	if(w == g && q ==s) {
		printf("是回文数");
	} else {
		printf("不是回文数"); 
	}
} 

void main() {
	int sum, w, q, s, g;
	printf("请输入一个五位数");
	scanf("%d", &sum);
	w = sum / 10000;
	q = (sum % 10000) / 1000;
	s = (sum % 100) / 10;
	g = sum % 10;
	if(w == g && q == s) {
		printf("是回文数");
	} else {
		printf("不是回文数");
	}
}
*/
/*8.判断水仙花数 
void main() {
	int num, b, s, g, sum;
	printf("请输入一个三位数:");
	scanf("%d", &num);
	b = num / 100;
	s = num % 100 / 10;
	g = num % 10;
	sum = (g * g * g) + (s * s * s) + (b * b * b);
	if(sum == num) {
		printf("%d是水仙花数", num);
	} else {
		printf("%d不是水仙花数", num);
	}
}
//三位数的水仙花数有哪些 
void main() {
	int num, b, s, g, sum;
	int n = 0;
	printf("三位数的水仙花数有："); 
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
	printf("\n三位数的水仙花数有%d个", n);
} 

void main() {
	int num, b, s, g, sum;
	int n = 0;
	printf("三位数的水仙花数有：");
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
	printf("\n水仙花数有%d个", n);
} 

void main() {
	int num, b, s, g;
	int n = 0;
	printf("三位数的水仙花数有：");
	for(num = 100;num <= 1000; num++) {
		b = num / 100;
		s = (num % 100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);
		if(sum = num) {
			printf("%d", num);
			n++;
		}
		printf("\n三位数水仙花数有：%d个", n); 
	}
}

void main() {
	int num, b, s, g, sum;
	int n = 0;
	printf("三位数的水仙花数有：");
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
	printf("\n水仙花数有%d个", n);
} 

void main() {
	int num, b, s, g;
	int n = 0;
	printf("三位数的水仙花数有：");
	for(num = 100;num <= 1000; num++) {
		b = num / 100;
		s = (num % 100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);
		if(sum = num) {
			printf("%d", num);
			n++;
		}
		printf("\n三位数水仙花数有：%d个", n); 
	}
}
void main() {
	int num, b, s, g;
	int n = 0;
	printf("三位数的水仙花数有：");
	for(num = 100;num <= 1000; num++) {
		b = num / 100;
		s = (num % 100) / 10;
		g = num % 10;
		sum = (b * b * b) + (s * s * s) + (g * g * g);
		if(sum = num) {
			printf("%d", num);
			n++;
		}
		printf("\n三位数水仙花数有：%d个", n); 
	}
}


*/

/*10.单分支 
void main() {
	int a;
	printf("请输入一个整型数字：");
	scanf("%d", &a);
	if(a > 0) {
		printf("%d大于零\n", a);
	} else {
		printf("%d小于零\n", a);
	}
	printf("程序结束！");
} 

void main() {
	int a;
	printf("输入一个整形数字：");
	scanf("%d", &a);
	if(a > 0) {
		printf("a大于零");
	} else {
		printf("a小于等于零");
	}
	printf("程序结束");
}

void main() {
	int a;
	printf("输入一个整形数字：");
	scanf("%d", &a);
	if(a > 0) {
		printf("a大于零");
	} else {
		printf("a小于等于零");
	}
	printf("程序结束");
}

void main() {
	int a;
	printf("输入一个整型数字：");
	scanf("%d", &a);
	if(a > 0) {
		printf("a大于零");
	} else {
		printf("a小于等于零");
	}
	printf("程序结束"); 
}

void main() {
	int a;
	printf("输入一个整形数字：");
	scanf("%d", &a);
	if(a > 0) {
		printf("a大于零");
	} else {
		printf("a小于等于零");
	}
	printf("程序结束");
}

*/










