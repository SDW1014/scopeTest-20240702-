# C++ 스코프 지정 연산자 (::) 사용 방법

C++에서 `::` 연산자는 범위 지정 연산자(scope resolution operator)라고 해. 주로 네임스페이스, 클래스, 전역 스코프 등을 명확하게 지정할 때 사용돼. 이를 통해 변수, 함수, 클래스 등을 참조할 때 혼동을 피하고 명확하게 지정할 수 있어. `::` 연산자를 사용하는 방법과 그 활용 예제를 통해 이를 이해해 보자.

## 1. 전역 변수와 전역 함수 참조

전역 스코프에서 선언된 변수를 지역 스코프에서 참조할 때 `::` 연산자를 사용해.
``` cpp
#include <iostream>

int value = 100; // 전역 변수

void printGlobalValue() {
    std::cout << "Global value: " << value << std::endl;
}

int main() {
    int value = 200; // 지역 변수
    std::cout << "Local value: " << value << std::endl;
    std::cout << "Global value using scope resolution: " << ::value << std::endl; // 전역 변수 참조

    printGlobalValue(); // 전역 함수 호출
    return 0;
}
```

## 2. 클래스 멤버와 전역 함수/변수 참조

클래스 내에서 전역 변수와 전역 함수를 참조할 때도 `::` 연산자를 사용할 수 있어.

``` cpp
#include <iostream>

int globalValue = 1000; // 전역 변수

void globalFunction() {
    std::cout << "Global function called" << std::endl;
}

class MyClass {
public:
    void showValues() {
        int localValue = 2000; // 지역 변수
        std::cout << "Local value: " << localValue << std::endl;
        std::cout << "Global value: " << ::globalValue << std::endl; // 전역 변수 참조
    }

    void callGlobalFunction() {
        ::globalFunction(); // 전역 함수 호출
    }
};

int main() {
    MyClass obj;
    obj.showValues();
    obj.callGlobalFunction();
    return 0;
}
```

## 3. 네임스페이스 사용

네임스페이스를 사용하여 코드를 모듈화하고 충돌을 피할 수 있어. 네임스페이스 안에 있는 요소를 참조할 때 `::` 연산자를 사용해.

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
    NamespaceA::printValue(); // NamespaceA의 함수 호출
    NamespaceB::printValue(); // NamespaceB의 함수 호출

    std::cout << "NamespaceA value: " << NamespaceA::value << std::endl;
    std::cout << "NamespaceB value: " << NamespaceB::value << std::endl;

    return 0;
}
```

## 4. 클래스 정의 외부에서 멤버 함수 정의

클래스 정의 외부에서 멤버 함수를 정의할 때도 `::` 연산자를 사용해.

``` cpp
#include <iostream>

class MyClass {
public:
    void display();
};

void MyClass::display() { // 클래스 외부에서 멤버 함수 정의
    std::cout << "Hello from MyClass::display()" << std::endl;
}

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
```

## 5. 상속과 함께 사용

기반 클래스의 멤버를 명확하게 참조할 때도 `::` 연산자를 사용할 수 있어.

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
        Base::show(); // 기반 클래스의 show 함수 호출
    }
};

int main() {
    Derived obj;
    obj.show();
    obj.callBaseShow();
    return 0;
}
```
