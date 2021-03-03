#include<stdio.h>
#include<stdlib.h>

void main() {
	//three integers put in like : (num) (num) (num)
	char three_num[100];
	int result_num[3];
	fgets(three_num, 100, stdin);
	for (int i = 0; i < 3; i++) {
		int num = 0;
		for (int index = 0; three_num[index] != ' '; index++) {
			num += 10;
			num *= (int)three_num[index] - (int)'0';
		}
		result_num[i] = num;
	}
	//a sum of a partial group put in
	char sum = getchar();
	int result_sum = (int)sum - (int)'0';

	//deciding how many partial groups have elements that sum up to be result_sum
	int count = 0;
	//if the number equates the input
	for (int i = 0; i < 3; i++) { if (result_num[i] == sum) { count++; } }
	//if two sum up
	if()
	//if three summ up

}