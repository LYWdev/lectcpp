#include<iostream>
//37입력받으면 456을 더해서 출력
int main(void)
{
  char name[100];
  char lang[200];

  std::cout<<"이름 뭐?"<<std::endl;
  std::cin>>name;

  std::cout<<"좋아하는 프로그래밍언어"<<std::endl;
  std::cin>>lang;

  std::cout<<"my name:"<<name<<std::endl;
  std::cout<<"my lang:"<<lang<<std::endl;

}