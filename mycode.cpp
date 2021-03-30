#include <bits/stdc++.h>
using namespace std;

int main(void) {
  long N, W;  cin >> N >> W;
  vector<long> w(N), v(N);
  for (long n = 0; n < N; n++)
    cin >> w[n] >> v[n];
  
  vector<vector<long>> dp(N + 1, vector<long>(W + 1, 0));
  for (long n = 1; n <= N; n++)
    for (long i = 1; i <= W; i++) {
      dp[n][i] = max(dp[n - 1][i], dp[n][i - 1]);
      if (0 <= i - w[n - 1])
	dp[n][i] = max(dp[n][i], dp[n - 1][i - w[n - 1]] + v[n - 1]);
    }

  /*
  for (long n = 0; n <= N; n++) {
    for (long i = 0; i <= W; i++)
      cout << dp[n][i] << ' ';
    cout << endl;
  }
  */

  cout << dp[N][W] << endl;
  return 0;
}
