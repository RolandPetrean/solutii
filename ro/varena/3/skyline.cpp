// https://www.varena.ro/problema/skyline
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("skyline.in");
ofstream fout("skyline.out");

int main() {
  int n;
  fin>>n;

  long long maxa=0;
  stack<pair<long long long long>> s;
  for (int i=0; i<=n; ++i) {
    long long h, l;
    if (i<n) fin>>h>>l;
    else h=l=0;

    long long maxl=0;
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