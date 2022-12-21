// https://infoarena.ro/problema/emm
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("emm.in");
ofstream fout("emm.out");

void process(stack<int>& t, stack<char>& op) {
  char p=op.top(); op.pop();
  int r=t.top(); t.pop();
  int l=t.top(); t.pop();
  if (p=='m') t.push(min(l, r));
  else if (p=='M') t.push(max(l, r));
}

int main() {
  string s;
  fin>>s;

  stack<int> t{};
  stack<char> op{};
  for (int i=0; i<s.size(); ++i) {
    if (isdigit(s[i])) {
      int x=0;
      while (i<s.size() && isdigit(s[i])) x = x*10+(s[i++]-'0');
      --i;
      t.push(x);
    } else if (s[i]=='(') op.push('(');
    else if (s[i]==')') {
      while (op.top() != '(') process(t, op);
      op.pop();
    } else {
      while (!op.empty() && op.top() != '(') process(t, op);
      op.push(s[i]);
    }
  }

  while (!op.empty()) process(t, op);
  fout<<t.top();
}