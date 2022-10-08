// https://www.varena.ro/problema/swap
#include <bits/stdc++.h>
using namespace std;#define mod 1000000007

ifstream fin("swap.in");
ofstream fout("swap.out");

int main() {
  int n;
  fin>>n;

  int t=0, p=0;
  stack<int> s;
  for (int i=0; i<n; ++i) {
    char c;
    fin>>c;

    if (c == '(') s.push(i);
    else {
      if (s.top() == i-1 && s.size() >= 2) ++p;
      t += i-s.top();
      s.pop();
    }
  }

  fout<<t<<endl;
  if (!p) fout<<-1<<endl<<0;
  else fout<<t-2<<endl<<p;
}