#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int s;

    std::cout << "Размер массива: ";
    std::cin >> s;

    std::vector<int> nums(s);
    for (int i = 0; i < s; i++) {
        int a = i;
        a++;
        std::cout << "Введи " << a << " число: " << "\n";
        std::cin >> nums[i];
    }

    int min = nums[0];
    int max = nums[0];

    for (int i = 1; i < s; i++) {
        if (nums[i] < min) min = nums[i];
        if (nums[i] > max) max = nums[i];
    }

    std::cout << "Минимальное: "<< min << "\nМаксимальное: " << max << std::endl;
}


