#include <iostream>

int main() {
    int heads, legs;//腿数与头数
    int chickens, rabbits;//鸡与兔

    // 提示用户输入头数和腿数
    std::cout << "请输入头数: ";
    std::cin >> heads;
    std::cout << "请输入腿数: ";
    std::cin >> legs;
    if (legs % 2 != 0 || heads <= 0 || legs < 2 * heads || legs > 4 * heads) {
        std::cout << "无解" << std::endl;//判断是否符合条件
    }
    else {
        chickens = 2 * heads - legs / 2;//计算
        rabbits = heads - chickens;

        std::cout << "鸡的数量: " << chickens << std::endl;
        std::cout << "兔的数量: " << rabbits << std::endl;//输出结果
    }

    return 0;
}
