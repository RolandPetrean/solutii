// https://www.varena.ro/problema/spioni
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("spioni.in");
ofstream fout("spioni.out");

string codificare(string s) {
  if (s.size()==1) return s;

  string a, b;
  for (int i=0; i<s.size(); i+=2) a.push_back(s[i]);
  for (int i=1; i<s.size(); i+=2) b.push_back(s[i]);
  return codificare(a)+codificare(b);
}

string decodificare(string a, string b) {
  string s;
  int i=0, j=0, r=1;
  for (; i<a.size() || j<b.size(); ++r) {
    if (r&1) s.push_back(a[i++]);
    else s.push_back(b[j++]);
  }
  return s;
}

int main() {
  char c;
  string s;
  fin>>c>>s;

  if (c=='C') fout<<codificare(s);
  else {
    vector<string> d(s.size());
    for (int i=0; i<s.size(); ++i) d[i] = s[i];
    while (d.size()>1) {
      for (int i=0; i<d.size()-1; ++i) {
        d[i] = decodificare(d[i], d[i+1]);
        d.erase(d.begin()+i+1);
      }
    }
    fout<<d[0];
  }
}