// https://www.varena.ro/problema/lightbot
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("lightbot.in");
ofstream fout("lightbot.out");

int main() {
  int c, n;
  fin>>c>>n;

  int x;
  vector<int> a, freq(n+1);
  freq[0] = -1;
  while (fin>>x) {
    a.push_back(x);
    ++freq[x];
  }

  vector<int> skipped;
  bool skip=false;
  int p=1;
  for (int i=1; i<a.size(); ++i) {
    if (a[i]<=a[i-1] || a[i]-a[i-1]>2 || (skip && a[i]-a[i-1]>=2)) {
      ++p;
      skip = false;
    } else if (!skip && a[i]-a[i-1]==2) {
      skipped.push_back(a[i]-1);
      skip = true;
    }
  }

  if (c==1) {
    fout<<p;
  } else if (c==2) {
    int maxi=0;
    for (int i=n; i>0; --i) {
      if (freq[i]>freq[maxi]) maxi = i;
    }
    fout<<maxi;
  } else {
    for (int v:skipped) fout<<v<<" ";
  }
}