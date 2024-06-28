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
		printf("%d摄氏度对应的是%7.2lf华氏度\n", ssd, hsd);
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
		printf("%d摄氏度对应的是%7.2lf华氏度\n", ssd, hsd);
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
		printf("%d摄氏度对应的是%7.2lf", ssd, hsd);
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
		printf("%d摄氏度对应的华氏度是：%7.2lf\n", ssd, hsd);
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
		printf("第%d条记录：", (i + 1));
		if(ssd < 10) {
			printf("  ");
		} else if(ssd >= 10 && ssd < 100) {
			printf(" ");
		}
		printf("%d摄氏度对应的华氏度是：%7.2lf\n", ssd, hsd);
		ssd += 20;
		i++;
	} 
}
*/
/*
void main() {
	int num = 6, guess;
	int flag = 1;
	printf("请输入1~10之间的数：\n");
	do {
		printf("请输入：");
		scanf("%d", &guess);
		if(guess < num) {
			printf("小了！");
		} else if(guess > num) {
			printf("大了！");
		} else {
			//printf("猜对了！！！");
			flag = 0;
		}
	} while(flag);
	printf("猜对了！！！");
}
void main() {
	int num = 6, guess;
	int flag = 1;
	printf("请输入0~10之间的数：\n");
	do {
		printf("请输入：");
		scanf("%d", &guess);
		if(guess < num) {
			printf("小了，"); 
		} else if(guess > num) {
			printf("大了，");
		} else {
			flag = 0;
		}
	} while(flag);
	printf("猜对了！！！");
}
void mian() {
	int num = 6, guess;
	int flag = 1;
	printf("请输入1~10之间的数：\n");
	do {
		printf("请输入：");
		scanf("%d", &guess);
		if(guess < num) {
			printf("小了，");
		} else if(guess > num) {
			printf("大了，");
		} else {
			flag = 0;
		}
	} while (flag);
	printf("猜对了！！！");
}
void main() {
	int num = 6, guess;
	int flag = 1;
	printf("请输入1~10之间的数：");
	do {
		printf("请输入：");
		scanf("%d", &guess);
		if(guess < num) {
			printf("小了，");
		} else if(guess > num) {
			printf("大了，");
		} else {
			flag = 0;
		}
	} while (flag);
	printf("猜对了！！！");
}
void mani() {
	int num = 6, guess;
	int flag = 1;
	printf("请输入1~10之间的数：\n");
	do {
		printf("请输入：");
		scanf("%d", &guess);
		if(guess < num) {
			printf("小了，");
		} else if(guess > num) {
			printf("大了，");
		} else {
			flag = 0;
		}
	} while(flag);
	printf("猜对了！！！")； 
}
*/
/*
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0;
		printf("第%d个同学开始，", (i +1));
		while(j < 3) {
			printf("第%d个节目", (j + 1));
			j++;
		}
		printf("第%d个同学结束。\n", (i + 1));
		i++;
	}
}
void main() {
	int i = 0, j = 0;
	while(i <10) {
		j = 0;
		printf("第%d个同学开始，", (i + 1));
		while(j < 3) {
			printf("第%d个节目，", (j + 1));
			j++;
		}
		printf("第%d个同学结束！\n", (i + 1));
		i++;
	}
}
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0;
		printf("第%d个同学开始，", (i +1));
		while(j < 3) {
			printf("第%d个节目，", (j + 1));
			j++;
		}
		printf("第%d个同学结束！\n", (i + 1));
		i++;
	}
}
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0:; 
		printf("第%d个同学开始，", (i + 1));
		while(j < 3) {
			printf("第%d个节目，", (j + 1));
			j++;
		}
		printf("第%d个同学结束！", (i + 1));
		i++; 
	}
}
void main() {
	int i = 0, j = 0;
	while(i < 10) {
		j = 0;
		printf("第%d个同学开始，", (i + 1));
		while(j < 3) {
			printf("第%d个节目，", (j + 1));
			j++;
		} 
		printf("第%d个同学结束！", (i + 1));
		i++;
	}
}
*/
/*
void main() {
	int num = 6, guess =0;
	int flag = 1, goon = 0;	
	do {
		printf("请输入1~10之间的数：\n");
		flag = 1;
		do {
			printf("请输入:");
			scanf("%d", &guess);
			if(guess < num) {
				printf("小了,");
			} else if(guess > num) {
				printf("大了,");
			} else{
				flag = 0;
			}
		} while(flag); 
		printf("猜对了！是否要继续?");
		scanf("%d", &goon);
	} while(goon);
	printf("游戏结束！");
}
void main() {
	int num = 6, guess;
	int flag = 1; goon = 0;
	do {
		printf("请输入1~10之间的数：");
		flag = 1;
		do {
			printf("请输入：");
			scanf("%d", &guess);
			if(guess < num) {
				printf("小了，");
			} else if(guess > num) {
				printf("大了，");
			} else {
				flag = 0;
			}
		} while(flag);
		printf("猜对了，是否继续？");
		scanf("%d", &goon);
	} while(goon);
	printf("游戏结束");
}
void main() {
	int num = 6, guess;
	int flag = 1, goon = 0;
	do {
		printf("请输入1~10之间的数：");
		flag = 1;
		do {
			printf("请输入：");
			scanf("%d", &guess);
			if(guess < num) {
				printf("小了，")： 
			} else if(guess > num) {
				printf("大了，")： 
			} else {
				flag = 0;
			}
		} while(flag);
		printf("猜对了，是否继续？");
		scanf("%d", &guess);
	} while(goon);
	printf("游戏结束"); 
}
void main() {
	int num = 6, guess;
	int flag = 1, goon = 0;
	do {
		printf("请输入1~10之间的数：");
		flag = 1;
		do {
			printf("请输入：");
			scanf("%d", &guess);
			if(guess < num) {
				printf("小了，");
			} else if(guess > num) {
				printf("大了，");
			} else {
				flag = 0;
			}
		} while(flag);
		printf("猜对了，是否继续？");
		scanf("%d", &goon);
	} while (goon);
	printf("游戏结束");
	
}
void main() {
	int num = 6, guess;
	int flag = 1, goon = 0;
	do {
		printf("请输入1~10之间的数：");
		flag = 1;
		do {
			printf("请输入：");
			scanf("%d", &guess);
			if(guess < num) {
				printf("小了，");
			} else if(guess > num) {
				printf("大了，");
			} else {
				flag = 0;
			}
		} while(flag);
		printf("猜对了，是否继续？");
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
	printf("请输入累加的次数：");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int n, sum = 0;
	printf("请输入累加的次数：");
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	printf("请输入累加的次数："); 
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		sum = sum + (i + 1);
	}
	printf("%d", sum);
}
void main() {
	int i;
	int n, sum = 0;
	printf("请输入累加的次数：");
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
	printf("请输入累加的次数："); 
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
		printf("第%d个同学开始，", (i +1));
		for(j = 0; j < 3; j++) {
			printf("第%d个节目，", (j + 1)); 
		}
		printf("第%d同学结束\n", (i + 1)); 
	}
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("第%d个同学开始，", (i + 1));
		for(j = 0; j < 3; j++) {
			printf("第%d个节目，", (j + 1));
		}
		printf("第%d个同学结束\n", (i + 1));
	}
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("第%d个同学开始，", (i + 1));
		for(j = 0; j < 3; j++) {
			printf("第%d个节目，", (j + 1));
		} 
		printf("第%d个同学结束\n", (i + 1));
	}
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("第%d个同学开始，");
		for(j = 0; j < 3; j++) {
			printf("第%d个节目，");
		}
		printf("第%d个同学结束\n");
	} 
}
void main() {
	int i, j;
	for(i = 0; i < 10; i++) {
		printf("第%d个同学开始：", (i + 1));
		for(j = 0; j < 3; j++) {
			printf("第%d个节目", (j + 1));
		}
		printf("第%d个同学结束.\n", (i + 1));
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
			}//只输出3个 ，n初值为1 
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
		//i++;//循环变量置于continue下方可能会导致程序遇见多少次continue就执行多少次循环从而造成死循环
		printf("%d\n", n);
		
	}
}
*/
