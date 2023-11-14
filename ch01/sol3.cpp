#include<iostream>

int main(void)
{
  int usernumber;
  int res;
  for (int i; i<=9; i++)
  {
    res = usernumber * res;
    std::<<usernumber<<'*'<<i<<'='<<res<<std::endl;
  }
}
