// title : Class Scope Test
// explanation : 이 프로젝트는 클래스의 스코프를 연습하기 위한 프로젝트입니다.
// author : SDW
// date : 2024-07-02

// header Start ============================================================================
// 설명 : 헤더 파일을 포함한다.
#include <iostream>																// cout, cin, endl
// header End ==============================================================================

// global Start ============================================================================
// 설명 : 전역 변수와 전역 함수를 선언한다.
int globalValue = 1000;															// 전역 변수 (global scope)

void printGlobalFunction()														// 전역 함수 (global scope)
{
	std::cout << "Global function called" << std::endl;
}
// global End ==============================================================================

// Class Start =============================================================================
// 설명 : MyClass 클래스를 선언하고, showValues() 함수와 callGlobalFunction() 함수를 정의한다.
class MyClass 
{
public:
    void showValues() 
    {
        int localValue = 2000;                                                  // 지역 변수 (local scope)
        std::cout << "Local value: " << localValue << std::endl;
        std::cout << "Global value: " << ::globalValue << std::endl;            // 전역 변수 참조 (:: 연산자 사용)
    }

    void callGlobalFunction() 
    {
        ::printGlobalFunction();                                                // 전역 함수 호출
    }
};
// Class End ===============================================================================

// main Start ==============================================================================
// 설명 : main 함수에서 MyClass 객체를 생성하고, showValues() 함수와 callGlobalFunction() 함수를 호출한다.
int main() 
{
    MyClass obj; 															    // MyClass 객체 생성
    obj.showValues(); 													    	// showValues() 함수 호출
    obj.callGlobalFunction(); 												    // callGlobalFunction() 함수 호출
    return 0;
}
// main End ===============================================================================