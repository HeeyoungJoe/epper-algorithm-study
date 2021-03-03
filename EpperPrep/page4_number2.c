/*#include<stdio.h>
#include<stdlib.h>
int* give_change(int money) {
	int* change = (int*)malloc(sizeof(int)*8);
	int dividend = 50000;
	//50000,10000,5000,1000,500,100,50,10
	for (int index = 0; index <8; index++) {
		if (index % 2 == 0) {
			*(change+index ) = money / dividend;
			if (*(change + index) != 0) { //바깥으로 빼면 dividend가 바뀌기 때문에 의미가 없다

				money = money % dividend;

			}
			 dividend /= 5;
		}
		else {
			*(change+index) = money / dividend;
			if (*(change + index) != 0) {
				money = money % dividend;

				printf("%d change", money);
			}
			dividend /= 2;
		}
		
	}
	return change;
}
void print_change(int* change) {
	int dividend = 50000;
	for (int index = 8; index > 0; index--) {
		
		printf("\nchange for %d won:%d", dividend, change[8 - index]);

		if (index % 2 == 0) {
			dividend /= 5;
		}
		else {
			dividend /= 2;
		}
	}
}
int main() {
	char buffer[100];
	int given_money = 0;
	int price = 0;
	int* change = (int*)malloc(sizeof(int) * 8);

	printf("\nprint your money:");
	fgets(buffer, 100, stdin);
	for (int index = 0; buffer[index] != '\n'; index++) {
		given_money += (int)buffer[index] - (int)'0';
		given_money *= 10;
	}
	given_money /= 10;
	
	printf("\nprint the price:");
	fgets(buffer, 100, stdin);
	for (int index = 0; buffer[index] != '\n'; index++) {
		price+= (int)buffer[index] - (int)'0';
		price *= 10;
	}
	price /= 10;
	change = give_change(given_money-price);
	print_change(change);

	return 0;
}*/