#include <iostream>
#include <stdio.h>

int mul(int a, int b); // 전방 선언

int main(void)
{
    int num1;
    std::cin >> num1;

    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n",num1, i, mul(num1, i));
    }

    return 0;
}

int mul(int a, int b)
{
    return a * b;
}
