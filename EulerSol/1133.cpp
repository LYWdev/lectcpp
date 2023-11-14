/*
    마법 상자 안에는 0부터 9까지 숫자가 적혀있는 마법의 숫자 카드가 들어있다. 
    마법의 숫자 카드는 각각의 숫자마다 3장씩 모두 30장의 카드가 들어있다. 
    오일러가 마법 상자 안에서 3장의 숫자 카드를 뽑으면 아래 다음 규칙에 따라 상자에서 금화가 쏟아진다.
    
    ① 같은 숫자가 3개가 나오는 경우는 금화 10,000냥 + (같은 숫자) × 1,000냥의 금화를 받게 된다.
    ② 같은 숫자가 2개만 나오는 경우는 금화 1,000냥 + (같은 숫자) × 100냥의 금화를 받게 된다.
    ③ 숫자 카드 3개의 숫자가 모두 다른 경우는 (가장 큰 숫자 카드의 숫자) × 100냥의 금화를 받게 된다.
    오일러가 마법 상자로부터 받게 되는 금화는 모두 몇 냥인지를 구하여라.
*/
#include <iostream>
#include <stdio.h>

int res(int num1,int num2,int num3);
int main(void)
{
    int num1,num2,num3; 
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n",res(num1,num2,num3));
    return 0;
}
int res(int num1,int num2,int num3)
{
    int result; 
    return result;
}

