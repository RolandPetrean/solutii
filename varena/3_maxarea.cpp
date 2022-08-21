// https://www.varena.ro/problema/maxarea
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("maxarea.in");
ofstream fout("maxarea.out");

int main() {
  int n;
  fin>>n;

  int maxa=0;
  stack<int> s;
  for (int i=0; i<=n; ++i) {
    int d;
    if (i<n) fin>>d;
    else d=0;

    int is=s.size(), t=0;
    while (!s.empty() && s.top()>d) {
      maxa = max(maxa, (int) (s.top()*(is-s.size()+1)));
      ++t;
      s.pop();
    }
    for (int j=0; j<=t; ++j) s.push(d);
  }

  fout<<maxa;
}