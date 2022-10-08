// https://www.pbinfo.ro/probleme/4137/rgb
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("rgb.in");
ofstream fout("rgb.out");

vector<int> fight(vector<int> m, vector<int> s, vector<int> o) {
  vector<int> p(m.size());
  int si=0, oi=0;
  for (int i=0; i<m.size(); ++i) {
    if (i>0) p[i] += p[i-1] + 1;
    while (2*m[i] > s[si] && si<s.size()) {
      ++si; ++p[i];
    }
    while (m[i] > 2*o[oi] && oi<o.size()) {
      ++oi; ++p[i];
    }
  }
  return p;
}

int main() {
  int c, r, g, b;
  fin>>c>>r>>g>>b;

  vector<int> er(r), eg(g), eb(b);
  for (int i=0; i<r; ++i) fin>>er[i];
  for (int i=0; i<g; ++i) fin>>eg[i];
  for (int i=0; i<b; ++i) fin>>eb[i];
  
  vector<int> fr=fight(er, eg, eb), fg=fight(eg, eb, er), fb=fight(eb, er, eg);

  if (c == 1) {
    pair<int,int> mx{0,0};
    for (int i=0; i<r; ++i) {
      if (fr[i] > mx.first || (fr[i] == mx.first && er[i]<mx.second)) mx={fr[i], er[i]};
    }
    for (int i=0; i<g; ++i) {
      if (fg[i] > mx.first || (fg[i] == mx.first && eg[i]<mx.second)) mx={fg[i], eg[i]};
    }
    for (int i=0; i<b; ++i) {
      if (fb[i] > mx.first || (fb[i] == mx.first && eb[i]<mx.second)) mx={fb[i], eb[i]};
    }
    fout<<mx.second;
  } else {
    for (auto v : fr) fout<<v<<" ";
    fout<<endl;
    for (auto v : fg) fout<<v<<" ";
    fout<<endl;
    for (auto v : fb) fout<<v<<" ";
  }
}