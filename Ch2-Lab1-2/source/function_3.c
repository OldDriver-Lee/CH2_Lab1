#include<stdio.h>
#include<stdlib.h>

int Han_Xin_3()
{
	char sign1 = 'X';
	char sign2 = '-';
	int i, j;
	int temp = 4;
	int temp2 = 5;

	printf("(3) \n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i <= 5 && j == temp) {
				printf("%c", sign1);
				temp--;
			}
			else if (i <= 5 && j == temp2) {
				printf("%c", sign1);
			}
			else if (i == 4) {
				printf("%c", sign1);
			}
			else {
				printf("%c", sign2);
			}
		}
		temp2++;
		printf("\n");
	}
}