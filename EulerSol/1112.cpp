/*
뜨거운 여름날 오일러와 그의 친구 위즐리는 수박을 사기로 결심하였다. 
그들의 생각에 가장 크고 아주 잘 익은 수박 하나를 선택하였다. 
그리고 수박의 무게를 측정하였고 무게는 W 킬로그램으로 측정되었다.
그들은 곧장 집으로 달려갔고, 갈증으로 수박을 나누기로 결심하였지만 어려운 문제에 직면하였다.

오일러와 위즐리는 짝수를 너무나 좋아하기 때문에 수박을 두 조각으로 나눌 때, 두 개의 무게는 같지 않아도 상관없으나 두 수박의 무게가 모두 짝수가 되도록 나누고 싶어한다. 
그들은 너무 피곤해서 가능하면 빨리 저녁 식사를 하기를 원하고 있기 때문에 그들이 원하는 방식으로 수박을 나눌 수 있는지 그들을 도와야 한다. 당연히 나누어진 수박의 무게는 양의 정수를 갖는다.

*/
#include <iostream>
#include <stdio.h>


bool judge(int num1)
{
    bool ans=(num1%2 ==0);
    return ans;

}
int main(void)
{

    bool ans;
    int weight;
    scanf("%d",&weight);
    ans =judge(weight);

    if (ans&&(weight != 2)){printf("YES");}
    else{printf("NO");}

    return 0;
}
