#include <stdio.h>

/*
void main() {
	int i = 0;
	while(i < 10) {
		printf("%2d * 10 = %3d\n", i + 1, (i + 1) * 10);
		i++;
	}
}
void main() {
	int i = 0;
	while(i < 10) {
		printf("%2d * 10 = %3d\n", (i + 1), (i + 1) * 10);
		i++;
	}
} 
void main() {
	int i = 0;
	while(i < 10) {
		print("%2d * 10 = %3d\n", (i + 1), (i + 1) * 10);
		i++;
	}
}
void main() {
	int i = 0;
	while(i < 10) {
		printf("%2d * 10 = %3d\n", (i + 1), (i + 1) * 10);
		i++;
	}
}
void main() {
	int i = 0;
	while(i < 10) {
		printf("%2d * 10 = %3d\n", (i + 1), (i + 1) * 10);
		i++;
	}
}
*/
/*
void main() {
	int ssd = 0;
	double hsd = 0;
	int i = 0;
	while(i < 10) {
		hsd =ssd * 9 / 5.0 +32.0;
		if(ssd < 10) {
			printf("  ");
		} else if(ssd >= 10 && ssd< 100) {
			printf(" ");
		}
		printf("%d���϶ȶ�Ӧ����%7.2lf���϶�\n", ssd, hsd);
		i++;
		ssd += 20;
	}
}
void mian() {
	int ssd = 0;
	double hsd = 0;
	int i = 0;
	while(i < 10) {
		hsd = ssd * 9 / 5.0 + 32.0;
		if(ssd < 10) {
			printf("  ");
		} else (ssd >= 10 && ssd < 100) {
			printf(" ");
		}
		printf("%d���϶ȶ�Ӧ����%7.2lf���϶�\n", ssd, hsd);
		i++;
		ssd += 20;
	}
} 
void mian() {
	int ssd = 0;
	double hsd = 0;
	int i = 0;
	while(i < 10) {
		hsd = ssd * 9 / 5.0 + 32.0; 
		if(ssd < 10) {
			printf("  ");
		} else if(ssd < 100 && ssd >= 10) {
			printf(" ");
		}
		printf("%d���϶ȶ�Ӧ����%7.2lf", ssd, hsd);
		i++;
		ssd += 20;
	}
}
void main() {
	int ssd = 0;
	double hsd = 0.0;
	int i = 0;
	while(i < 10) {
		hsd = ssd * 9 / 5.0 + 32.0;
		if(ssd < 10) {
			printf("  ");
		} else if(ssd >= 10 && ssd < 100) {
			printf(" ");
		}
		printf("%d���϶ȶ�Ӧ�Ļ��϶��ǣ�%7.2lf\n", ssd, hsd);
		ssd += 20;
		i++;
	}
} 

void main() {
	int ssd = 0;
	double hsd = 0.0;
	int i = 0; 
	while(i < 10) {
		hsd = ssd * 9 / 5.0 + 32.0;
		if(i < 9){
			printf(" ");
		}
		printf("��%d����¼��", (i + 1));
		if(ssd < 10) {
			printf("  ");
		} else if(ssd >= 10 && ssd < 100) {
			printf(" ");
		}
		printf("%d���϶ȶ�Ӧ�Ļ��϶��ǣ�%7.2lf\n", ssd, hsd);
		ssd += 20;
		i++;
	} 
}
*/
/*
void main() {
	int num = 6, guess;
	int flag = 1;
	printf("������1~10֮�������\n");
	do {
		printf("�����룺");
		scanf("%d", &guess);
		if(guess < num) {
			printf("С�ˣ�");
		} else if(guess > num) {
			printf("���ˣ�");
		} else {
			//printf("�¶��ˣ�����");
			flag = 0;
		}
	} while(flag);
	printf("�¶��ˣ�����");
}
void main() {
	int num = 6, guess;
	int flag = 1;
	printf("������0~10֮�������\n");
	do {
		printf("�����룺");
		scanf("%d", &guess);
		if(guess < num) {
			printf("С�ˣ�"); 
		} else if(guess > num) {
			printf("���ˣ�");
		} else {
			flag = 0;
		}
	} while(flag);
	printf("�¶��ˣ�����");
}
void mian() {
	int num = 6, guess;
	int flag = 1;
	printf("������1~10֮�������\n");
	do {
		printf("�����룺");
		scanf("%d", &guess);
		if(guess < num) {
			printf("С�ˣ�");
		} else if(guess > num) {
			printf("���ˣ�");
		} else {
			flag = 0;
		}
	} while (flag);
	printf("�¶��ˣ�����");
}
void main() {
	int num = 6, guess;
	int flag = 1;
	printf("������1~10֮�������");
	do {
		printf("�����룺");
		scanf("%d", &guess);
		if(guess < num) {
			printf("С�ˣ�");
		} else if(guess > num) {
			printf("���ˣ�");
		} else {
			flag = 0;
		}
	} while (flag);
	printf("�¶��ˣ�����");
}
void mani() {
	int num = 6, guess;
	int flag = 1;
	printf("������1~10֮�������\n");
	do {
		printf("�����룺");
		scanf("%d", &guess);
		if(guess < num) {
			printf("С�ˣ�");
		} else if(guess > num) {
			printf("���ˣ�");
		} else {
			flag = 0;
		}
	} while(flag);
	printf("�¶��ˣ�����")�� 
}
*/
/*
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0;
		printf("��%d��ͬѧ��ʼ��", (i +1));
		while(j < 3) {
			printf("��%d����Ŀ", (j + 1));
			j++;
		}
		printf("��%d��ͬѧ������\n", (i + 1));
		i++;
	}
}
void main() {
	int i = 0, j = 0;
	while(i <10) {
		j = 0;
		printf("��%d��ͬѧ��ʼ��", (i + 1));
		while(j < 3) {
			printf("��%d����Ŀ��", (j + 1));
			j++;
		}
		printf("��%d��ͬѧ������\n", (i + 1));
		i++;
	}
}
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0;
		printf("��%d��ͬѧ��ʼ��", (i +1));
		while(j < 3) {
			printf("��%d����Ŀ��", (j + 1));
			j++;
		}
		printf("��%d��ͬѧ������\n", (i + 1));
		i++;
	}
}
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0:; 
		printf("��%d��ͬѧ��ʼ��", (i + 1));
		while(j < 3) {
			printf("��%d����Ŀ��", (j + 1));
			j++;
		}
		printf("��%d��ͬѧ������", (i + 1));
		i++; 
	}
}
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0;
		printf("��%d��ͬѧ��ʼ��", (i + 1));
		while(j < 3) {
			printf("��%d����Ŀ��", (j + 1));
			j++;
		} 
		printf("��%d��ͬѧ������", (i + 1));
		i++;
	}
}
*/
/*
void main() {
	int num = 6, guess =0;
	int flag = 1, goon = 0;	
	do {
		printf("������1~10֮�������\n");
		flag = 1;
		do {
			printf("������:");
			scanf("%d", &guess);
			if(guess < num) {
				printf("С��,");
			} else if(guess > num) {
				printf("����,");
			} else{
				flag = 0;
			}
		} while(flag); 
		printf("�¶��ˣ��Ƿ�Ҫ����?");
		scanf("%d", &goon);
	} while(goon);
	printf("��Ϸ������");
}
void main() {
	int num = 6, guess;
	int flag = 1; goon = 0;
	do {
		printf("������1~10֮�������");
		flag = 1;
		do {
			printf("�����룺");
			scanf("%d", &guess);
			if(guess < num) {
				printf("С�ˣ�");
			} else if(guess > num) {
				printf("���ˣ�");
			} else {
				flag = 0;
			}
		} while(flag);
		printf("�¶��ˣ��Ƿ������");
		scanf("%d", &goon);
	} while(goon);
	printf("��Ϸ����");
}
void main() {
	int num = 6, guess;
	int flag = 1, goon = 0;
	do {
		printf("������1~10֮�������");
		flag = 1;
		do {
			printf("�����룺");
			scanf("%d", &guess);
			if(guess < num) {
				printf("С�ˣ�")�� 
			} else if(guess > num) {
				printf("���ˣ�")�� 
			} else {
				flag = 0;
			}
		} while(flag);
		printf("�¶��ˣ��Ƿ������");
		scanf("%d", &guess);
	} while(goon);
	printf("��Ϸ����"); 
}
void main() {
	int num = 6, guess;
	int flag = 1, goon = 0;
	do {
		printf("������1~10֮�������");
		flag = 1;
		do {
			printf("�����룺");
			scanf("%d", &guess);
			if(guess < num) {
				printf("С�ˣ�");
			} else if(guess > num) {
				printf("���ˣ�");
			} else {
				flag = 0;
			}
		} while(flag);
		printf("�¶��ˣ��Ƿ������");
		scanf("%d", &goon);
	} while (goon);
	printf("��Ϸ����");
	
}
void main() {
	int num = 6, guess;
	int flag = 1, goon = 0;
	do {
		printf("������1~10֮�������");
		flag = 1;
		do {
			printf("�����룺");
			scanf("%d", &guess);
			if(guess < num) {
				printf("С�ˣ�");
			} else if(guess > num) {
				printf("���ˣ�");
			} else {
				flag = 0;
			}
		} while(flag);
		printf("�¶��ˣ��Ƿ������");
		scanf("%d", &goon);
	} while(goon);
	printf("over");
}
*/
/*
void main() {
	int i;
	for(i = 0; i < 10; i++) {
		printf("%2d * 10 = %3d\n", (i + 1), (i +1) * 10);
	}
}
void main() {
	int i;
	for(i = 1; i < 10; i ++) {
		printf("%2d * 10 = %3d", (i + 1), (i + 1) * 10);
	}
}
void main() {
	int i;
	for(i = 0; i < 10; i++) {
		printf("%2d * 10 = %3d", (i + 1), (i + 1) * 10);
	}
}
void main() {
	int i;
	for(i = 1; i < 10; i++) {
		printf("%2d * 10 = %3d", (i + 1), (i + 1) * 10);
	}
}
void main() {
	int i;
	for(i = 0; i < 10; i++) {
		printf("%2d * 10 = %3d\n", (i + 1), (i + 1) * 10);
	}
}
*/
/*
void main() {
	int i;
	int n, sum = 0;
	printf("�������ۼӵĴ�����");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int n, sum = 0;
	printf("�������ۼӵĴ�����");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	printf("�������ۼӵĴ�����"); 
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int n, sum = 0;
	printf("�������ۼӵĴ�����");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1); 
	} 
	printf("%d", sum);
}
void main() {
	int n;
	int i;
	int sum = 0;
	printf("�������ۼӵĴ�����"); 
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d ", sum);
}
*/
/*
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("��%d��ͬѧ��ʼ��", (i +1));
		for(j = 0; j < 3; j++) {
			printf("��%d����Ŀ��", (j + 1)); 
		}
		printf("��%dͬѧ����\n", (i + 1)); 
	}
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("��%d��ͬѧ��ʼ��", (i + 1));
		for(j = 0; j < 3; j++) {
			printf("��%d����Ŀ��", (j + 1));
		}
		printf("��%d��ͬѧ����\n", (i + 1));
	}
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("��%d��ͬѧ��ʼ��", (i + 1));
		for(j = 0; j < 3; j++) {
			printf("��%d����Ŀ��", (j + 1));
		} 
		printf("��%d��ͬѧ����\n", (i + 1));
	}
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("��%d��ͬѧ��ʼ��");
		for(j = 0; j < 3; j++) {
			printf("��%d����Ŀ��");
		}
		printf("��%d��ͬѧ����\n");
	} 
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("��%d��ͬѧ��ʼ��", (i + 1));
		for(j = 0; j < 3; j++) {
			printf("��%d����Ŀ", (j + 1));
		}
		printf("��%d��ͬѧ����.\n", (i + 1));
	}
} 
*/
/*
void main() {
	int i;
	for(i = 0; i < 25; i++) {
		if((i + 1) % 5 == 0) {
			printf("%d\n", (i + 1));
		}
	}
}
void main() {
	int i;
	for(i = 0; i < 25; i++) {
		if((i + 1) % 5 == 0) {
			printf("%d\n", (i + 1)); 
		}
	}
}
void main(){
	int i;
	int n;
	for(i = 0; i < 25; i++) {
		if((i + 1) % 5 == 0) {
			printf("%d\n", (i + 1));
			n++;
			if(n == 4) {
				break;
			}
		}
	}
}
void main() {
	int i;
	for(i = 0; i < 25; i++) {
		if((i +1) % 5 == 0) {
			printf("%d\n", (i + 1));
		}
	}
}
void main() {
	int i;
	int n;
	printf("%d\n", n); 
	for(i = 0; i < 25;i++) {
		if((i + 1) % 5 == 0) {
			printf("%d\n", (i + 1));
			n++;
			if(n == 4) {
				break;
			}//ֻ���3�� ��n��ֵΪ1 
		}
	}
}
*/
/*
void main() {
	int i;
	int sum = 0;
	for(i = 0; i < 100; i++) {
		if((i + 1) % 10 == 3) {
			continue;
		}
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int sum = 0;
	for(i = 0; i < 100; i++) {
		if((i + 1) % 5 == 0) {
			continue;
		}
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int sum = 0;
	for(i = 0; i < 100; i++) {
		if((i + 1) % 5 == 0) {
			continue;
		}
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int sum = 0;
	for(i = 0; i < 100; i++) {
		if((i + 1) % 5 == 0) {
			continue;
		}
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int sum = 0;
	for(i = 0; i < 100; i++) {
		if((i + 1) % 10 == 3) {
			continue;
		}
		sum = sum + (i + 1);
	
	}	
	printf("%d", sum);
} 
*/
/*
void main() {
	int i = 0;
	int n = 0;
	while(i < 5) {
		i++;
		n++;
		if(i == 3) {
			continue;
		}
		//i++;//ѭ����������continue�·����ܻᵼ�³����������ٴ�continue��ִ�ж��ٴ�ѭ���Ӷ������ѭ��
		printf("%d\n", n);
		
	}
}
*/
