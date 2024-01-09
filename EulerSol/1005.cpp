#include<stdio.h>
#include<stdlib.h>

int main(){
  int N, max=0;
  scanf("%d", &N);
  //양의 정수 N이 주어지면 
  for (int i = 1;i<101 ;i++)
  {
    max = max+(N*i);
  }
  printf("%d",max);
}