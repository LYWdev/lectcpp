#include<iostream>
//37입력받으면 456을 더해서 출력
int main(void)
{

  int var1,var2;
  int res=0;
  std::cout<<"두 개의 숫자 입력 :";
  std::cin>>var1>>var2;
  if(var1<var2)
  {
    for(int i = var1+1; i<var2; i++)
    {
      res = i+res;
      std::cout<<res<<std::endl;
    }
  }
  else
  {
    for(int i = var2+1; i<var1; i++)
    {
      res = i+res;
      std::cout<<res<<std::endl;
    }
  }
    std::cout<<res;
}