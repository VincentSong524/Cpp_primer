#include <iostream>

int main()
{
    int sum = 0, val = 50;
    // 只要 val 的值小于等于 10，while循环就会持续执行
    while (val <= 100) {
        sum += val; // 将 sum + val 赋值给 sum
        ++val;      // 将 val 加 1
    }
    std::cout << "Sum of 50 to 100 inclusive is "<< sum << std::endl;

    int new_sum = 0, new_val = 10;
    while (new_val >= 0) {
        std::cout << new_val << std::endl;
        --new_val;
    }

    std::cout << "请输入两个整数，程序会打印两个整数范围内的所有整数" << std::endl;
    int max, min, tmp;
    std::cin >> min >> max;
    if (max < min) {
        tmp = max;
        max = min;
        min = tmp;
    }
    int value = min;
    while (value <= max) {
        std::cout << value << std::endl;
        value++;
    }
    return 0;
}