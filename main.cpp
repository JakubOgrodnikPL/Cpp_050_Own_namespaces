#include <iostream>
namespace namespace1
{
    int age=25;
}
namespace namespace2
{
    int age=30;
}
int main()
{
    std::cout << "Age from namespace1: " << namespace1::age<< std::endl;
    std::cout << "Age from namespace2: " << namespace2::age<< std::endl;
    return 0;
}
