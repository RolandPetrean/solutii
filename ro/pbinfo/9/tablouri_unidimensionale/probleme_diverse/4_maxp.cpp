// https://www.pbinfo.ro/probleme/1057/maxp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("maxp.in");
ofstream fout("maxp.out");

int main() {
  int n;
  fin>>n;

  stack<int> ss, sd;
  vector<int> a(n), s(n), d(n);
  for (int i=0; i<n; ++i) fin>>a[i];

  for (int i=0; i<n; ++i) {
    while (!ss.empty() && a[i]>a[ss.top()]) {
      s[i] += s[ss.top()]+1;
      ss.pop();
    }
    ss.push(i);
  }

  for (int i=n-1; i>=0; --i) {
    while (!sd.empty() && a[i]>a[sd.top()]) {
      d[i] += d[sd.top()]+1;
      sd.pop();
    }
    sd.push(i);
  }

  int maxp=0, t=0;
  for (int i=0; i<n; ++i) {
    int secv=(s[i]+1) * (d[i]+1);
    if (secv > maxp) {
      maxp = secv;
      t=1;
    }
    else if (secv == maxp) ++t;
  }

  fout<<maxp<<endl<<t;
}