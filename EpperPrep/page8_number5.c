/*#include<stdio.h>
#include<stdlib.h>
int ctoi(char num) {
	int sol=(int)num - (int)'0';
	return sol;
}
void main() {
	char buffer[100];
	fgets(buffer, 100, stdin);

	//생일 찾기
	int birth_year = (ctoi(buffer[0]) * 10 + ctoi(buffer[1]));
	int addition=birth_year> 20  ?  1900 :  2000;
	birth_year += addition;
	int birth_month = ctoi(buffer[2]) * 10 + ctoi(buffer[3]);
	int birthday = ctoi(buffer[4]) * 10 + ctoi(buffer[5]);

	int sex = ctoi(buffer[7]);
	if (sex == 3 || sex == 1) { printf("%d-%d-%d\t M", birth_year, birth_month, birthday); }
	else if (sex == 2 || sex == 4) { printf("%d-%d-%d\t F", birth_year, birth_month, birthday); }
	else { printf("주민등록번호 잘못 읽음"); }
}*/