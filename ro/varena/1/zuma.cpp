// https://www.varena.ro/problema/zuma
#include <bits/stdc++.h>
using namespace std;

ifstream fin("zuma.in");
ofstream fout("zuma.out");

pair<string,int> explode(string s, int n) {
  if (n<=0 || n>=s.size()-1) return {s, n};
  if (s[n] != s[n-1] || s[n] != s[n+1]) return {s, n};

  int l=n, r=n;
  while (l>0 && s[l-1]==s[n]) --l;
  while (r<s.size()-1 && s[r+1]==s[n]) ++r;
  return {s.substr(0, l) + s.substr(r+1), l};
}

int main() {
  int n;
  string s;
  fin>>n>>s;
  --n;

  pair<string,int> ex = explode(s, n);
  while (ex.first != s) {
    s = ex.first;
    ex = explode(s, ex.second);
    if (ex.first == s) ex = explode(s, ex.second-1);
  }

  fout<<s;
}