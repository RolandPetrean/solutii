// https://www.infoarena.ro/problema/hashuri
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("hashuri.in");
ofstream fout("hashuri.out");

int main() {
  int n;
  fin>>n;

  unordered_set<int> s{};
  for (int i=0; i<n; ++i) {
    int c, x;
    fin>>c>>x;

    if (c==1) s.insert(x);
    else if (c==2) s.erase(x);
    else fout<<(s.find(x)!=s.end())<<endl;
  }
}