#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
#define MOD 1000000007
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
/* ------------------------------macros------------------------------------- */

void swap(pair<lli, lli> &p)
{
  lli s = p.second;
  p.second = p.first;
  p.first = s;
}

void solve()
{
  string s;
  cin >> s;

  char prev{'\0'};
  pair<lli, lli> count{0, 0}; // current, max

  for (char curr : s)
  {
    if (curr == prev || prev == '\0')
      count.first++;
    else
    {
      if (count.first > count.second)
        swap(count);
      count.first = 1;
    }

    prev = curr;
  }
  if (count.first > count.second)
    swap(count);
  cout << count.second;
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