/*#include<stdio.h>
#include<stdlib.h>

void shorten() {
	//입력 받기
	char buffer[100];
	fgets(buffer, 100, stdin);
	//시작 표지
	char starter = buffer[0];
	//결과물 저장하는 곳
	char answer[100];
	int index = 0; //buffer traverse
	int index_a = 0;//answer traverse
	int count = 0; //다음 바뀌는 지점까지 카운트

	if (starter == '1') {
		answer[index_a] = '1';
		index += 1;
		for (; buffer[index] != '\n'; index++) {
			if (starter == buffer[index]) { //같으면
				count += 1;
			}
			else {//다르면
				answer[++index_a] = (char)(count + (int)'A');
				count = 0;
				starter = buffer[index];
			}
		}
		index_a += 1;

	}
	else if (starter == '0') {
		for (; buffer[index] != '\n'; index++) {
			if (starter == buffer[index]) { //같으면
				count += 1;
			}
			else {//다르면
				answer[index_a++] = (char)(count + (int)'A');
				count = 0;
				starter = buffer[index];
			}
		}
	}
	printf("\n");
	//print
	for (int i = 0; i < index_a; i++) {
		printf("%c", answer[i]);
	}

}
void main() {
	shorten();
}*/