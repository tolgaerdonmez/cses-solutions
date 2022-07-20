#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
#define MOD 1000000007
/* ------------------------------macros------------------------------------- */

void solve()
{
  int x;
  cin >> x;
  if (x < 5)
  {
    cout << 0;
    return;
  }

  int c = 0;
  while (x != 0)
  {
    x /= 5;
    c += x;
  }
  cout << c;
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

  return 0;
}