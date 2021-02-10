/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//get input as array
//get index
//every input is matched with an index since it has places! don't forget to add 1
//change the input in index order by calling an another array 

int main() {
	char input_string[100];
	char index[100];
	
	fgets(input_string, 100, stdin);
	fgets(index, 100, stdin);
	char answer[100];
	printf("\n what I got for input string %s\n", input_string);
	for (int i = 0; index[i]; i++) {
		if (index[i] == '\n') break;
		printf("\nwhat is index giving:%c", index[i]);
		int true_index = (int)index[i] - (int)'0'-1;
		printf("\tsubsequent true index%d", true_index);

		answer[i] = (char)input_string[true_index];
		
		printf("\t\twhat answer got:%c", answer[i]);
	}
	printf("\n");
	for (int i = 0; input_string[i]; i++) {
		if (input_string[i]=='\n') break;
		printf("%c", answer[i]);
	}
		return 0;

}*/
/*오늘 배운 거

1. (int) 형변환 연산자를 char에 쓸 때 그 char가 정수라면 (int)'0' 빼줘야하고 알파벳이면 (int)'a' 빼줘야함
2. scanf_s, scanf는 되도록 쓰지 말자
3. print("%s") 할 때 얘가 null을 끊어낼 줄 몰라*/

