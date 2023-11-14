#include<iostream>

int main(void)
{
  int num[100];
  int res=0;
  for (int i = 1; i<=5; i++ )
  {
    std::cout<<i<<"번째 정수 입력"<<std::endl;
    std::cin>>num[i];
    res=num[i]+res;
  }
    std::cout<<"res : "<<res<<std::endl;

}

