#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << n1 ;
    std::cout << " + " ;
    std::cout << n2 ;
    std::cout << " = ";
    std::cout << n1+n2; 
    std::cout << std::endl;
    std::cout << n1 << " * " << n2 << " = " << n1*n2 << std::endl;
    return 0;
}