#include <iostream>

int main(void)
{
    int hour, min;
    int time; 

    std::cin >> hour >> min;
    std::cin >> time; 

    hour=((min+time)/60)+hour;
    min=(min+time)%60;

    if(hour >= 24)
    {
        hour = hour - 24;
        printf("%d %d\n",hour, min);
        return 0;
    } 

    if(hour<24)
    {
        printf("%d %d\n",hour, min);
        return 0;
    } 

}