#include <stdio.h>

int main() {
	// 동일한 DataType의 공간이 여러개 필요할 때 배열을 만들어 쓰면 됩니다.
	// 주소값에 +1 을 한다는 의미는 주소값의 할당받은 공간의 사이즈 만큼이라는 의미를 갖습니다.


	int array[10];

	printf("array = %d\n", array);
	printf("array + 1 = %d\n", array + 1);  // array + 1 = 주소값으로부터 1칸 떨어진 곳
	                                        // 예로 주소값이 2000이면 array는 int형의 데이터를 담고 있으니 한 칸마다 4바이트이다.
	                                        // 그러면 주소값에서 1칸 떨어져 있는 곳은 2000 + 4x1 = 2004가 된다.
	                                        // array의 DataType 은 int* 이다.


	double array2[10];

	printf("array2 = %d\n", array2);
	printf("array2 + 1 = %d\n", array2 + 1);  // 여기에서 array2의 DataType은 double* 이다.
	                                          // array2는 double형의 데이터를 담고 있기 때문이다.
	                                          // array2 + 1 = 주소값으로부터 1칸 떨어진 곳
	                                          // array2 값 즉, 주소값이 3000 이라고 하면 array2 + 1 = 3000 + 1x8 = 3008 이된다.
	                                          // double은 8바이트 이기 때문이다.


	return 0;

}