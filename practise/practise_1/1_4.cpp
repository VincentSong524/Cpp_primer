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


    // 练习1.6
    /*
    std::cout << "The sum of " << n1;
            << " and " << n2;
    */
    // 会报错 把n1 后面的分号去掉。
    return 0;
}