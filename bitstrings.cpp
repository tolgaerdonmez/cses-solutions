#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
/* ------------------------------macros------------------------------------- */

void solve()
{
  int x;
  cin >> x;
  int a = 1;
  for (lli i = 0; i < x; i++)
  {
    a *= 2;
    a %= (lli)(1e9 + 7);
  }
  cout << a;
}

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t = 1;
  // cin >> t;
  while (t--)
  {
    solve();
  }
}
