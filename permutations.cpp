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
  lli x;
  cin >> x;

  if (x <= 3 && x > 1)
  {
    cout << "NO SOLUTION";
    return;
  }

  lli oddC = 0;
  lli evenC = 0;
  // EVEN
  if (x % 2 == 0)
  {
    evenC = x / 2;
    oddC = x - evenC;
  }
  // ODD
  else
  {
    oddC = (x + 1) / 2;
    evenC = x - oddC;
  }

  for (lli i = 0; i < evenC; i++)
  {
    cout << 2 + i * 2 << " ";
  }
  for (lli i = 0; i < oddC; i++)
  {
    cout << 1 + i * 2 << " ";
  }
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