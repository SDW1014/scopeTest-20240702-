// title : Outside Method definition for the class
// explanation : 이 예제는 클래스의 메소드를 클래스 외부에서 정의하는 방법을 보여준다.
// author : SDW
// date : 2024-07-02

// header Start ======================================================================
#include <iostream> // std::cout, std::endl
// header End ========================================================================

// class Start =======================================================================
class Base // Base 클래스
{
public:
    void show() // show 함수
    {
        std::cout << "Base show" << std::endl;
    }
};

class Derived : public Base // Derived 클래스는 Base 클래스를 상속받는다.
{
public:
    void show() // show 함수
    {
        std::cout << "Derived show" << std::endl;
    }

    void callBaseShow() // callBaseShow 함수
    {
        Base::show(); // Base 클래스의 show 함수 호출 Scope Resolution Operator(::) 사용
    }
};
// class End =========================================================================

// main Start ========================================================================
int main() // main 함수
{
    Derived obj;
    obj.show();
    obj.callBaseShow();
    return 0;
}
// main End ==========================================================================