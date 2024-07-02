// title : Outside Method definition for the class
// explanation : 이 예제는 클래스의 메소드를 클래스 외부에서 정의하는 방법을 보여준다.
// author : SDW
// date : 2024-07-02

// header Start ======================================================================
#include <iostream>	// std::cout, std::endl
// header End ========================================================================

// class Start =======================================================================
class MyClass // MyClass 클래스
{
public:
	void display();
};
// class End =========================================================================

// Method Start ======================================================================
void MyClass::display() // 클래스 외부에서 메소드를 정의할 때는 클래스 이름과 범위 지정 연산자(scope)를 사용한다.
{
	std::cout << "Hello, World!" << std::endl;
}
// Method End ========================================================================

// main Start ========================================================================
int main() // main 함수
{
	MyClass obj;
	obj.display();

	return 0;
}
// main End ==========================================================================

// 설명
// 1. 클래스의 메소드를 클래스 외부에서 정의할 때는 클래스 이름과 범위 지정 연산자(scope)를 사용한다.
// 2. MyClass::display()는 MyClass 클래스의 display() 메소드를 정의하는 것이다.
// 3. MyClass::display() 메소드는 "Hello, World!"를 출력하는 메소드이다.
// 4. main() 함수에서 MyClass 클래스의 객체 obj
// 5. obj.display()는 MyClass 클래스의 display() 메소드를 호출하는 것이다.
// 6. obj.display()를 호출하면 "Hello, World!"가 출력된다.
// 7. 출력 결과 : Hello, World!
// 8. MyClass 클래스의 display() 메소드를 클래스 외부에서 정의할 때는 MyClass::display()와 같이 정의한다.
// 9. MyClass::display() 메소드를 MyClass 클래스의 멤버 함수라고도 한다.