#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c, x, y,s=0;
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	a = x;
	for (; a >= 0; a--) {
		s = 0;
		for (b=0; b <= x; b++) {
			if ((a * b) == x) {
				for (c = 0; c <= y; c++) {
					if ((c * b) == y) {
						printf("\(%d,%d,%d\)\n", a, b, c);
						s = 1;
					}
					if (s == 1) {
						break;
					}
						
				}
			}
			if (s == 1) {
				break;
			}
				
		}
	}
}