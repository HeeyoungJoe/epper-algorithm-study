/*#include<stdio.h>
#include<stdlib.h>

//양 끝이 매치 안 한다면
//작은쪽에서 덧셈을 함

//다시 매치를 안한다면
//작은 쪽에서 또 덧셈을 함

//매치를 하면 그 앞으로 넘어감 

//서로 인덱스가 같거나 바로 옆이면 끝냄
/*
int palindrome(int A[], int count) {
	int number_of_addition = 0;
	int left = 0; 
	int right = count - 1;

	while (right - left > 1) {
		if (A[left] == A[right]) {
			left++; right--;
		}
		else if (A[left] < A[right]) {
			int sum = A[left];
			while (sum < A[right]) {
				if()
				sum += A[++left];
				number_of_addition += 1;
			}
			if (sum == A[right]) {
				left += 1;
				right -= 1;
			}
			else {

			}
		}
	}

	return number_of_addition;
}

int palindrome(int A[], int left, int right) {
	//recursive version
	
	//base case
	if (right - left == 1) {
		if (A[left] == A[right]) { return 0; }
		else { return -1; }
	}
	else if (right == left) {
		return 0;
	}
	else {
		//if same increment count
		if (A[left] == A[right]) {
			return palindrome(A, ++left, --right);
		}
		else if (A[left] < A[right]) {
			A[left + 1] += A[left];
			return 1+palindrome(A, ++left, right);
		}
		else{
			A[right - 1] += A[right];
			return 1+palindrome(A, left, --right);
		}
		//if left is smaller, call palindrome with left array added together
		//if right is smaller, call palindrome with right array added together
	}
}
void main() {
	int A[] = { 1,2,3 };
	printf("\n%d count", palindrome(A,0,2));
}
*/