/*#include<stdio.h>
#include<stdlib.h>
//�ݿø� �Լ�
int banolim(int n) {
	if (n % 100 >= 50) { n /= 100; n *= 100; n += 100; }
	else { n /= 100; n *= 100; }
	return n;
}
//���� �Լ�
int ban_naerim(int n) {
	n /= 100;
	n *= 100;
	return n;
}
void main() {
	//������ �����ϴ� num_o_elements, ���� ������ �����ϴ� orig_numbers
	int num_o_elements = 0;
	int orig_numbers[100];
	
	//���� �ޱ�
	scanf_s("%d", &num_o_elements);

	//���� �ޱ�
	for (int i = 0; i < num_o_elements; i++) {
		scanf_s("%d", &orig_numbers[i]);
	}
	//�� ǥ�����ֱ�
	//����Ʈ�ϱ�
	for (int i = 0; i < num_o_elements; i++) {
		printf("\n%d\t%d", banolim(orig_numbers[i]), ban_naerim(orig_numbers[i]));
	}


}*/