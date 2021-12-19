#include <stdio.h>


int main(void) {

	int a = 10;
	for (int j = 0; j <= 9; j++) {
		for (int i = 0; i < a; i++) {
			printf(" ");
		}
		for (int y = j; y >= 1; y--) {
			printf("%d", y);
		}
		for (int y = 2; y <= j; y++) {
			printf("%d", y);
		}
		printf("\n");
		a--;
	}
	a = 2;
	for (int j = 8; j >= 0; j--) {
		for (int i = 0; i < a; i++) {
			printf(" ");
		}
		for (int y = j; y >= 1; y--) {
			printf("%d", y);
		}
		for (int y = 2; y <= j; y++) {
			printf("%d", y);
		}
		printf("\n");
		a++;
	}
}
