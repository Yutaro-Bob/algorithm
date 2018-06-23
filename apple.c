#include <stdio.h>

int n;
int k;
int A[10000];

int p(int m){
  int i = 0;
  int x = 0;
  int y;
  for (i = 0;i < n;i++){
    if (A[i] % m == 0){
      y = A[i] / m;
      x = x + y;
    }
    else {
      y = A[i] / m + 1;
      x = x + y;
    }
  }
  return x <= k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", A+i);
  }

lb = 0;
ub = 1000000000;
while(ub - lb > 1){
  unsigned int m = (lb + ub) / 2;
  if (p(m)) ub = m;
  else lb = m;
}
  printf("%d\n", ub);
  return 0;
}
