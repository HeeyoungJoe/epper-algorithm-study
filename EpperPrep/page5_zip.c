/*#include<stdio.h>
#include<stdlib.h>

void shorten() {
	//�Է� �ޱ�
	char buffer[100];
	fgets(buffer, 100, stdin);
	//���� ǥ��
	char starter = buffer[0];
	//����� �����ϴ� ��
	char answer[100];
	int index = 0; //buffer traverse
	int index_a = 0;//answer traverse
	int count = 0; //���� �ٲ�� �������� ī��Ʈ

	if (starter == '1') {
		answer[index_a] = '1';
		index += 1;
		for (; buffer[index] != '\n'; index++) {
			if (starter == buffer[index]) { //������
				count += 1;
			}
			else {//�ٸ���
				answer[++index_a] = (char)(count + (int)'A');
				count = 0;
				starter = buffer[index];
			}
		}
		index_a += 1;

	}
	else if (starter == '0') {
		for (; buffer[index] != '\n'; index++) {
			if (starter == buffer[index]) { //������
				count += 1;
			}
			else {//�ٸ���
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