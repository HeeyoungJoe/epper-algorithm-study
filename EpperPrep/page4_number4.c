/*#include<stdio.h>
#include<stdlib.h>
//반올림 함수
int banolim(int n) {
	if (n % 100 >= 50) { n /= 100; n *= 100; n += 100; }
	else { n /= 100; n *= 100; }
	return n;
}
//버림 함수
int ban_naerim(int n) {
	n /= 100;
	n *= 100;
	return n;
}
void main() {
	//개수를 저장하는 num_o_elements, 받은 수들을 저장하는 orig_numbers
	int num_o_elements = 0;
	int orig_numbers[100];
	
	//개수 받기
	scanf_s("%d", &num_o_elements);

	//숫자 받기
	for (int i = 0; i < num_o_elements; i++) {
		scanf_s("%d", &orig_numbers[i]);
	}
	//끝 표시해주기
	//프린트하기
	for (int i = 0; i < num_o_elements; i++) {
		printf("\n%d\t%d", banolim(orig_numbers[i]), ban_naerim(orig_numbers[i]));
	}


}*/