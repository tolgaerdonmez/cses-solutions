#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define endl "\n"
/* macros */

void solve()
{
  lli x;
  cin >> x;
  if ((x * (x + 1)) % 4 != 0)
  {
    cout << "NO";
    return;
  }

  lli half = x * (x + 1) / 2 / 2;
  lli y = 0;

  lli j = x;
  string first, second = "";
  lli f = 0, s = 0;

  bool end = false;
  for (lli i = 1; i <= j; i++)
  {
    if (end)
    {
      second += to_string(j) + " " + to_string(i) + " ";
      s += 2;
      j--;
      continue;
    }

    if (y == half)
    {
      end = true;
      j++;
    }
    else
    {
      y += j;
      first += to_string(j) + " ";
      f++;
    }

    if (y == half)
    {
      end = true;
      i--;
    }
    else
    {
      y += i;
      first += to_string(i) + " ";
      f++;
    }

    j--;
  }
  cout << "YES" << endl;
  cout << f << endl
       << first << endl;
  cout << s << endl
       << second << endl;
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
