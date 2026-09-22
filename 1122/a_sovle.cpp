// 2026-09-23 01:20
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int m = min({a1, a2, a3});
    cout << n - m << "\n";
  }

  return 0;
}
