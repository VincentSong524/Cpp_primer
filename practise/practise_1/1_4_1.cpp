#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // 只要 val 的值小于等于 10，while循环就会持续执行
    while (val <= 10) {
        sum += val; // 将 sum + val 赋值给 sum
        ++val;      // 将 val 加 1
    }
    std::cout << "Sum of 1 to 10 inclusive is "<< sum << std::endl;

    return 0;
}