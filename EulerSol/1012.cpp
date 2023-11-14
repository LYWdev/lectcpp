#include <iostream>

int calculateR2(int r1, int avg); // 전방 선언

int main(void)
{
    int r1, avg;
    std::cin >> r1 >> avg;
    int r2 = calculateR2(r1, avg);
    std::cout << r2;
}

int calculateR2(int r1, int avg)
{
    return avg * 2 - r1;
}