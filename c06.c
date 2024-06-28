#include <stdio.h>
/*1动态初始化 
void main() {
	int num[3];
	int i;
//	num[0] = 1;
//	num[1] = 2;
//	num[2] = 3;
	for(i = 0; i < 3; i++) {
		num[i] = (i + 1);
	}
//	printf("%d", num[0]);
//	printf("%d", num[1]);
//	printf("%d", num[2]);
	for(i = 0; i < 3; i++) {
		printf("%d ", num[i]);
	}
}
void main() {
	int num[3];
	int i;
//	num[0] = 1;
//	num[1] = 2;
//	num[2] = 3;
	for(i = 0; i < 3; i++) {
		num[i] = (i + 1);
	}
//	printf("%d ", num[0]);
//	printf("%d ", num[1]);
//	printf("%d ", num[2]);
	for(i = 0; i < 3; i++) {
		printf("%d ", num[i]);
	}
} 
void main() {
	int n[3];
	int i;
//	n[0] = 1;
//	n[1] = 2;
//	n[2] = 3;
	for(i = 0; i < 3; i++) {
		n[i] = (i + 1);
	}  
//	printf("%d ", n[0]);
//	printf("%d ", n[1]);
//	printf("%d ", n[2]);
	for(i = 0; i < 3; i++) {
		printf("%d ", n[i]);
	} 
}
void main() {
	int n[3];
	int i;
//	n[0] = 1;
//	n[1] = 2;
//	n[2] = 3;
	for(i = 0; i < 3; i++) {
		n[i] = (i + 1);
	}
//	printf("%d ", n[0]);
//	printf("%d ", n[1]);
//	printf("%d ", n[2]);
	for(i = 0; i < 3; i++) {
		printf("%d ", n[i]);
	}
} 
void main() {
	int n[3];
	int i;
//	n[0] = 1;
//	n[1] = 2;
//	n[2] = 3;
	for(i = 0; i < 3; i++) {
		n[i] = (i + 1);
	}
//	printf("%d ", n[0]);
//	printf("%d ", n[1]);
//	printf("%d ", n[2]);
	for(i = 0; i < 3; i++) {
		printf("%d ", n[i]);
	}
}
*/	

/*2静态初始化 

void main() {
	int num[5] = {1, 2, 3, 4, 5};
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d ", num[i]); 
	} 
}
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
}
void main(){
	int n[5] = {1, 2, 3, 4, 5};
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
}
void main() {
	int n[5] = {1, 2, 3, 4, 5};
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
}
void main() {
	int [5] = {1, 2, 3, 4, 5}; 
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d ", n[i]);
	}
}
*/
/*3

void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("请输入你的三个商品：");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("第%d个商品价格是%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}	
	printf("总价是%d", sum);
}
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("请输入你的三个商品：");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]); 
	} 
	for(i = 0; i < 3; i++) {
		printf("第%d商品价格是%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("总价：%d", sum);
}
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("请输入你的三个商品：");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("第%d个商品价格是%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("总价：%d", sum);
}
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("请输入你的三个商品：");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("第%d个商品的价格是%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("%d", sum);
} 
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("请输入你的三个商品：");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("第%d个商品价格是%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("%d", sum);
}
*/

/*4
void main() {
//	char c1[2] = {'o', 'k'};
//	putchar(c1[0]);
//	putchar(c1[1]);
	char c1[] = "ok";
	printf("%s", c1);
	printf("%c %c", c1[0], c1[1]);
}
void main() {
//	char c1[2] = {'o', 'k'};
//	putchar(c1[0]);
//	putchar(c1[1]);
	char c1[] = "ok";
	printf("%s", c1);
	printf("%c %c", c1[0], c1[1]);
}
void main() {
//	char c1[2] = {'0', 'k'};
//	putchar(c1[0]);
//	putchar(c1[1]);
	char c1[2] = "ok";
	printf("%s", c1);
	printf("%c %c", c1[0, c1[1]]);
}
void main() {
//	char c[2] = {'o', 'k'};
//	putchar(c[0]);
//	putchar(c[1]);
	char c[2] = "ok";
	printf("%s", c);
	printf("%c %c", c[0], c[1]);
}
void main() {
//	char c[2] = {'o', 'k'};
//	putchar(c[0]);
//	putchar(c[1]);
	char c[2] = "ok";
	printf("%s", c);
	printf("%c %c", c[0], c[1]);
}
*/

/*5
void main() {
	char c[3];
	gets(c);
	printf(c);
}
void main() {
	char c1[3];
	gets(c1);
	puts(c1);
	printf("你输入的是%s\n", c1);
	printf("你输入的是%c", c1[3]);
}
void main() {
	char c[3];
	gets(c);
	puts(c);
	printf("你输入的是%s", c);
}
void main(){
	char c[3];
	gets(c);
	puts(c);
	printf("你输入的是%s", c);
} 
void main() {
	char c[3];
	gets(c);
	puts(C);
	printf("你输入的是%s", c);
}
void main() {
	char c[3];
	gets(c);
	puts(c);
	printf("你输入的是%s", c);
}
*/
/*6

void main() {
	int num[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", num[i][j]);
		}
		printf("\n");
	}
} 
void main() {
	int n[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
void main() {
	int n[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
void main() {
	int n[2][3] = 0;
	int i, j;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
void mian() {
	int n[2][3] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d", n[i][j]);
		}
		printf("\n");
	}
}
*/
/*7
void main() {
	int n[2][3];
//	n[0][0] = 1;
//	n[0][1] = 1;
//	n[0][2] = 1;
//	
//	n[1][0] = 1;
//	n[1][1] = 1;
//	n[1][2] = 1;
	int i, j;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			n[i][j] = (i * 3) + j + 1;
		} 
	}
//	printf("%d ", n[0][0]);
//	printf("%d ", n[0][1]);
//	printf("%d ", n[0][2]);
//	printf("\n");
//	printf("%d ", n[1][0]);
//	printf("%d ", n[1][1]);
//	printf("%d ", n[1][2]); 
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 3; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
void main() {
	int n[2][2];
	int i, j;
//	n[0][0] = 1;
//	n[0][1] = 2;
//	
//	n[1][0] = 3;
//	n[1][1] = 4;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			n[i][j] = (i * 2) + j + 1;
		}
	}
//	printf("%d ", n[0][0]);
//	printf("%d ", n[0][1]);
//	printf("\n");
//	printf("%d ", n[1][0]);
//	printf("%d ", n[1][1]);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%d ", n[i][j]); 
		}
		printf("\n");
	}
}
void main(){
	int n[2][2];
	int i, j;
//	n[0][0] = 1;
//	n[0][1] = 2;
//	
//	n[1][0] = 3;
//	n[1][1] = 4;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			n[i][j] = (i * 2) + j + 1;
		}
	}
//	printf("%d ", n[0][0]);
//	printf("%d ", n[0][1]);
//	printf("\n");
//	printf("%d ", n[1][0]);
//	printf("%d ", n[1][1]);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
void main() {
	int n[2][2];
//	n[0][0] = 1;
//	n[0][1] = 2;
//	
//	n[1][0] = 3;
//	n[1][1] = 4;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			n[i][j] = (i * 2) + j + 1;
		}
	}
//	printf("%d ", n[0][0]);
//	printf("%d ", n[0][1]);
//	printf("\n");
//	printf("%d ", n[1][0]);
//	printf("%d ", n[1][1]);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
	
}
void main() {
	int n[2][2];
	int i, j;
//	n[0][0] = 1;
//	n[0][1] = 2;
//	
//	n[1][0] = 3;
//	n[1][1] = 4;
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			n[i][j] = (i * 2) + j + 1;
		}
	}
//	printf("%d ", n[0][0]);
//	printf("%d ", n[0][1]);
//	printf("]n");
//	printf("%d ", n[1][0]);
//	pritnf("%d ", n[1][1]);
	for(i = 0; i < 2; i++) {
		for(j = 0; j < 2; j++) {
			printf("%d ", n[i][j]);
		}
		printf("\n");
	}
}
*
/*8
/void main() {
	int grade[3][2];
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("请输入第%d个同学的第%d个成绩：", (i + 1), (j + 1));
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n序号\t期中考试\t期末考试\n"); 
	for(i = 0; i < 3; i++) {
		printf("%d\t", (i + 1)); 
		for(j = 0; j < 2; j++) {
			printf("%d\t\t", grade[i][j]);
		}
		printf("\n");
	}
}
void mian() {
	int grade[3][2];
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("请输入第%d个同学的第%d个成绩：", (i + 1), (j + 1));
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n序号\t期中成绩\t期末成绩\n");
	for(i = 0; i < 3; i++) {
		printf("%d", (i + 1));
		for(j = 0; j < 2; j++) {
			printf("\t%d\t", grade[i][j]); 
		}
		printf("\n");
	}
} 
void main() {
	int grade[3][2];
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("请输入第%d个同学的第%d个成绩：");
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n序号\t期中成绩\t期末成绩\n");
	for(i = 0; i < 3; i++) {
		printf("%d", (i + 1));
		for(j = 0; j  < 2; j++) {
			printf("\t%d\t", grade[i][j]);
		}
		printf("\n");
	} 
}
void main(){
	int grade[3][2];
	int i, j;
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2; j++) {
			printf("请输入第%d个学生的第%d个成绩：", (i + 1), (j + 1));
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n序号\t期中成绩\t期末成绩\n");
	for(i = 0; i < 3; i++) {
		printf("%d", (i + 1));
		for(j = 0; j < 2; j++) {
			printf("\t%d\t", grade[i][j]);
		}
		printf("\n");
	}
}	

void main() {
	int grade[3][2];
	int i, j;
	for(i = 0; i < 3; i++) {
		printf("请输入第%d个人的两门成绩：", (i + 1));
		for(j = 0; j < 2; j++) {
			scanf("%d", &grade[i][j]);
		}
	}
	for(i = 0; i < 3; i++) {
		printf("第%d个同学的成绩： ", (i + 1));
		for(j = 0; j < 2; j++) {
			printf("%d ", grade[i][j]);
		}
		printf("\n");
	}
}
*/
/*9
void main() {
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i; 
	for(i = 0; i < 10; i++) {
		printf("%d ", 9 - n[i]);
	}
}
void main() {
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	for(i = 0; i < 10; i++) {
		printf("%d ", 9 - n[i]);
	}
}
void main() {
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	for(i = 0; i < 10; i++) {
		printf("%d ", 9 - n[i]);
	}
}
void main() {
	int n[10];
	int i;
	for(i = 0; i < 10; i++) {
		printf("%d ", 9 - n[i]);
	}
}
void main() {
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	for(i = 0; i < 10; i++) {
		printf("%d ", 9 - n[i]);
	}
}
*/
/*10
void main() {
	int n[10];
	int i;
	int max = 0;
	printf("请输入十个数："); 
	for(i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] > max) {
			max = n[i];
		}
	}
	printf("%d", max);
}
void main() {
	int n[10];
	int i;
	int max = 0;
	printf("请输入十个数：");
	for(i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] > max) {
			max = n[i];
		}
	}
	printf("%d", max);
}
void main() {
	int n[10];
	int i;
	int max = 0;
	printf("请输入10个数");
	for(i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
	} 
	for(i = 0; i < 10; i++) {
		if(n[i] > max) {
			max = n[i];
		}
	}
	printf("%d", max);
}
void main() {
	int n[10];
	int i;
	int max = 0;
	for(i = 0; i < 10; i++) {
		printf("请输入第%d个数:", (i + 1));
		scanf("%d", &n[i]);
//		printf("\n");
	}
	for(i = 0; i < 10; i++) {
		if(n[i] > max) {
			max = n[i];
		}
	}
	printf("%d", max);
} 
void main() {
	int n[10];
	int i;
	int max = 0;
	for(i = 0; i < 10; i++) {
		printf("请输入第%d个数：", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] > max) {
			max = n[i];
		}
	}
	printf("%d", max);
}
*/
/*11

void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i <10 ; i++) {
		printf("请输入第%d个数：", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("数字是%d，是第%d个数字", n[i], (right + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("亲你没有找到对应的数！");
	}
}
void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i < 10; i++) {
		printf("请输入第%d个数", (i + 1))；
		scanf("%d", &n[i]); 
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("数字是%d,是第%d个数字", n[i], (right + 1);
			break;
		}
		right++;
	}
	printf("没找到！"); 
}
void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i < 10; i++) {
		printf("请输入第%d个数：", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("数字是第%d，是第%d个数字", n[i], (right + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("没有找到！");
	}
}
void main() {
	int num = 6;
	int n[10];
	int i;
	int right = 0;
	printf("请输入10个数:");
	for(i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("数字是%d,是第%d个数字", n[i], (i + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("亲你没有找到对应的数！");
	}
}

void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i < 10; i++) {
		printf("请输入第%d个数：", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("数字是%d，是第%d个数字", n[i], (right + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("没有找到！");
	}
}
*/
