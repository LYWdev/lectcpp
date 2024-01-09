#include<stdio.h>
#include<stdlib.h>

//훌륭한 프로그램을 작성하기를 원한다면 강한 체력과 고도의 두뇌 훈련이 필요하다. 
//이런 학생들을 위해서 왕국에서는 N명의 마법학교 학생들에게 스테이크를 제공하기로 하였다. 
//스테이크는 프라이팬에서 굽는데 한 면을 굽기 위해서는 1분이 필요하고 양면을 모두 다 구워야 먹을 수 있다.
//마법학교에 급식을 제공하는 오일러FOOD에서는 이렇게 많은 학생들에게 스테이크를 제공할지 예상하지 못했기 때문에 동시에 K장을 구울 수 있는 프라이팬을 오직 한 개만 가지고 있었다.
//오일러FOOD의 수석 셰프인 오일러가 모든 스테이크를 굽는데 걸리는 시간은 몇 분이 걸릴지 예상할 수 있도록 여러분들의 뛰어난 프로그램 실력으로 오일러를 도와주어라.
int main(){
  int n,min = 2, k;
  scanf("%d %d", &n ,&k);
  //N보다 K가 클때 즉 학생수보다 프라이팬의 용량이 클때는 무조건 2분 컬린다.
  //예 : 학생수가 2명이고 k가 3일경우

  if(n<k) printf("%d",2);

  // 학생수와 프라이팬의 용량이 나누어 떨어질때
  //예 : 학생수가 6명이고 k가 3일경우 2분씩 2번 구우면 6인분이 완성 따라서 2*(k/n)분
  else if ((n>k)&&(n%k==0))
  {
    printf("%d",2*(n/k));
  }

  // 학생수와 프라이팬의 용량이 나누어 떨어지지 않음

  //예 : 학생수가 5명이고 k가 3일경우 
  // 1) 3장을 굽는다 -> 2분, 2장을 굽는다 -> 2분 => 4분
  // 2) 
  //    1. 2장(A B)을 1분 굽는다.
  //    2. 1장바꾸어(A C) 을 1분 굽는다.
  //    3. 1장바꾸어(B C) 을 1분 굽는다. 3분만에 3개(ABC)완성.
  //    4. 1장바꾸어(D E) 을 2분 굽는다. 5분만에 5개 완성

  //예 : 학생수가 6명이고 k가 4일경우 
  // 1) 3장을 굽는다 -> 2분, 2장을 굽는다 -> 2분 => 4분
  // 2) 
  //    1. 2장(A B)을 1분 굽는다.
  //    2. 1장바꾸어(A C) 을 1분 굽는다.
  //    3. 1장바꾸어(B C) 을 1분 굽는다. 3분만에 3개(ABC)완성.
  //    4. 1장바꾸어(D E) 을 2분 굽는다. 5분만에 5개 완성

  else if ((n>k)&&(n%k!=0))
  {
    printf("%d",2*(n/k)+1);
  }
}

