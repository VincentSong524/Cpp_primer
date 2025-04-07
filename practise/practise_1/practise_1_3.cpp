#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << /* "*/" */;    //错误
    std::cout << /* "*/" /* "/*" */;    // 错误
    return 0;
}