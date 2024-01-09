#include<stdio.h>
#include<stdlib.h>

//양의 정수 N이 주어지면 1 + (2 × 2) + (3 × 3) + … + ((N - 1) × (N - 1)) + (N × N)을 계산하는 프로그램을 작성하여라.
int main(){
  int N, max=0;
  scanf("%d", &N);
  for (int i = 1;i<101 ;i++)
  {
    max = max+(N*i);
  }
  printf("%d",max);
}