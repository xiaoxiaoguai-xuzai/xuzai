#include <stdio.h>
/*1��̬��ʼ�� 
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

/*2��̬��ʼ�� 

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
	printf("���������������Ʒ��");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("��%d����Ʒ�۸���%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}	
	printf("�ܼ���%d", sum);
}
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("���������������Ʒ��");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]); 
	} 
	for(i = 0; i < 3; i++) {
		printf("��%d��Ʒ�۸���%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("�ܼۣ�%d", sum);
}
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("���������������Ʒ��");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("��%d����Ʒ�۸���%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("�ܼۣ�%d", sum);
}
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("���������������Ʒ��");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("��%d����Ʒ�ļ۸���%d\n", (i + 1), price[i]);
		sum = sum + price[i];
	}
	printf("%d", sum);
} 
void main() {
	int price[3];
	int i;
	int sum = 0;
	printf("���������������Ʒ��");
	for(i = 0; i < 3; i++) {
		scanf("%d", &price[i]);
	}
	for(i = 0; i < 3; i++) {
		printf("��%d����Ʒ�۸���%d\n", (i + 1), price[i]);
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
	printf("���������%s\n", c1);
	printf("���������%c", c1[3]);
}
void main() {
	char c[3];
	gets(c);
	puts(c);
	printf("���������%s", c);
}
void main(){
	char c[3];
	gets(c);
	puts(c);
	printf("���������%s", c);
} 
void main() {
	char c[3];
	gets(c);
	puts(C);
	printf("���������%s", c);
}
void main() {
	char c[3];
	gets(c);
	puts(c);
	printf("���������%s", c);
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
			printf("�������%d��ͬѧ�ĵ�%d���ɼ���", (i + 1), (j + 1));
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n���\t���п���\t��ĩ����\n"); 
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
			printf("�������%d��ͬѧ�ĵ�%d���ɼ���", (i + 1), (j + 1));
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n���\t���гɼ�\t��ĩ�ɼ�\n");
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
			printf("�������%d��ͬѧ�ĵ�%d���ɼ���");
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n���\t���гɼ�\t��ĩ�ɼ�\n");
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
			printf("�������%d��ѧ���ĵ�%d���ɼ���", (i + 1), (j + 1));
			scanf("%d", &grade[i][j]);
			printf("\n");
		}
	}
	printf("\n���\t���гɼ�\t��ĩ�ɼ�\n");
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
		printf("�������%d���˵����ųɼ���", (i + 1));
		for(j = 0; j < 2; j++) {
			scanf("%d", &grade[i][j]);
		}
	}
	for(i = 0; i < 3; i++) {
		printf("��%d��ͬѧ�ĳɼ��� ", (i + 1));
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
	printf("������ʮ������"); 
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
	printf("������ʮ������");
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
	printf("������10����");
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
		printf("�������%d����:", (i + 1));
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
		printf("�������%d������", (i + 1));
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
		printf("�������%d������", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("������%d���ǵ�%d������", n[i], (right + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("����û���ҵ���Ӧ������");
	}
}
void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i < 10; i++) {
		printf("�������%d����", (i + 1))��
		scanf("%d", &n[i]); 
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("������%d,�ǵ�%d������", n[i], (right + 1);
			break;
		}
		right++;
	}
	printf("û�ҵ���"); 
}
void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i < 10; i++) {
		printf("�������%d������", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("�����ǵ�%d���ǵ�%d������", n[i], (right + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("û���ҵ���");
	}
}
void main() {
	int num = 6;
	int n[10];
	int i;
	int right = 0;
	printf("������10����:");
	for(i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("������%d,�ǵ�%d������", n[i], (i + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("����û���ҵ���Ӧ������");
	}
}

void main() {
	int num = 6;
	int i;
	int n[10];
	int right = 0;
	for(i = 0; i < 10; i++) {
		printf("�������%d������", (i + 1));
		scanf("%d", &n[i]);
	}
	for(i = 0; i < 10; i++) {
		if(n[i] == num) {
			printf("������%d���ǵ�%d������", n[i], (right + 1));
			break;
		}
		right++;
	}
	if(right == 10) {
		printf("û���ҵ���");
	}
}
*/
