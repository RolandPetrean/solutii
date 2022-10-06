// https://www.pbinfo.ro/probleme/3749/valoare
// TODO solutia are 90 pct, implementeaza cu stiva
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("valoare.in");
ofstream fout("valoare.out");

bool isnum(char c) {
  return !isalpha(c) && c != '(' && c != ')';
}

int parse(string s) {
  ull t=0, v=0;
  for (int i=0; i<s.size(); ++i) {
    char c=s[i];

    if (isalpha(c)) v = c-'A'+1;
    else if (isnum(c)) {
      ull currn=0;
      while (isnum(c) && i<s.size()) {
        currn *= 10;
        currn += c-'0';
        ++i;
        c = s[i];
      }
      --i;
      v *= currn-1;
    }
    else if (c == '(') {
      int st=++i, par=1;
      c = s[i];
      while (par>0 && i<s.size()) {
        if (c == '(') ++par;
        else if (c == ')') --par;
        ++i;
        c=s[i];
      }
      --i;
      v = parse(s.substr(st,i-st));
    }
    t += v;
  }

  return t;
}

int main() {
  int c;
  string s;
  fin>>c>>s;

  if (c==1) {
    set<char> a;
    for (char c : s) {
      if (isalpha(c)) a.emplace(c);
    }
    fout<<a.size();
  } else if (c==2) {
    int i=0, t=0;
    while (i<s.size()) {
      char c=s[i];
      int currn=0;
      if (!isnum(c)) ++i;
      while (isnum(c) && i<s.size()) {
        currn *= 10;
        currn += c - '0';
        ++i;
        c = s[i];
      }
      t += currn;
    }
    fout<<t;
  } else if (c==3) {
    fout<<parse(s);
  }
}