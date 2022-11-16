#include <stdio.h>

// 변수 ppa 와 ppb 만을 사용해서
// **ppa가 b의 값을 **ppb가 a의 값을 출력하게 해보세요..

int main() {
	int a = 10 , b = 20;

	int* pa;
	pa = &a;

	int* pb;
	pb = &b;


	int** ppa;
	ppa = &pa;

	int** ppb;
	ppb = &pb;


	int** temp;
	temp = ppa;
	ppa = ppb;
	ppb = temp;

	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);



	return 0;
}



// 변수 pa와 pb만을 사용해서 (temp변수 이용)
// **ppa 가 b의 값을 **ppb가 a의 값을 출력하게 해보세요


/*	
int main (){
   int a = 10, b = 20;

    int* pa;
    pa = &a;

    int* pb;
    pb = &b;


     // pa 안에 있는 값과 pb 안에 있는 값을 서로 바꿔주기 위해
	// 빈 공간인 temp 라는 새변수를 만들어서 그걸 통해 바꿔준다.
	int* temp;  // temp 변수는 pa 안에 있는 값을 넣을 것이기에 int* 데이터타입으로 만들어야 한다. // pa 안에 들어있는 값은 &a 인데 얘의 데이터타입이 int*이다.
	temp = pa; // temp 에 pa 값 넣기
	pa = pb; // 비어진 pa 에 pb 값 넣기
	pb = temp;  // temp에 들어있는 pa 값을 pb에 넣기

	int** ppa;
	ppa = &pa;


	int** ppb;
	ppb = &pb;


	printf("**ppa = %d, **ppb = %d\n", **ppa, **ppb);
	

	return 0;
}
*/