#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
/* ------------------------------macros------------------------------------- */

void solve()
{
  lli count;
  cin >> count;

  lli prev;
  lli moves = 0;

  cin >> prev;
  for (lli i = 0; i < count - 1; i++)
  {
    lli curr;
    cin >> curr;
    if (curr >= prev)
    {
      prev = curr;
      continue;
    }
    moves += abs(prev - curr);
  }
  cout << moves;
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