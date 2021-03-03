/*#include<stdio.h>
#include<stdlib.h>

//number 1
void odd_only_addition() {
	int count = 0;
	printf("First problem\n");
	scanf_s("%d\n", &count);

	int temp_number = 0;
	char buffer[100];
	int solution = 0;
	int index = 0;
	int last_use = 0;
	fgets(buffer, 100, stdin);
	do {
		printf("\nbuffer[index]=%c", buffer[index]);
		if (buffer[index] ==' ') {
			temp_number /= 10;
			if ((temp_number) % 2 == 1) { 
				//printf("\nconsidered num:%d", temp_number); 
				solution += temp_number;
			}
			temp_number = 0;
		}
		else if (buffer[index]=='\n') {
			temp_number /= 10;
			if ((temp_number) % 2 == 1) {
				printf("\nconsidered num:%d", temp_number);
				solution += temp_number;
			}
		}
		else {
			temp_number += (int)buffer[index] - (int)'0';
			temp_number *= 10;
		}
		if (buffer[index] != '\n') { index++; }

		if (buffer[index] == '\n' &&last_use == 0) {buffer[--index]=' '; last_use++; }
		
	} while (buffer[index] != '\n');
	printf("\n%d\n", solution);
}

//number 3
void print_star_triangle() {
	int count = 0;
	printf("\n\nSecond problem\n");
	scanf_s("%d", &count);
	//저장하는 string이 들어가는 곳
	char buffer[100];

	for (int i = 0; i < count; i++) {
		int index = 0;
		//띄어쓰기 수
		for (int j = i; j < count; j++) {
			index = j - i;
			buffer[index] = ' ';
		}
		//별 수
		for (int k = 0; k < i + 1; k++) {
			index = count - i + k;
			buffer[index] = '*';
		}
		buffer[++index]='\n';

		//프린트하기
		for (int a = 0; buffer[a] != '\n'; a++) {
			printf("%c", buffer[a]);
		}
		printf("\n");
	}
}

void main() {
	//첫 문제
	odd_only_addition();
	printf("\n\n");
	print_star_triangle();
*/