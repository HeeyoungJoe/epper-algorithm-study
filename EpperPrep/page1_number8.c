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
/*���� ��� ��

1. (int) ����ȯ �����ڸ� char�� �� �� �� char�� ������� (int)'0' ������ϰ� ���ĺ��̸� (int)'a' �������
2. scanf_s, scanf�� �ǵ��� ���� ����
3. print("%s") �� �� �갡 null�� ��� �� ����*/

