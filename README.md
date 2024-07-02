# C++ ������ ���� ������ (::) ��� ���

C++���� `::` �����ڴ� ���� ���� ������(scope resolution operator)��� ��. �ַ� ���ӽ����̽�, Ŭ����, ���� ������ ���� ��Ȯ�ϰ� ������ �� ����. �̸� ���� ����, �Լ�, Ŭ���� ���� ������ �� ȥ���� ���ϰ� ��Ȯ�ϰ� ������ �� �־�. `::` �����ڸ� ����ϴ� ����� �� Ȱ�� ������ ���� �̸� ������ ����.

## 1. ���� ������ ���� �Լ� ����

���� ���������� ����� ������ ���� ���������� ������ �� `::` �����ڸ� �����.
``` cpp
#include <iostream>

int value = 100; // ���� ����

void printGlobalValue() {
    std::cout << "Global value: " << value << std::endl;
}

int main() {
    int value = 200; // ���� ����
    std::cout << "Local value: " << value << std::endl;
    std::cout << "Global value using scope resolution: " << ::value << std::endl; // ���� ���� ����

    printGlobalValue(); // ���� �Լ� ȣ��
    return 0;
}
```

## 2. Ŭ���� ����� ���� �Լ�/���� ����

Ŭ���� ������ ���� ������ ���� �Լ��� ������ ���� `::` �����ڸ� ����� �� �־�.

``` cpp
#include <iostream>

int globalValue = 1000; // ���� ����

void globalFunction() {
    std::cout << "Global function called" << std::endl;
}

class MyClass {
public:
    void showValues() {
        int localValue = 2000; // ���� ����
        std::cout << "Local value: " << localValue << std::endl;
        std::cout << "Global value: " << ::globalValue << std::endl; // ���� ���� ����
    }

    void callGlobalFunction() {
        ::globalFunction(); // ���� �Լ� ȣ��
    }
};

int main() {
    MyClass obj;
    obj.showValues();
    obj.callGlobalFunction();
    return 0;
}
```

## 3. ���ӽ����̽� ���

���ӽ����̽��� ����Ͽ� �ڵ带 ���ȭ�ϰ� �浹�� ���� �� �־�. ���ӽ����̽� �ȿ� �ִ� ��Ҹ� ������ �� `::` �����ڸ� �����.

``` cpp
#include <iostream>

namespace NamespaceA {
    int value = 3000;

    void printValue() {
        std::cout << "NamespaceA value: " << value << std::endl;
    }
}

namespace NamespaceB {
    int value = 4000;

    void printValue() {
        std::cout << "NamespaceB value: " << value << std::endl;
    }
}

int main() {
    NamespaceA::printValue(); // NamespaceA�� �Լ� ȣ��
    NamespaceB::printValue(); // NamespaceB�� �Լ� ȣ��

    std::cout << "NamespaceA value: " << NamespaceA::value << std::endl;
    std::cout << "NamespaceB value: " << NamespaceB::value << std::endl;

    return 0;
}
```

## 4. Ŭ���� ���� �ܺο��� ��� �Լ� ����

Ŭ���� ���� �ܺο��� ��� �Լ��� ������ ���� `::` �����ڸ� �����.

``` cpp
#include <iostream>

class MyClass {
public:
    void display();
};

void MyClass::display() { // Ŭ���� �ܺο��� ��� �Լ� ����
    std::cout << "Hello from MyClass::display()" << std::endl;
}

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
```

## 5. ��Ӱ� �Բ� ���

��� Ŭ������ ����� ��Ȯ�ϰ� ������ ���� `::` �����ڸ� ����� �� �־�.

``` cpp
#include <iostream>

class Base {
public:
    void show() {
        std::cout << "Base show" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived show" << std::endl;
    }

    void callBaseShow() {
        Base::show(); // ��� Ŭ������ show �Լ� ȣ��
    }
};

int main() {
    Derived obj;
    obj.show();
    obj.callBaseShow();
    return 0;
}
```
