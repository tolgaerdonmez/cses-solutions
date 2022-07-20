#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (long long int i = 1; i <= n; i++)
  {
    long long int a = (i * i * (i * i - 1) / 2 - (i - 2) * (i - 1) * 4);
    cout << a << endl;
  }

  return 0;
}
