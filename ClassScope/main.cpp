// title : Class Scope Test
// explanation : �� ������Ʈ�� Ŭ������ �������� �����ϱ� ���� ������Ʈ�Դϴ�.
// author : SDW
// date : 2024-07-02

// header Start ============================================================================
// ���� : ��� ������ �����Ѵ�.
#include <iostream>																// cout, cin, endl
// header End ==============================================================================

// global Start ============================================================================
// ���� : ���� ������ ���� �Լ��� �����Ѵ�.
int globalValue = 1000;															// ���� ���� (global scope)

void printGlobalFunction()														// ���� �Լ� (global scope)
{
	std::cout << "Global function called" << std::endl;
}
// global End ==============================================================================

// Class Start =============================================================================
// ���� : MyClass Ŭ������ �����ϰ�, showValues() �Լ��� callGlobalFunction() �Լ��� �����Ѵ�.
class MyClass 
{
public:
    void showValues() 
    {
        int localValue = 2000;                                                  // ���� ���� (local scope)
        std::cout << "Local value: " << localValue << std::endl;
        std::cout << "Global value: " << ::globalValue << std::endl;            // ���� ���� ���� (:: ������ ���)
    }

    void callGlobalFunction() 
    {
        ::printGlobalFunction();                                                // ���� �Լ� ȣ��
    }
};
// Class End ===============================================================================

// main Start ==============================================================================
// ���� : main �Լ����� MyClass ��ü�� �����ϰ�, showValues() �Լ��� callGlobalFunction() �Լ��� ȣ���Ѵ�.
int main() 
{
    MyClass obj; 															    // MyClass ��ü ����
    obj.showValues(); 													    	// showValues() �Լ� ȣ��
    obj.callGlobalFunction(); 												    // callGlobalFunction() �Լ� ȣ��
    return 0;
}
// main End ===============================================================================