#include <iostream>

int main(void)
{
    int num1, num2;

    std::cin >> num1 >> num2;

    if (num1 > num2)
    {
        printf(">");
        return 0;
    }

    else if (num1 < num2)
    {
        printf("<");
        return 0;
    }

    else 
    {
        printf("=");
        return 0;
    }

    return 0;

}