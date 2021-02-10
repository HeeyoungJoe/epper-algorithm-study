





/*#include<stdio.h>
#include<stdlib.h>

void sort(double* array, int size) {
	int index = 1;
	//0과 1부터 비교해가며 확장
	while (index < size) {
		int where_to_stay = index;
		while (array[where_to_stay-1] > array[where_to_stay ]) {
			int temp = array[where_to_stay];
			array[where_to_stay] = array[where_to_stay - 1];
			array[where_to_stay - 1] = temp;
			if (where_to_stay == 1) {
				break;
			}
			where_to_stay--;
		}
		index++;
	}
}
	
double avg_2_element_per_calc(double * array, int size) {
	double avg = 0;
	int index = 2;
	sort(array, size);
	printf("%lf\t%lf\t%lf\n", array[0], array[1], array[2]);
	//first two elements
	avg += 0.5*(array[0] + array[1]);
	while (index < size) {
		avg += array[index];
		avg*=0.5;
		index++;
	}
	printf("avg:%lf\n", avg);
	return avg;
}

/* min heap 귀찮으니 페인트공으로 가보자...

typedef struct min_heap_node {
	min_heap_node*left;
	min_heap_node*right;
	int value;

}min_heap_node;
typedef struct Min_heap {
	min_heap_node* root;
	int size;
}Min_heap;

//add element
void add_node(Min_heap* heap, int value) {
	min_heap_node* exists=heap->root;//heap도 포인터고 root도 포인터인 것을 잊지 말자
	if (exists) {//그냥 구조체의 존재는 if구문으로 알 수 없다
		//compare value with exists's value
		if (exists->value < value) {
			exists = exists->right;
		}
		else if (exists->value > value) {
			//value becomes exists' root node
			exists
		}

	}
}
//make min heap
//give sorted array

//sort the numbers
int main() {
	//get size
	int size = 0;
	scanf_s("%d", &size);
	
	double*array = (double*)malloc(sizeof(double)* size);

	//get elements
	for (int i = 0; i < size; i++) {
		scanf_s("%lf", &array[i]);
	}
	double average =avg_2_element_per_calc(array, size);

	printf("average:%lf", average);
}*/