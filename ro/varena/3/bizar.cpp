// https://www.varena.ro/problema/bizar
#include <bits/stdc++.h>
using namespace std;

ifstream fin("bizar.in");
ofstream fout("bizar.out");

vector<int> parseExpr() {
  char c;
  int n=0;
  vector<int> ns;
  while (fin>>c && c != '\n') {
    if (isdigit(c)) {
      n = n*10+((int)c-'0');
    } else if (c==',') {
      ns.push_back(n);
      n = 0;
    } else if (c=='(') {
      vector<int> parsedNs = parseExpr();
      n = parsedNs[(n-1)%parsedNs.size()];
    } else if (c==')') {
      if (n) ns.push_back(n);
      return ns;
    }
  }

  if (n) ns.push_back(n);
  return ns;
}

int main() {
  vector<int> ns = parseExpr();
  fout<<ns[0];
}