#include <stdio.h>

int main() {
	// 학생관리용 프로그램을 만든다고 해보자.

	int No;  // 학번
	int Grade; // 학년
	int ClassNum;  // 반번호
	float SungJuk;  // 성적


	// 학생 100명
	int No0, No1, No2, No3; // .....
	int Grade0, Grade1, Grade2, Grade3; // ...
	int ClassNum0, ClassNum1, ClassNum2, ClassNum3; // ...
	float SungJuk0, SungJuk1, SungJuk2, SungJuk3; // ....


	// 디스크에 학생정보 한명 로드
	No0;
	Grade0;
	ClassNum0;
	SungJuk0;

	No1;
	Grade1;
	ClassNum1;
	SungJuk1;

	// 학생 100명을 한명씩 다 데이터를 저장하는건 비효율적이다.

	// 이럴때 배열을 사용해도 좋지만 이것도 쉽지는 않다.
	// 배열

	int NoArray[100];
	int GradArray[100];
	int ClassNumArray[100];
	float SungJukArray[100];


	for (int i = 0; i < 100; i++) {
		// 한명 학생의 데이타 로드
		NoArray[i];
		GradArray[i];
		ClassNumArray[i];
		SungJukArray[i];
	}


	// 이럴때 연관된 데이타들을 하나로 묶어주는 기능이 있습니다.
	// 그것을 구조체 라고 합니다.

	// struct + 구조체명 + {
	//    데이타;
	//  }

	struct Student {  // 사용자 정의 데이타 타입 (참조형) // 사용자가 직접 만든 데이타 타입을 말한다. // 이와 다르게 int, double, char 등 이러한 것들은 기본형 데이타타입 이라고 한다.
	// 아래의 학번, 학년, 반번호, 성적 각각을 구조체 멤버 라고 한다.	
		int No; // 학번
		int Grade;  // 학년
		int ClassNum;  // 반번호
		float SungJuk;  // 성적
	};


	// struct 라는 구조체 데이타 타입을 만들었으니
	// 구조체 데이타 타입을 가지는 변수를 만들 수 있을 것이다.
	// 그것을 구조체 변수라고 한다.


	struct Student a;  // 구조체 변수

	a.No = 123123;  // 구조체 변수에 멤버 접근할때 .(Period) 연산자를 사용한다.
	a.Grade = 3;
	a.ClassNum = 11;  // ClassNum이라는 공간에 11 이라는 값을 넣은것
	a.SungJuk = 80.0f;


	// 구조체 변수가 만들어지면 메모리 공간이 할당되는데
	// 그 공간에 No 이라는 공간, Grade 라는 공간, ClassNum 이라는 공간,
	// SungJuk 이라는 공간이 나뉜다.
	// 즉, 각 멤버변수에 해당하는 값을 넣을 수 있는 공간이 a라는 변수가 만들어지면서 만들어진 메모리에 각각 나뉘어져 만들어진다.



	printf("a.No = %d, a.Grade = %d, a.ClassNum = %d, a.SungJuk = %f\n", a.No, a.Grade, a.ClassNum, a.SungJuk);




	return 0;
}