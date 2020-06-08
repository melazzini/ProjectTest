#include "MyDerivedClass.hpp"
#include <iostream>

namespace testapi
{
    void MyDeriveClass::foo()
    {
        std::cout << "foo!\n";
    }
    void MyDeriveClass::foo(double x)
    {
        std::cout << "foo: " << x << "\n";
    }
} // namespace testapi
