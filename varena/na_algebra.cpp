// https://www.varena.ro/problema/algebra
#include <bits/stdc++.h>
using namespace std;

ifstream fin("algebra.in");
ofstream fout("algebra.out");

int main() {
  char op;
  fin>>op;

  if (op == 'D') {
    int a, b;
    fin>>a>>b;
    fout<<__gcd(a, b);
  } else if (op == 'M') {
    long long a, b;
    fin>>a>>b;
    fout<<(a*b)/__gcd(a, b);
  } else if (op == 'K') {
    int a, b, k;
    fin>>a>>b>>k;
    fout<<(a%k==0 ? max(a,b)/k-min(a,b)/k+1 : max(a,b)/k-min(a,b)/k);
  } else if (op == 'P') {
    int a, p=0;
    fin>>a;

    for (int d=2; d*d<=a; ++d) {
      if (a%d==0) {
        while (a%d==0) a /= d;
        p=d;
      }
    }
    if (a!=1 && a>p) p=a;
    fout<<p;
  } else if (op == 'S') {
    string a;
    int s;
    fin>>a>>s;
    
    int maxi=0;
    for (int i=0; i<a.size()-s+1; ++i) {
      int nr=0;
      for (int j=0; j<s; ++j) nr = nr*10+(a[i+j]-'0');
      if (nr>maxi) maxi=nr;
    }
    fout<<maxi;
  }
}