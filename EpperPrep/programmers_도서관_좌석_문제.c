/*#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
//프로그래머스에서는 main함수 및 입출력문이 필요하지 않습니다. 대신 solution함수만 작성하면 됩니다.
int check_in_exclude(int exclude[], int value) {
	int i = 0;
	while (exclude[i] != -1) {
		if (exclude[i] == value) {
			return 1;
		}
	}
	return 0;
}
int* find_two_small_stp(int s[], int exclude[], int N_s) {//안되고 있음
	int min = s[0];
	int index_f = 0;
	int index_s = 0;
	int* answer = (int*)malloc(sizeof(int) * 2);
	//첫번째가 제일 작을 수 있는 맹점..!
	for (int i = 1; i < N_s; i++) {
		//만약 더 작은 게 발견되고, 그 i가 exclude에 없으면
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
		//만약 i가 exclude 대상이면 스킵
		if (check_in_exclude(exclude, i)) {
			continue;
		}
		//만약 더 큰 걸 발견하고
		if (s[i] > e) {
			//그게 갭이 제일 작으면
			if (gap == -1) {//갭이 초기화 전에는 그냥 초기화한다
				gap = s[i] - e;
				index = i;
			}
			else if (gap != -1 && s[i] - e < gap) {//-1이 아니고 더 작은 갭을 찾는다면 업데이트한다
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
	//SSPF 인 것 같다.
	//일단 valid한지 e-s>0 확인한다.
	for (int k = 0; k < N; k++) { if (e[k] - s[k] < 0) { return -1; } }
	printf("\ncheck if all's valid");
	//두 의자에 대해서 각각 시작점을 고르니다.
	int* strt = find_two_small_stp(s, exclude, N);
	i = strt[0]; j = strt[1];
	e1 = e[i]; e2 = e[j];
	printf("\nfirst two index:%d,%d", i, j);
	exclude[exclude_index] = i; exclude[++exclude_index] = j;


	//이미 확인한 시간을 제외하고, 본인의 ending 시간보다 후인 첫 variable을 찾는다
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
	//	현재 회차를 저장한다
	//  지금 variable을 조회한 것으로 업데이트한다





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