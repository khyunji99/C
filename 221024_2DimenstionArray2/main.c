#include <stdio.h>

int main() {
	
	// 요소형 데이터 타입은 40바이트..?
	// +1 을 했는데 40바이트가 늘어났다.
	int array[10][10]; // 전체 바이트 수 : 400바이트 (40바이트 x 10개)

	/*int 10개짜리에 대한 주소값
	int(*parray)[10] = array;
	*/

	array[2][1] = 100;
	*(*(array + 2) + 1) = 100;
	// array 는 int 형 10개짜리에 대한 주소값
	
	printf("array = %d\n", array);

	printf("array + 1 = %d\n", array + 1);


	// 요소형 데이터 타입이 int형이라
	// +1 을 했는데 4바이트가 늘어났다.
	int array2[10];

	printf("array2 = %d\n", array2);
	printf("array2 + 1 %d\n", array2 + 1);


	return 0;
}

// 메모리는 1차원이다.
// array 자체가 주소값
// +1 을 하면 요소의 데이터 타입만큼 늘어난다.
// int array [10][10];의 데이터 타입 즉, array의 데이터
// 데이터 타입은 +1을 했을 때 증가한 40바이트가 된다.
// int 10개짜리의 사이즈에 대한 데이터 타입이다.
// int array[10][10]은 2차원인데 메모리는 1차원이라
// int 10개짜리에 대한 사이즈로 10개를 배열한다
// 따라서 array 의 주소값은 int 10개짜리에 대한 주소값이 된다.


