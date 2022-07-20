#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
#define MOD 1000000007
/* ------------------------------macros------------------------------------- */

void solve()
{
  int x, y;
  cin >> x;
  cin >> y;
  if (x + y == 0)
    cout << "YES\n";
  else if ((x + y) % 3 == 0 && !(abs(x - y) > x || abs(x - y) > y) && x && y)
    cout << "YES\n";
  else
    cout << "NO\n";
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
  cin >> t;
  while (t--)
  {
    solve();
  }

  return 0;
}