#include <stdio.h>
/*1�������� 
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

/*2��ƽ���ı���
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

/*3��ƽ���ı��� 
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

/*4������ 
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

/*5������ 
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

/*6���������� 
void main() {
	int i, j;
	int n;
	printf("��������Ҫ�����������");
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
	printf("��������Ҫ�����������");
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
	printf("��������Ҫ�����������");
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


/*7������������
void main() {
	int i, j;
	int n;
	printf("��������Ҫ�����������");
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
	printf("��������Ҫ�����������");
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
	printf("��������Ҫ�����������");
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

/*8����
 void main() {
 	int i, j;
 	int n;
 	printf("��������Ҫ�����������");
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

/*9��ƽ�������ú��� 
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

/*10��33������ʮ������� 
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

/*10�з���ֵ�в��� 
int add(int x, int y) {
	int z;
	z = x + y;
	return z;
}
void main() {
	int a, b, c;
	printf("��������������");
	scanf("%d %d", &a, &b);
	c = add(a, b);//c = z;
	printf("���Ϊ��%d", c);
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
/*11û�з���ֵ�в��� 
void add(int x, int y) {
	int z;
	z = x + y;
	printf("���Ϊ��%d", z);
}
void main() {
	int a, b, c;
	printf("��������������");
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
/*12�з���ֵû���� 
int add() {
	int x, y, z;
	printf("��������������");
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
/*13û�в���û�з���ֵ 
void add() {
	int x, y, z;
	printf("��������������");
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

/*14ֵ���� x��yֵ�����2��3����û�з�������a��b����1��2 
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

/*15ַ���� ��ֵ���������Դ���һ����С�ĵ�ַ�ռ�պð�������׵�ַ�Ž�ȥ 
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

/*16������� 
void AreaOfTriangle() {
	int x, y; 
	printf("�����������εĵ�:"); 
	scanf("%d", &x);
	printf("�����������εĸ�:"); 
	scanf("%d", &y);
	printf("���Ϊ��%d\n", (x * y) / 2); 
}
void AreaOfRound() {
	int r; 
	printf("������Բ�εİ뾶:"); 
	scanf("%d", &r);
	printf("���Ϊ��%5.2lf\n",3.14*r*r); 
}
void AreaOfRect() {
	int x, y; 
	printf("�����볤���εĳ�:"); 
	scanf("%d", &x);
	printf("�����볤���εĿ�:"); 
	scanf("%d", &y);
	printf("���Ϊ��%d\n",(x * y)); 
}
void main() {
	int select;
	int flag = 1;
	do {
		printf(" 0���˳�\n 1��������\n 2��������\n 3��Բ��\n");
		printf("��ѡ���ܣ�");
		scanf("%d", &select);
		if(select == 0) return;
		switch(select) {
			case 1 : 
				AreaOfRect(); 
				break; //������
			case 2 : 
				AreaOfTriangle(); 
				break; //������
			case 3 :
				AreaOfRound(); 
				break; //Բ��
			default : 
				printf("������������ 0��4 ֮��ѡ��\n");
		
		}
		printf("�Ƿ������");
		scanf("%d", &flag);
	} while(flag);
}
*/
/*��ҵһ����1~33�������߸�����ŵ������в����߸���������ͬ
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
			shu = rand() % 7 + 1;//�������ɲ�Ʊ����ֻ����1~7֮���Ҳ��ظ����� 
			printf("���ɵ�%d������%d\n", (m + 1), shu); 
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
		printf("���������Ƿ�Ը��������Ų�Ʊ��");
		scanf("%d", &hope);
	} while(!hope);
	printf("\n��Ĳ�Ʊ�����ǣ�");
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	printf("����������ظ����߸����ֵĲ�Ʊһ��ѭ����%d��,������%d����", (n + 1), m);
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
			shu = rand() % 7 + 1;//�������ɲ�Ʊ����ֻ����1~7֮���Ҳ��ظ����� 
			printf("���ɵ�%d������%d\n", (m + 1), shu); 
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
		printf("���������Ƿ�Ը��������Ų�Ʊ��");
		scanf("%d", &hope);
	} while(!hope);
	printf("\n��Ĳ�Ʊ�����ǣ�");
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	printf("����������ظ����߸����ֵĲ�Ʊһ��ѭ����%d��,������%d����", (n + 1), m);
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
			shu = rand() % 33 + 1;//�����1~33������� 
			printf("���ɵ�%d������%d\n", (m + 1), shu); 
			for(i = 0; i < index; i++) {//ѭ����������һ������ʱ������ѭ�� 
				if(num[i] != shu) {//�ж�������ɵ����Ƿ�������Ѵ��ڵĵ����ظ� 
					n++;//��¼ѭ������ 
					continue;//����ͬ��������������һ�����ж� 
				} else if(num[i] == shu){ 
					n++;//��¼ѭ������ 
					flag = 0;//����������������ظ������ı��ж�ѭ�����е��������˳� 
					break;
				}
			}
			if(flag) {//ѭ���������flagΪ1����ȫ������һ��Ҳû���ظ������������num[index] 
				num[index] = shu;
				m++; //��¼���ɵĵڼ����� 
			} else {//ѭ������flagΪ0�����к�������ڵ����ظ��ļ�������һ���µ�����������ж� 
				m++;//��¼���ɵĵڼ�����
				continue;
			}
		index++;//�±��1�����ƽ����������� 
		}
		printf("�˴����ɵĲ�Ʊ����Ϊ��");
		for(i = 0; i < 7; i++) {
			printf("%d ", num[i]);
		}
		printf("\n"); 
		printf("���������Ƿ�Ը��������Ų�Ʊ?����1����Ը������0�������:");
		scanf("%d", &hope);
	} while(!hope);
	printf("����Ϊ����ӡ�Ĳ�Ʊ�����ǣ�");
	for(i = 0; i < 7; i++) {
		printf("%d ", num[i]);
	}
	printf("\n"); 
	printf("����������ظ����߸����ֵĲ�Ʊһ��ѭ����%d��,������%d����\n", (n + 1), m);
	printf("���̲�Ʊ��Ϊ��������������ף���н�����ӭ�´ι��٣�����");
} 
*/

/*��ҵ������˳��1~5�������� ����һ����һ�� 
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
			printf("��%d������¼�ɹ���\n", shu);
			index++;
		}
		n++;
	} while(index < 5);
	printf("\n"); 
	for(i = 0; i < 5; i++) {
		printf("%d ", num[i]);
	}
	printf("\n�ܹ�������%d�����������", n);
}
*/
/*��ҵ��������1~5����������ĸ����ʹ浽������Ӧ��λ��ȥ 
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
	printf("��%2d�����ǣ� %d��", ciShu, shu);
	index = shu - 1;
	if(num[index] != shu) {
		num[index] = shu;
		printf("��%2d�����������������ĵ�%d������\n", ciShu, (index + 1)); 
		n++;
	}
	printf("\n");
	ciShu++;	
	} while(n < 5);
	for(i = 0; i < 5; i++) {
		printf("\n%d ", num[i]);
	}
	printf("\n�ܹ�������%2d�����������", ciShu - 1);
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
	for(i = 0; i < index - 1; i++) {//���� 
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






















