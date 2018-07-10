#include <stdio.h>

// c(n)を計算したい n の最大値
#define N 10000

// コインの価値
const int V[] = {1, 5, 10, 50, 100, 500};

// コインの種類の数(この場合は6)
const int K = sizeof(V) / sizeof(V[0]);

unsigned long long int dp[N+1];


int main(){
  int n, k, i;

  scanf("%d", &n);

  dp[0] = 1;
  for (i = 1; i <= n; i++){
    dp[i] = 0;
  }
  for (k = 1;k <= K; k++){
    for (i = k; i <= n; i++){
      dp[i] += dp[i - V[k-1]];
    }
  }
  printf("%llu\n", dp[n]);
  return 0;
}
