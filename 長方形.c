#include<stdio.h>

int main(void) {
	int i, j;
	int height, width;
	char sym; // �L��

	printf("�����`��\��\n");

	printf("�L���i1�����j�F");
	scanf_s("%c", &sym);

	do {
		printf("�����F");
		scanf_s("%d", &height);
	} while (height <= 0);

	do {
		printf("�����F");
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