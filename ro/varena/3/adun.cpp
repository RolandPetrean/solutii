// https://www.varena.ro/problema/adun
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("adun.in");
ofstream fout("adun.out");

int main() {
  ll x=-1, y=-1, z=-1, op=0;
  char c;
  while (fin>>c) {
    if (isdigit(c)) {
      ll num=0;
      while (isdigit(c)) {
        num = num*10+(c-'0');
        fin>>c;
      }
      if (op==0) x=num;
      else if (op==1) y=num;
      else if (op==2) z=num;
    }
    if (c=='+' || c=='=') ++op;
    else if (c==';') {
      if (x==-1) fout<<(z-y)<<"+"<<y<<"="<<z;
      else if (y==-1) fout<<x<<"+"<<(z-x)<<"="<<z;
      else if (z==-1) fout<<x<<"+"<<y<<"="<<(x+y);
      else fout<<x<<"+"<<y<<"="<<z;
      fout<<";\n";
      x=-1;
      y=-1;
      z=-1;
      op=0;
    }
  }
}