#include <iostream>

extern void doTest();

int main()
{
    doTest();

    int a=3,b=4;
    decltype(a) c=a;
    decltype((b)) d=a;
    ++c;
    ++d;
    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<std::endl;

    typedef int myint;
    using mudouble=double;

    const int* j;
    std::cout<<*j<<std::endl;
    std::cout<<j<<std::endl;
    std::cout<<&j<<std::endl;
    int* const p=&a;

    int const &k=a;
    std::cout<<k<<std::endl;
    std::cout<<&k<<std::endl;
    std::cout<<&a<<std::endl;

    return 0;
}