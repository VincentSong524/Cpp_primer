#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;                 // 读取一对交易记录
    std::cout << item1 + item2 << std::endl;    // 打印他们的和
    return 0;
}