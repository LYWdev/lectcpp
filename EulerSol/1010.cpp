/*

    오일러는 세 개의 정수, 그리고 등호와 네 개의 사칙연산(덧셈, 뺄셈, 곱셈, 나눗셈) 부호를 가지고 그의 수학 노트에 하나의 수학식을 완성하였다.
    다른 과목을 공부하는 동안에. 그의 친구 위즐리가 완성된 수학식 중에서 연산부호와 등호를 지워버리고 말았다.
    남아있는 세 개의 정수 사이에 연산부호를 집어넣어 다시 수학식을 복원할 수 있도록 오일러를 도와주어라.

*/
#include <iostream>
#include <stdio.h>
모르겠다 경우의 수로 다짜야하는건가...
#define SUM(a,b,c,d) (a+b+c+d)
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main(void)
{

    int num1, num2, num3; 

    scanf("%d %d %d ", &num1, &num2, &num3);

    if(num1+num2==num3)
    {
        printf("%d + %d = %d\n",num1,num2,num3);
    } 

    else if(num1/num2==num3)
    {
        printf("%d + %d = %d\n",num1,num2,num3);
    } 
    else if(num1*num2==num3)

    {
        printf("%d * %d = %d\n",num1,num2,num3);
    } 

    else if(num1-num2==num3)
    {
        printf("%d - %d = %d\n",num1,num2,num3);
    } 

    else if(num1/num2==num3)
    {
        printf("%d - %d = %d\n",num1,num2,num3);
    } 


    return 0;

}
