#include<iostream>

int main(void)
{
  int num=20;
  //std::cout<<"출력대상"
  //출력대상에서 자료형에 크게 상관없이 모든 형태가 출력가능하다.
  std::cout<<"Hello World"<<std::endl;
  std::cout<<"Hello"<<"World"<<std::endl;
  //<<연산를 이용하여 출력대상의 연이은 표현
  std::cout<<num<<' '<<'A';
  // 개행 
  std::cout<<' '<<3.14<<std::endl;
}