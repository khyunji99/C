#include <stdio.h>
// 변수를 만들수 있는 위치 : 함수내부 , 함수외부
// 함수의 블럭 외부에 변수를 만들 수 있다 => 외부변수

// 변수를 나눌 때 접근범위, 존속기간으로 나눌 수 있다.

/* 외부변수 (함수의 블럭 바깥에 만든 변수) 이면서
   전역변수 (어디에서나 이 변수에 접근이 가능하다) 이다. */
int global = 0;      // 외부변수라고 다 전역변수인건 아니다.


int add(int a, int b) {  // 함수의 매개변수 (여기서 a,b,temp)는 로컬변수 이면서 자동변수이다.
	int temp;
	temp = a + b;

	return temp;  // return 된 값은 CPU 저장공간으로 들어간다.
}


void PrintGlobal() {
	global = 100;  // 외부변수에 접근 
	printf("global = %d\n", global);
}




int SetScore(int value) {
	static int score = 0; // <= 로컬변수 이면서 정적변수이다.
	score += value;  // 로컬변수에 static이 앞에 붙은 변수는 함수가 끝나도
	                 // 메모리에서의 공간이 없어지지 않고 계속 있는다.

	return score;
}

// 위의 SetScore 함수와 아래의 SetScore1 함수의 차이는 변수 앞에
// static이 붙어있는지 아닌지 차이뿐이다.


int SetScore1(int value) {
	int score1 = 0;  // <= 로컬변수 이면서 자동변수이다.
	score1 += value; // static이 앞에 붙어있지 않기에 자동변수로 함수가 끝나면
	                 // 이 score1 변수가 저장되어 있는 메모리 공간이 사라진다.
	return score1;
}



int main() {
	// 여기있는 a변수와 b변수는 위에 add 함수 안에 있는 a변수, b변수와 다르다.
	int a;  // <= 로컬변수 : 자신이 선언된 { } 블럭 안에서만 접근이 가능한 변수
	a = 20;
	int b;
	b = 30;

	// int a;  <= 동일한 블럭 내부에서는 동일한 함수명을 만들 수 없다.


	{
		int a;    // 로컬변수 이면서 자동변수이다.
		a = 100;  // 로컬변수 : 접근범위적인 변수라고도 하며 자신이 선언된 { }
		          // 블럭 안에서만 접근이 된다
	}             // 자동변수 : { } 블럭 들어갈때 생겼다가 블럭에서 빠져나올 때
	              // 없어지는 변수


	int ret = add(a, b);  // ret 변수에는 add함수에서 return 된 값이 들어간다.



	for (int i = 0; i < 10; i++) {
		SetScore(i);
	}

	int score = SetScore(0);

	printf("score = %d\n", score);




	for (int i = 0; i < 10; i++) {
		SetScore1(i);
	}

	int score1 = SetScore1(0);
	printf("score1 = %d\n", score1);



	return 0;
}



// 자동변수의 주소값을 함수외부로 가져다가 사용하면 값이 유지가 안된다.
// 자동변수는 본인이 들어있는 { } 블럭 안에서만 값이 통일된다.
// 자동변수의 주소값을 함수외부에서 사용하게 되면 그 값이 유지된다고 보장할 수 없다.

// 하지만 정적변수(static 이 적혀있는 변수)의 주소값은 함수외부로 가져다가 사용해도 괜찮다.
// 왜냐하면 정적변수가 만들어질때 한번 만들어진 그 공간이 프로그램이 실행되는 동안
// 계속 유지되기 때문이다.

// CPU 에는 저장공간인 register 가 있다.
// stack pointer는 다음 변수가 만들어질 위치, 주소를 가르킨다.
// 함수는 return문을 만나면 무조건 종료된다.
// return된 값은 CPU의 register 저장공간으로 간다.

// 자동변수가 만들어지는 방법
// : 자동변수는 stack 메모리 공간에 만들어진다.
// CPU 안에 stack point register가 있다, 이건 stack 메모리 공간에 변수가
// 만들어질 주소, 위치를 나타낸다.