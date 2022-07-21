#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
/* ------------------------------macros------------------------------------- */

pair<lli, lli> H(lli n)
{
  if (n % 2)
    return pair<lli, lli>{1, n};
  else
    return pair<lli, lli>{n, 1};
}

void solve()
{
  lli row, col;
  cin >> row;
  cin >> col;

  lli n = max(row, col);
  lli I = 0;
  if ((n % 2 == 1 && col < n) || (n % 2 == 0 && row < n))
  {
    I += (n + n - row - col) + abs(H(n).first - n) + abs(H(n).second - n);
  }
  else
  {
    I += abs(H(n).first - row) + abs(H(n).second - col);
  }

  cout << n * n - I << endl;
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