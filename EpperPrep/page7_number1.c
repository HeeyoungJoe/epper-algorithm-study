/*#include<stdio.h>
#include<stdlib.h>

//������������ �����ؾ���
//linked list�� ���� ���ο� �� ���� ������ �������� 
//����Ʈ�� �ɱ�� �����... 
//head node�� ���� ���� ������ �����صѱ�?
//�׷��ٸ� parent node child node �� �����ϴ� node link�� ��������
//�׸��� ���̰� ���� �ʿ��� Ÿ�� �ö󰡱�... �� �������� �޸� ���� ��
//�߾��� ����ϴ� headd node�� �������ٵ�


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
	//ó���̸�
	if (!list->first) { 
		list->first = new_node;
	}
	else {//ó���� �ƴϸ�
		ListNode* temp =list->first;
		//���� value ������� �ؼ� ����
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
//�� �ڿ� ��ճ���� �� ����ؾ� ��
//sol �������ٰ� �Ź� �� ����� �������� 