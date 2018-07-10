#include <stdio.h>

// 計算する分割数の入力の最大値
#define N 1000

unsigned long long int dp[N+1][N+1];

int main(){
  int k, n, i;

  scanf("%d", &n);
  
  dp[0][0] = 1;

  for (i = 1; i <= n; i++){
    dp[0][i] = 0;
  }
  for (k = 1; k <= n; k++){
    for (i = 0; i < k; i++){
      dp[k][i] = dp[i][i];
    }
    for (i = k; i <= n; i++){
      dp[k][i] = dp[k - 1][i] + dp[k-1][i - k];
    }
  }

  printf("%llu\n", dp[n][n]);

  return 0;
}

