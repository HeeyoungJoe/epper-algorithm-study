#include<stdio.h>
#include<stdlib.h>

//beginning should always be ( 
//stack이어서 )가 있으면 쌍인 (가 지워져야함
//empty일 때 괜찮은 것
//n=3이면 (((, )))이렇게 세 쌍씩 있을 것
//중복조합 - 안되는 것 개수?

//다 개별- 1
//하나에 포함- 왼쪽에 개수, 안에 개수, 오른쪽에 개수 (n-1을 3 그룹으로 분할 문제
//하나에 포함인데 두개 이상- k개 있고, 적어도 k 개는 그 안에 있어야하고, 
// 나머지는 안이거나 밖인데 밖의 m개는 어떻게 (k+1)갈래로 분할하느냐, 나머지-m은 k개 순서 있는 주머니로 어떻게 분할하느냐 

//두 겹으로 포함
//두 겹으로 포함인데 두개 이상 k가 있고, 적어도 2k개는 그 안에 있어야 하고
//나머지는 안이거나 밖인데 밖인 m은 (k+1)갈래로 분할, 나머지-m은 순서있는 주머니마다 왼 인 우 해서 3 분할...

//세 겹으로 포함
// k개의 묶음이고 안에는 적어도 3k개가 있음
//나머지는 밖이면 k+1갈래, 안이면 왼인우 5갈래... 게다가 안에 또 안에 있을 수도 있단 말야...?

//n 겹으로 포함 두 개 이상 k가 있고, 적어도 nk개는 그 안에 있어야하고, 나머지...
void make_pairs(int n) {

}