/*#include<stdio.h>
#include<stdlib.h>

//beginning should always be ( 
//stack�̾ )�� ������ ���� (�� ����������
//empty�� �� ������ ��
//n=3�̸� (((, )))�̷��� �� �־� ���� ��
//�ߺ����� - �ȵǴ� �� ����?

//�� ����- 1
//�ϳ��� ����- ���ʿ� ����, �ȿ� ����, �����ʿ� ���� (n-1�� 3 �׷����� ���� ����
//�ϳ��� �����ε� �ΰ� �̻�- k�� �ְ�, ��� k ���� �� �ȿ� �־���ϰ�, 
// �������� ���̰ų� ���ε� ���� m���� ��� (k+1)������ �����ϴ���, ������-m�� k�� ���� �ִ� �ָӴϷ� ��� �����ϴ��� 

//�� ������ ����
//�� ������ �����ε� �ΰ� �̻� k�� �ְ�, ��� 2k���� �� �ȿ� �־�� �ϰ�
//�������� ���̰ų� ���ε� ���� m�� (k+1)������ ����, ������-m�� �����ִ� �ָӴϸ��� �� �� �� �ؼ� 3 ����...

//�� ������ ����
// k���� �����̰� �ȿ��� ��� 3k���� ����
//�������� ���̸� k+1����, ���̸� ���ο� 5����... �Դٰ� �ȿ� �� �ȿ� ���� ���� �ִ� ����...?

//n ������ ���� �� �� �̻� k�� �ְ�, ��� nk���� �� �ȿ� �־���ϰ�, ������...
int make_pairs(int n) {
//�׳� īŻ�� ���� �Ǿ���.
//integral�� efficient�ϰ� ����?
	
	int solution = 1;
	for (int i = 2*n; i > n+1; i--) { //(2n)!/(n+1)!
		solution *= i;
	}
	for (int i = 1; i < n + 1; i++) {
		solution /= i;
	}
	return solution;
}
void main() {
	char buffer[100];
	printf("how many pairs of parentheses?:\n");
	fgets(buffer, 100, stdin);

	int pairs = 0;
	for (int index=0; buffer[index] != '\n'; index++) {
		pairs =pairs+ (int)buffer[index]-(int)('0');
		pairs *= 10;
	}
	pairs /= 10;
	printf("\n number of appropriate expressions are:%d", make_pairs(pairs ));

}*/