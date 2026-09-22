// 2026-09-23 01:20
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, a1, a2, a3;
    cin >> n >> a1 >> a2 >> a3;
    cout << n - min({a1, a2, a3}) << "\n";
  }
}
