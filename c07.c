#include <stdio.h>
/*1五行五列 
void main() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main(){
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j ++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*2正平行四边形
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			prinf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*3倒平行四边形 
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");
		} 
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < (4 - i); j++) {
			printf(" ");
		}
		for(j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}
} 
*/

/*4正三角 
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() { 
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < (i + 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*5倒三角 
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 5 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < (5 - i); j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*6等腰三角形 
void main() {
	int i, j;
	int n;
	printf("请输入你要输出的行数：");
	scanf("%d", &n); 
	for(i = 0; i < n; i++) {
		for(j = 0; j < (n - 1 - i); j++) {
			printf(" ");
		}
		for(j = 0; j < (2 * i + 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	int n;
	printf("请输入你要输出的行数：");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		for(j = 0; j < n - i - 1; j++) {
			printf(" ");
		}
		for(j = 0; j < (2 * i + 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	int n;
	printf("请输入你要输出的行数：");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		for(j = 0; j < (n - i - 1); j++) {
			printf(" ");
		}
		for(j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for(j = 0; j < (2 * i + 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for(j = 0; j < (2 * i + 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/


/*7倒等腰三角形
void main() {
	int i, j;
	int n;
	printf("请输入你要输出的行数：");
	scanf("%d", &n); 
	for(i = 0; i < n; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 2 * (n - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main(){
	int i, j;
	int n;
	printf("请输入你要输出的行数：");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		for(j = 0; j < i; j++) {
			printf(" "); 
		}
		for(j = 0; j < (2 * (n - i)) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	int n;
	printf("请输入你要输出的行数：");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 2 * (n - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 2 * (5 - i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
void main() {
	int i, j;
	for(i = 0; i < 5; i++) {
		for(j = 0; j < i; j++) {
			printf(" ");
		}
		for(j = 0; j < 2 * (5 - i) - 1; j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/

/*8菱形
 void main() {
 	int i, j;
 	int n;
 	printf("请输入你要输出的行数：");
 	scanf("%d", &n);
 	for(i = 0; i < (n / 2 + 1); i++) {
 		for(j = 0; j < (n / 2 - i); j++) {
 			printf(" ");
		}
		for(j = 0; j < (2 * i + 1); j++) {
			printf("*");
		}
		printf("\n");
	}
	for(i = 0; i < (n / 2); i++) {
		for(j = 0; j < (i + 1); j++) {
			printf(" ");
		}
		for(j = 0; j < (2 * ((n / 2) - i) - 1); j++) {
			printf("*");
		}
		printf("\n");
	}
}
*/    

/*9求平方根内置函数 
#include <math.h>
void main() {
	double a = 4.0, b;
	b = sqrt(a);
	printf("%5.2lf", b);
}
#include <math.h>
void main() {
	double a = 4.0, b;
	b = sqrt(a);
	printf("%5.2lf", b);
}
#include <math.h>
void main() {
	double a = 4.0, b;
	b = sqrt(a);
	printf("%5.2lf", b);
}
#include <math.h>
void main() {
	double a = 4.0, b;
	b = sqrt(a);
	printf("%5.2lf", b);
}
#include <math.h>
void main() {
	double a = 4.0, b;
	b = sqrt(a);
	printf("%5.2lf", b);
}
*/

/*10在33内生成十个随机数 
#include <stdlib.h>
#include <time.h>
void main() {
	int i;
	srand((unsigned)time(NULL));
	for(i = 0; i < 10; i++) {
		printf("%d ", rand() % 33 + 1);
	}
}
#include <stdlib.h>
#include <time.h>
void main() {
	int i;
	srand((unsigned)time(NULL));
	for(i = 0; i < 10; i++) {
		printf("%d ", rand() % 33 + 1);
	}
}
#include <stdlib.h>
#include <time.h>
void main() {
	int i;
	srand((unsigned)time(NULL));
	for(i = 0; i < 10; i++) {
		printf("%d ", rand() % 33 + 1);
	}
}
#include <stdlib.h>
#include <time.h>
void main() {
	int i;
	srand((unsigned)time(NULL));
	for(i = 0; i < 10; i++) {
		printf("%d ", rand() % 33 + 1);
	}
}
#incldeu <stdlib.h>
#include <time.h>
void main() {
	int i;
	srand((unsigned)time(NULL));
	for(i = 0; i < 10; i++) {
		printf("%d ", ranf() % 33 + 1);
	}
}
*/

/*10有返回值有参数 
int add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
void main() {
	int a, b, c;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	c = add(a, b);//c = z;
	printf("结果为：%d", c);
}
int add(int x, int y) {
	int z;
	z = x + y;
	return z;
} 
void main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("%d", c);
}
ind add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
void main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("%d", c); 
}
int add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
void main () {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("%d", c);
}
int add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
void main() {
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = add(a, b);
	printf("%d", c);
}
*/
/*11没有返回值有参数 
void add(int x, int y) {
	int z;
	z = x + y;
	printf("结果为：%d", z);
}
void main() {
	int a, b, c;
	printf("请输入两个数：");
	scanf("%d %d", &a, &b);
	add(a, b);
}
void add(int x, int y) {
	int z;
	z = x + y;
	printf("%d", z);
}
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	add(a, b);
}
void add() {
	int z;
	z = x + y;
	printf("%d", z);
}
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	add(a, b);
}
void add(int x, int y) {
	int z;
	z = x + y;
	printf("%d", z);
}
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	add(a, b);
}
void add(int x, int y) {
	int z;
	z = x + y;
	printf("%d", z);
}
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	add(a, b);
}
*/
/*12有返回值没参数 
int add() {
	int x, y, z;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	z = x + y;
	return z;	
} 
void main() {
	int c; 
	c = add();
	printf("%d", c);
}
int add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	return z;
}
void main() {
	printf("%d", add());
}
int add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	return z;
}
void main(){
	printf("%d", add());
}
int add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	return z; 
}
void main() {
	printf("%d", add());
}
int add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	return z; 
}
void main() {
	printf("%d", add());
}
*/
/*13没有参数没有返回值 
void add() {
	int x, y, z;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	z = x + y;
	printf("%d" , z);
} 
void main() {
	add();
}
void add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	printf("%d", z);
}
void main() {
	add();
}
void add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	printf("%d", z);
}
void main() {
	add();
}
int add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z = x + y;
	printf("%d", z);
}
void main() {
	add();
}
int add() {
	int x, y, z;
	scanf("%d %d", &x, &y);
	z= x + y;
	printf("%d", z);
}
void main() {
	add();
}
*/

/*14值传递 x和y值变成了2和3但是没有返回所以a和b还是1和2 
void add(int x, int y) {
	x++;
	printf("x = %d ", x);
	y++;
	printf("y = %d", y);
}
void main() {
	int a = 1, b = 2;
	add(a, b);
	printf("\n a = %d b = %d", a, b);
}
*/

/*15址传递 传值是数组所以传递一个很小的地址空间刚好把数组的首地址放进去 
void add(int num[2]) {
	num[0]++;
	num[1]++;
}
void main() {
	int n[] = {1, 2};
	add(n);
	printf("%d %d", n[0], n[1]);
}
*/

/*16计算面积 
void AreaOfTriangle() {
	int x, y; 
	printf("请输入三角形的底:"); 
	scanf("%d", &x);
	printf("请输入三角形的高:"); 
	scanf("%d", &y);
	printf("面积为：%d\n", (x * y) / 2); 
}
void AreaOfRound() {
	int r; 
	printf("请输入圆形的半径:"); 
	scanf("%d", &r);
	printf("面积为：%5.2lf\n",3.14*r*r); 
}
void AreaOfRect() {
	int x, y; 
	printf("请输入长方形的长:"); 
	scanf("%d", &x);
	printf("请输入长方形的宽:"); 
	scanf("%d", &y);
	printf("面积为：%d\n",(x * y)); 
}
void main() {
	int select;
	int flag = 1;
	do {
		printf(" 0、退出\n 1、长方形\n 2、三角形\n 3、圆形\n");
		printf("请选择功能：");
		scanf("%d", &select);
		if(select == 0) return;
		switch(select) {
			case 1 : 
				AreaOfRect(); 
				break; //长方形
			case 2 : 
				AreaOfTriangle(); 
				break; //三角形
			case 3 :
				AreaOfRound(); 
				break; //圆形
			default : 
				printf("输入有误，请在 0～4 之间选择。\n");
		
		}
		printf("是否继续？");
		scanf("%d", &flag);
	} while(flag);
}
*/
/*作业一、在1~33中生成七个数存放到数组中并且七个数各不相同
#include <stdlib.h>
#include <time.h>
void main() {
	int num[7] = {0};
	int i;
	int shu;
	int index = 0;
	int n = 0, m = 0;
	int flag = 1, hope = 0;
	srand((unsigned)time(NULL));
	
	do {
		index = 0;
		while(index < 7) {
			flag = 1;
			shu = rand() % 7 + 1;//测试生成彩票的数只能是1~7之间且不重复的数 
			printf("生成第%d个数是%d\n", (m + 1), shu); 
			for(i = 0; i < index; i++) {
				if(num[i] != shu) {
					n++;
					continue;
				} else if(num[i] == shu){
					n++;
					flag = 0;
					break;
				}
			}
			if(flag) {
				num[index] = shu;
				m++; 
			} else {
				m++;
				continue;
			}
		index++;
		}
		printf("请输入你是否愿意接受这张彩票！");
		scanf("%d", &hope);
	} while(!hope);
	printf("\n你的彩票号码是：");
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	printf("生成这个不重复的七个数字的彩票一共循环了%d次,生成了%d个数", (n + 1), m);
} 
#include <stdlib.h>
#include <time.h>
void main() {
	int num[7] = {0};
	int i;
	int shu;
	int index = 0;
	int n = 0, m = 0;
	int flag = 1, hope = 0;
	srand((unsigned)time(NULL));
	
	do {
		index = 0;
		while(index < 7) {
			flag = 1;
			shu = rand() % 7 + 1;//测试生成彩票的数只能是1~7之间且不重复的数 
			printf("生成第%d个数是%d\n", (m + 1), shu); 
			for(i = 0; i < index; i++) {
				if(num[i] != shu) {
					n++;
					continue;
				} else if(num[i] == shu){
					n++;
					flag = 0;
					break;
				}
			}
			if(flag) {
				num[index] = shu;
				m++; 
			} else {
				m++;
				continue;
			}
		index++;
		}
		printf("请输入你是否愿意接受这张彩票！");
		scanf("%d", &hope);
	} while(!hope);
	printf("\n你的彩票号码是：");
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	printf("生成这个不重复的七个数字的彩票一共循环了%d次,生成了%d个数", (n + 1), m);
} 
#include <stdlib.h>
#include <time.h>
void main() {
	int num[7] = {0};
	int i;
	int shu;
	int index = 0;
	int n = 0, m = 0;
	int flag = 1, hope = 0;
	srand((unsigned)time(NULL));
	
	do {
		index = 0;
		while(index < 7) {
			flag = 1;
			shu = rand() % 33 + 1;//随机生1~33的随机数 
			printf("生成第%d个数是%d\n", (m + 1), shu); 
			for(i = 0; i < index; i++) {//循环遍历，第一个数来时不进入循环 
				if(num[i] != shu) {//判断随机生成的数是否和数组已存在的的数重复 
					n++;//记录循环次数 
					continue;//不相同，继续和数组下一个数判断 
				} else if(num[i] == shu){ 
					n++;//记录循环次数 
					flag = 0;//随机数和数组中有重复的数改变判断循环进行的条件并退出 
					break;
				}
			}
			if(flag) {//循环结束如果flag为1，则全部遍历一遍也没有重复将随机数赋给num[index] 
				num[index] = shu;
				m++; //记录生成的第几个数 
			} else {//循环结束flag为0，则有和数组存在的数重复的继续生成一个新的随机数继续判断 
				m++;//记录生成的第几个数
				continue;
			}
		index++;//下标加1，来推进数组往后走 
		}
		printf("此次生成的彩票号码为：");
		for(i = 0; i < 7; i++) {
			printf("%d ", num[i]);
		}
		printf("\n"); 
		printf("请输入你是否愿意接受这张彩票?输入1代表愿意输入0代表否认:");
		scanf("%d", &hope);
	} while(!hope);
	printf("最终为您打印的彩票号码是：");
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	printf("\n"); 
	printf("生成这个不重复的七个数字的彩票一共循环了%d次,生成了%d个数\n", (n + 1), m);
	printf("旭崽彩票机为您带来好运气，祝您中奖，欢迎下次光临！！！");
} 
*/

/*作业二、按顺序将1~5填入数组 遇到一个填一个 
#include <stdlib.h>
#include <time.h>
void main() {
	int i;
	int shu;
	int num[5] = {0};
	int index = 0, n = 0;
	srand((unsigned)time(NULL));
	do{
		shu = rand() % 5 + 1;
		printf("%d ", shu);
		if(shu == (index + 1)) {
			num[index] = shu;
			printf("第%d个数记录成功！\n", shu);
			index++;
		}
		n++;
	} while(index < 5);
	printf("\n"); 
	for(i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
	printf("\n总共生成了%d个数完成任务", n);
}
*/
/*作业三、生成1~5的随机数来哪个数就存到数组相应的位置去 
#include <stdlib.h>
#include <time.h>
void main() {
	int i;
	int num[5] = {0};
	int n = 0, index;
	int shu, ciShu = 1;
	srand((unsigned)time(NULL));
	do {
	shu = rand() % 5 + 1;
	printf("第%2d个数是： %d，", ciShu, shu);
	index = shu - 1;
	if(num[index] != shu) {
		num[index] = shu;
		printf("第%2d个随机数出现了数组的第%d个数！\n", ciShu, (index + 1)); 
		n++;
	}
	printf("\n");
	ciShu++;	
	} while(n < 5);
	for(i = 0; i < 5; i++) {
		printf("\n%d ", num[i]);
	}
	printf("\n总共生成了%2d个数完成任务", ciShu - 1);
}

*/
#include <stdlib.h>
#include <time.h>
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






















