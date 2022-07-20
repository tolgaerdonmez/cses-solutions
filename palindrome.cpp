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
  string s;
  cin >> s;

  pair<char, lli> odd{'0', 0};
  lli oddCount = 0;
  map<char, lli> cd;

  bool ok = true;
  for (char x : set<char>(all(s)))
  {
    lli co = count(all(s), x);
    if (co % 2 == 1)
    {
      odd.first = x;
      odd.second = co;
      oddCount++;
      if (oddCount > 1)
      {
        ok = false;
        break;
      }
    }
    else
      cd[x] = co;
  }
  if (!ok)
  {
    cout << "NO SOLUTION";
    return;
  }
  string first = "";
  for (pair<char, lli> x : cd)
  {
    char &f = x.first;
    lli &s = x.second;

    first += string(s / 2, f);
  }

  cout << first << string(odd.second, odd.first) << string(rall(first));
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