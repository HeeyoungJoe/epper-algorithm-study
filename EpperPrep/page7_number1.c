/*#include<stdio.h>
#include<stdlib.h>

//내림차순으로 정렬해야함
//linked list로 만들어서 새로운 값 받을 때마다 삽입하자 
//페인트공 될까봐 무서운데... 
//head node를 만들어서 끝과 시작을 저장해둘까?
//그렇다면 parent node child node 다 저장하는 node link를 만들어야함
//그리고 차이가 적은 쪽에서 타고 올라가기... 좀 부질없다 메모리 많이 써
//중앙을 기록하는 headd node면 괜찮을텐데


typedef struct ListNode{
	struct ListNode* right;
	struct ListNode* left;
	int value;
} ListNode;

typedef struct LinkedList{
	ListNode* first;
}LinkedList;

ListNode* init_node() {
	ListNode * node = (ListNode*)malloc(sizeof(ListNode*) * 2 + 4);
	node->right = NULL;
	node->left = NULL;
	return node;
}

LinkedList* init_list() {
	LinkedList* list= (LinkedList*)malloc(sizeof(ListNode*) + sizeof(int) * 2);
	list->first = NULL;
	return list;
}
void insert_node(LinkedList* list, int value) {

	ListNode* new_node = init_node();
	new_node->value = value;
	//처음이면
	if (!list->first) { 
		list->first = new_node;
	}
	else {//처음이 아니면
		ListNode* temp =list->first;
		//먼저 value 사이즈비교 해서 넣자
		if (value <= temp->value) {
			new_node->right = temp;
			temp->left=new_node;
			list->first = new_node;
		}
		else {
			while(temp) {
				if (value > temp->value) {
					if (temp->right) { temp = temp->right; }
					else {
						new_node->left = temp;
						temp->right = new_node;
						break;
					}
				}
				else {
					new_node->right = temp;
					new_node->left = temp->left;
					temp->left->right = new_node;
					temp->left = new_node;
					break;
				}
			}
			
				
		}
	}
}
void print_list(const LinkedList*list) {
	//move to leftmost
	ListNode*temp = list->first;
	printf("\n");
	while(temp) {
		printf("\t%d", temp->value);
		if (temp->right) { temp = temp->right; }
		else { break; }
	}
}
double average(LinkedList * list) {
	double average = 0.0;
	ListNode* temp = list->first;
	//start to add
	average += (double)(temp->value);//first element
	temp = temp->right;
	while(temp) {
		average = (average + (double)temp->value) *0.5;
		if (temp->right) { temp = temp->right; }
		else { break; }
	}
	return average;
}
void main() {
	
	int iter_num = 0;
	scanf_s("%d", &iter_num);

	LinkedList* list = init_list();
	int temp = 0;
	for (int i = 0; i<iter_num; i++) {
		printf("\n%dth entry:",i);
		scanf_s("\n%d\t", &temp);
		insert_node(list, temp);
		print_list(list);
	}
	print_list(list);
	printf("\n%lf", average(list));
}*/
//그 뒤에 평균내기로 값 계산해야 함
//sol 변수에다가 매번 새 평균을 저장하자 