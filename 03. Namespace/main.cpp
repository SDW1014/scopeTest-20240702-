// title : Namespcae Scope example
// explanation : �� ������ namespace scope�� �����ϱ� ���� �����̴�.
// author : SDW
// date : 2024-07-02

// header Start =================================================================
#include <iostream>		// cout, cin, endl, ...
// header End ===================================================================

// namespace Start ==============================================================
namespace namespaceA // namespaceA ����
{
	int value = 1000;	// namespaceA�� Value ���� ����

	void printValue()   // namespaceA�� printValue �Լ� ����
	{
		std::cout << "namespaceA value : " << value << std::endl;
	}
}

namespace namespaceB // namespaceB ����
{
	int value = 2000;	// namespaceB�� Value ���� ����

	void printValue()   // namespaceB�� printValue �Լ� ����
	{
		std::cout << "namespaceB value : " << value << std::endl;
	}
}
// namespace End ================================================================

// main Start ===================================================================
int main() // main �Լ� ����
{
	namespaceA::printValue();	// namespaceA�� printValue �Լ� ȣ��
	namespaceB::printValue();	// namespaceB�� printValue �Լ� ȣ��

	std::cout << "namespaceA value : " << namespaceA::value << std::endl; // namespaceA�� value ���� ���
	std::cout << "namespaceB value : " << namespaceB::value << std::endl; // namespaceB�� value ���� ���

	return 0;
}
// main End =====================================================================

// ����
// 1. namespace�� C++���� �̸� �浹�� �����ϱ� ���� ����̴�.
// 2. namespace�� ��������, �����Լ��� ���� ���α׷� ��ü���� ����� �� �ִ� ����, �Լ��� ������ �� �ִ�.
// 3. namespace�� ��ø�ؼ� ����� �� �ִ�.
// 4. namespace�� :: �����ڸ� ����Ͽ� ������ �� �ִ�.
// 5. namespace�� using�� ����Ͽ� namespace�� �̸��� ������ �� �ִ�.
