// title : Namespcae Scope example
// explanation : 이 예제는 namespace scope를 설명하기 위한 예제이다.
// author : SDW
// date : 2024-07-02

// header Start =================================================================
#include <iostream>		// cout, cin, endl, ...
// header End ===================================================================

// namespace Start ==============================================================
namespace namespaceA // namespaceA 선언
{
	int value = 1000;	// namespaceA의 Value 변수 선언

	void printValue()   // namespaceA의 printValue 함수 선언
	{
		std::cout << "namespaceA value : " << value << std::endl;
	}
}

namespace namespaceB // namespaceB 선언
{
	int value = 2000;	// namespaceB의 Value 변수 선언

	void printValue()   // namespaceB의 printValue 함수 선언
	{
		std::cout << "namespaceB value : " << value << std::endl;
	}
}
// namespace End ================================================================

// main Start ===================================================================
int main() // main 함수 시작
{
	namespaceA::printValue();	// namespaceA의 printValue 함수 호출
	namespaceB::printValue();	// namespaceB의 printValue 함수 호출

	std::cout << "namespaceA value : " << namespaceA::value << std::endl; // namespaceA의 value 변수 출력
	std::cout << "namespaceB value : " << namespaceB::value << std::endl; // namespaceB의 value 변수 출력

	return 0;
}
// main End =====================================================================

// 설명
// 1. namespace는 C++에서 이름 충돌을 방지하기 위한 방법이다.
// 2. namespace는 전역변수, 전역함수와 같이 프로그램 전체에서 사용할 수 있는 변수, 함수를 선언할 수 있다.
// 3. namespace는 중첩해서 사용할 수 있다.
// 4. namespace는 :: 연산자를 사용하여 접근할 수 있다.
// 5. namespace는 using을 사용하여 namespace의 이름을 생략할 수 있다.
