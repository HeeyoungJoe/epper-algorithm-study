/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//���α׷��ӽ������� main�Լ� �� ����¹��� �ʿ����� �ʽ��ϴ�. ��� solution�Լ��� �ۼ��ϸ� �˴ϴ�.
int check_in_exclude(int exclude[], int value) {
	int i = 0;
	while (exclude[i] != -1) {
		if (exclude[i] == value) {
			return 1;
		}
	}
	return 0;
}
int* find_two_small_stp(int s[], int exclude[], int N_s) {//�ȵǰ� ����
	int min = s[0];
	int index_f = 0;
	int index_s = 0;
	int* answer = (int*)malloc(sizeof(int) * 2);
	//ù��°�� ���� ���� �� �ִ� ����..!
	for (int i = 1; i < N_s; i++) {
		//���� �� ���� �� �߰ߵǰ�, �� i�� exclude�� ������
		if (min > s[i] && !check_in_exclude(exclude, i)) {
			min = s[i];
			index_s = index_f;
			index_f = i;
		}
	}
	if (i == j) {

	}
	answer[0] = index_f; 
	answer[1] = index_s;
	return answer;
}
int find_next(int s[], int e, int exclude[], int N) {
	int index = -1;
	int gap = -1;
	for (int i = 0; i < N; i++) {
		//���� i�� exclude ����̸� ��ŵ
		if (check_in_exclude(exclude, i)) {
			continue;
		}
		//���� �� ū �� �߰��ϰ�
		if (s[i] > e) {
			//�װ� ���� ���� ������
			if (gap == -1) {//���� �ʱ�ȭ ������ �׳� �ʱ�ȭ�Ѵ�
				gap = s[i] - e;
				index = i;
			}
			else if (gap != -1 && s[i] - e < gap) {//-1�� �ƴϰ� �� ���� ���� ã�´ٸ� ������Ʈ�Ѵ�
				gap = s[i] - e;
				index = i;
			}

		}
	}

	return index;
}
int solution(int s[], int e[], int N) {
	int answer = 0;
	int i, j, tmp, e1 = -1, e2 = -1;
	int exclude[500] = { -1 };
	int exclude_index = 0;
	//SSPF �� �� ����.
	//�ϴ� valid���� e-s>0 Ȯ���Ѵ�.
	for (int k = 0; k < N; k++) { if (e[k] - s[k] < 0) { return -1; } }
	printf("\ncheck if all's valid");
	//�� ���ڿ� ���ؼ� ���� �������� ���ϴ�.
	int* strt = find_two_small_stp(s, exclude, N);
	i = strt[0]; j = strt[1];
	e1 = e[i]; e2 = e[j];
	printf("\nfirst two index:%d,%d", i, j);
	exclude[exclude_index] = i; exclude[++exclude_index] = j;


	//�̹� Ȯ���� �ð��� �����ϰ�, ������ ending �ð����� ���� ù variable�� ã�´�
	while (i < N && j < N) {
		answer += 1;
		if (i == -1 || j == -1) {
			break;
		}
		if (e1 < e2) {
			i = find_next(s, e1, exclude, N);
			j = find_next(s, e2, exclude, N);
			e1 = e[i]; e2 = e[j];
			exclude[++exclude_index] = i; exclude[++exclude_index] = j;

		}
		else {
			j = find_next(s, e2, exclude, N);
			i = find_next(s, e1, exclude, N);
			e1 = e[i]; e2 = e[j];
			exclude[++exclude_index] = i; exclude[++exclude_index] = j;
		}
	}
	//	���� ȸ���� �����Ѵ�
	//  ���� variable�� ��ȸ�� ������ ������Ʈ�Ѵ�





	return answer;
}

int main() {
	int s[1000];
	int e[1000];
	int N = 0;
	scanf_s("%d", &N);
	for (int i = 0; i < N; i++)
	scanf_s("%d", &s[i]);
	printf("\nend of 1\n");
	for (int i = 0; i < N; i++)
	scanf_s("%d", &e[i]);
	printf("\nend of 2\n");
	printf("%d", solution(s, e, N));
	return 0;
}
*/