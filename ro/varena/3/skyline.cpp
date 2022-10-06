// https://www.varena.ro/problema/skyline
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("skyline.in");
ofstream fout("skyline.out");

int main() {
  int n;
  fin>>n;

  ll maxa=0;
  stack<pair<ll,ll>> s;
  for (int i=0; i<=n; ++i) {
    ll h, l;
    if (i<n) fin>>h>>l;
    else h=l=0;

    ll maxl=0;
    while (!s.empty() && s.top().first>h) {
      maxl += s.top().second;
      maxa = max(maxa, s.top().first*maxl);
      s.pop();
    }

    s.push({h, maxl});
    s.push({h, l});
  }

  fout<<maxa;
}