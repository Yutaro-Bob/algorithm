#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);        //入力された二文字をn,kとする
  for(i = 0; i < n; i++){       //i=0でi<nならi+1にする
    scanf("%d", A+i);           //入力された文字列をA+iとする
  }

  lb = -1;
  ub = n;
  while (ub - lb > 1){
      unsigned int m = (lb + ub) / 2;
      if (A[m] >= k) ub = m;
      else lb = m;
  }
  printf("%d\n", ub);
  return 0;
}
