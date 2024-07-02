// title : Outside Method definition for the class
// explanation : �� ������ Ŭ������ �޼ҵ带 Ŭ���� �ܺο��� �����ϴ� ����� �����ش�.
// author : SDW
// date : 2024-07-02

// header Start ======================================================================
#include <iostream> // std::cout, std::endl
// header End ========================================================================

// class Start =======================================================================
class Base // Base Ŭ����
{
public:
    void show() // show �Լ�
    {
        std::cout << "Base show" << std::endl;
    }
};

class Derived : public Base // Derived Ŭ������ Base Ŭ������ ��ӹ޴´�.
{
public:
    void show() // show �Լ�
    {
        std::cout << "Derived show" << std::endl;
    }

    void callBaseShow() // callBaseShow �Լ�
    {
        Base::show(); // Base Ŭ������ show �Լ� ȣ�� Scope Resolution Operator(::) ���
    }
};
// class End =========================================================================

// main Start ========================================================================
int main() // main �Լ�
{
    Derived obj;
    obj.show();
    obj.callBaseShow();
    return 0;
}
// main End ==========================================================================