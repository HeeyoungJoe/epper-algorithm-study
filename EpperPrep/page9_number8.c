#include<stdio.h>
#include<stdlib.h>
//1이 하나일 때만 쓸 수 있는 코드
void printarray(int A[][20], int row, int col) {
	for (int i = 0; i < row; i++) {
		printf("\n");
		for (int j = 0; j < col; j++) {
			printf("\t%d", A[i][j]);
		}
	}
}
int is_there_zero(int A[][20], int M, int N) {
	//0 없다 1있다
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (A[i][j] == 0) {
				return 1;
			}
		}
	}
	return 0;
}

typedef struct Node {
	struct Node* next;
	int x;
	int y;
}Node;
typedef struct{
	Node* head;
}LinkedList;
//LinkedList format so that 1s can be kept
LinkedList* makeList() {
	LinkedList* L = (LinkedList*)malloc(sizeof(LinkedList));
	L->head = NULL;
	return L;
}
Node* makeNode(int x, int y) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->x = x;
	node->y = y;
	node->next = NULL;
	return node;
}
void addFirst(int x, int y, LinkedList* L) {
	Node* node = makeNode(x, y);
	Node* temp = L->head;//있으면 다음노드, 없으면 NULL;
	node->next = temp;
	L->head = node;
}
int rot(int** A, LinkedList* ones, int M, int N) {
	Node* temp = ones->head;
	while (1) {
		while (temp->next != NULL) {
			temp = temp->next;
		}
	}
	//while(1)
	//for all of (row,col)--> this is one day
	// 	   make the adjacents 1 
	// 	   keep yes_change var that is initialied to 1 if any of the ifs are used
	// 	   add the became-one adjacent coordinates to row, col --how? 
	//			if row col are linked list, addFirst will do the trick
	// if yes_change==1, continue the for loop and increase day
	// 	   if yes_change ==0, break 
	// 	   at the end of the loop yes_change is initialized to zero
	//top
	int day[4] = { 0 };
	if (row + 1 < M) {
		if (A[row + 1][col] == 0) {
			*(A + (row + 1) * N + col) = 1;
			day[0]+=rot(A, row + 1, col, M, N);
		}
	}
	//bottom
	if (row - 1 >= 0) {
		if (A[row - 1][col] == 0) {
			*(A + (row - 1) * N + col) = 1;
			day[1]+=rot(A, row - 1, col, M, N);
		}
	}
	//right
	if (col + 1 < N) {
		if (A[row][col + 1] == 0) {
			*(A + row * N + col + 1) = 1;
			day[2]+=rot(A, row, col + 1, M, N);
		}
	}
	//left
	if (col - 1 >= 0) {
		if (A[row][col - 1] == 0) {
			*(A + row * N + col - 1) = 1;
			day[3]+=rot(A, row, col - 1, M, N);
		}
	}
	//find biggest among day
	int big = day[0];
	for (int k = 1; k < 4; k++) {
		if (day[k] > big) {
			big = day[k];
		}
	}
	return big;
}
int will_it_rot(int A[][20],int M, int N,int i,int j) {
	//find all 1
	
	int day= rot(A, i, j, M, N);
	
	// 	   per dot, call the rot function
	//make adjacent 0 -->1
	// 	   recursive top, bottom, right left
	// 	   if 1 or -1, end
	// 	   if 0, recursive
	//if there is no more, find 0
	if (is_there_zero(A, M, N) == 0) {
		return day;
	}
	else {
		return -1;
	}
}
void main() {
	int box[20][20] = { -1 };
	/*int M = 1;
	int N = 1;
	scanf_s("%d", &M);
	scanf_s("%d", &N);
	//1이 익은거, 0이 안 익은거, -1이 없는거
	
	//initialize first state
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			int value = -1;
			if (rand()%2==1) { value = 0; }
			else { value = -1; }
			box[i][j] = value;
		}
	}
	int where_1_r= rand() % M;
	int where_1_c = rand() % N;
	box[where_1_r][where_1_c] = 1;
	//show array
	printarray(box, M, N);

	//calculate 
	printf("%d", will_it_rot(box, M, N, where_1_r, where_1_c));
	*/


	//test set 1
	// 	   0	0	0	1
	// 	   0	0	0	0
	// 	   0	0	0	0
	// 	   0	0	0	0
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			box[i][j] = 0;
		}
	}
	box[0][3] = 1;
	printarray(box, 4, 4);
	will_it_rot(box,4,4,)
}