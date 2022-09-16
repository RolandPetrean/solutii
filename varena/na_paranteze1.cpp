// https://www.varena.ro/problema/paranteze1
#include <bits/stdc++.h>
using namespace std;

ifstream fin("paranteze1.in");
ofstream fout("paranteze1.out");

int main() {
  char c;

  stack<char> s;
  int maxi=0;
  while ((fin>>noskipws>>c) && c != '\n') {
    if (c != '(' && c != ')' && c != '{' && c != '}') {
      fout<<-1;
      return 0;
    }
    if (c=='(' || c=='{') s.push(c);
    else if (s.empty() || (c==')' && s.top()!='(') || (c=='}' && s.top()!='{')) {
      fout<<-1;
      return 0;
    } else s.pop();
    maxi = max(maxi, (int)s.size());
  }
  fout<<(s.size() ? -1 : maxi);
}