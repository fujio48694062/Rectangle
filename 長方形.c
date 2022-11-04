#include<stdio.h>

int main(void) {
	int i, j;
	int height, width;
	char sym; // 記号

	printf("長方形を表示\n");

	printf("記号（1文字）：");
	scanf_s("%c", &sym);

	do {
		printf("高さ：");
		scanf_s("%d", &height);
	} while (height <= 0);

	do {
		printf("横幅：");
		scanf_s("%d", &width);
	} while (width <= 0);

	printf("\n");
	for (i = 1; i <= height; i++) {
		for (j = 1; j <= width; j++)
			printf("%c", sym);
		putchar('\n');
	}

	return 0;
}