// https://www.varena.ro/problema/bug
// TODO c2
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("bug.in");
ofstream fout("bug.out");

int main() {
  int c;
  string s;
  fin>>c>>s;

  vector<int> b{};
  array<int,10> freq{};
  for (int i=s.size()-1; i>=0; --i) {
    freq[s[i]-'0'] = 1;

    bool ok=true;
    for (int j=0; j<10; ++j) {
      if (!freq[j]) ok=false;
    }
    if (ok) {
      memset(&freq, 0, sizeof(freq));
      b.push_back(i);
    }
  }

  if (c==1) {
    int t=b.size()+1;

    bool ok=true;
    for (int i=1; i<10; ++i) {
      if (!freq[i]) ok=false;
    }
    if (freq[0]) ok=false;
    if (ok) ++t;

    fout<<t;
  }
}