/*#include<stdio.h>
#include<stdlib.h>

void main() {
	//three integers put in like : (num) (num) (num)
	int result_num[3] = { 0,0,0 };

	char buffer[100];
	fgets(buffer, 100, stdin);
	int b_index = 0;
	int num = 0;
	while (buffer[b_index] != '\n') {
		if (buffer[b_index] == ' ') { b_index++; num++; }
		result_num[num] *= 10;
		result_num[num] += (int)buffer[b_index] - (int)'0';
		b_index++;
	}

	// what we want the three numbers to sum up to become
	int result_sum;
	scanf_s("%d", &result_sum);

	//checking if the variables received the numbers right
	printf("\n received inputs: %d\t%d\t%d\t%d\t", result_num[0], result_num[1], result_num[2], result_sum);
	
	//count of how many partial groups out of the three numbers that sum up to be result_sum
	int count = 0;

	//if the any number of the three equates the input, count is added
	for (int i = 0; i < 3; i++) { if (result_num[i] == result_sum) {count++; } }

	int total = result_num[0] + result_num[1] + result_num[2];
	
	
	if (count == 1) {//if count is 1, the sume of the other two might form a partial group 
		for (int i = 0; i < 3; i++) {
			if (total - result_num[i] == result_sum) { count++; }
		}
	}
	else if (count == 0) {//if count is 0, adition of two or addition of three has a chance
		if (total == result_sum) {
			count += 1;
		}
		for (int i = 0; i < 3; i++) {
			if (total - result_num[i] == result_sum) { count++; }
		}
	}
	printf("\n%d", count);

}*/