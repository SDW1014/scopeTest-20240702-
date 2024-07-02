// title : Global Scope And Local Scope
// explanation : 이 프로그램은 전역 스코프와 지역 스코프에 대한 이해를 돕기 위한 프로그램입니다.
// author : SDW
// date : 2024-07-02

// header start ===========================================================
#include <iostream> // std::cout, std::endl
// header end =============================================================

// global start ===========================================================
int value = 10;		// 전역 변수 (global scope)

void printGlobalVariable()      // 전역 함수 (global scope)
{
	std::cout << "global_variable : " << value << std::endl;
}
// global end =============================================================

// main start =============================================================
int main() {

	int value = 20;	// 지역 변수 (local scope)

	std::cout << "local_variable : " << value << std::endl; // 지역 변수 참조 (우선순위 높음)
	std::cout << "global_variable : " << ::value << std::endl; // 전역 변수 참조 (:: 연산자 사용)

	printGlobalVariable(); // 전역 함수 호출

	return 0;
}
// main end ===============================================================

// 설명 
// 1. 전역 변수(global variable) : 프로그램 전체에서 사용할 수 있는 변수
// 2. 지역 변수(local variable) : 특정 블록에서만 사용할 수 있는 변수
// 3. 전역 변수는 프로그램이 시작될 때 생성되고 프로그램이 종료될 때 소멸된다.
// 4. 지역 변수는 블록이 시작될 때 생성되고 블록이 종료될 때 소멸된다.
// 5. 전역 변수와 지역 변수의 이름이 같을 경우 지역 변수가 우선순위를 가진다.
// 6. 전역 변수와 지역 변수의 이름이 같을 경우 전역 변수를 사용하고 싶다면 :: 연산자를 사용한다.
