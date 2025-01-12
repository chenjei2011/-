
#include <iostream>//头文件

int main() {
    int heads, legs;
    int chickens, rabbits;

    // 假设总头数总腿数
    heads = 100;
    legs = 350;

    // 解方程
    rabbits = legs / 2 - heads;
    
    chickens = heads - rabbits;

    // 检查
    if (2 * chickens + 4 * rabbits == legs) {
        std::cout << "鸡的数量为: " << chickens << std::endl;
        std::cout << "兔的数量为: " << rabbits << std::endl;
    }
    else {
        std::cout << "没有合理的解。" << std::endl;
    }

    return 0;
}


