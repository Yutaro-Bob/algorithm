#include <stdio.h>

// c(n)を計算したい n の最大値
#define N 10000

// コインの価値
const int V[] = {1, 5, 10, 50, 100, 500};

// コインの種類の数(この場合は6)
const int K = sizeof(V) / sizeof(V[0]);

unsigned long long int dp[N+1][N+1];


int main(){
  int n, k, i;

  scanf("%d", &n);

  dp[0][0] = 1;
  for (i = 1; i <= n; i++){
    dp[0][i] = 0;
  }
  for (k = 1;k <= K; k++){
    for (i = 0; i < k; i++){
      dp[k][i] = dp[k-1][i];
    }
    for (i = k; i <= n; i++){
      dp[k][i] = dp[k-1][i] + dp[k][i - V[k-1]];
    }
  }
  printf("%llu\n", dp[K][n]);
  return 0;
}
