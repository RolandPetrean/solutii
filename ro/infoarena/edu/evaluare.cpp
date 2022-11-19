// https://infoarena.ro/problema/evaluare
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("evaluare.in");
ofstream fout("evaluare.out");

int get_priority(char op) {
  if (op=='+' || op=='-') return 0;
  else if (op=='*' || op=='/') return 1;
  return -1;
}

void process_op(stack<int>& nr, char op) {
  int r=nr.top(); nr.pop();
  int l=nr.top(); nr.pop();
  if (op=='+') nr.push(l+r);
  else if (op=='-') nr.push(l-r);
  else if (op=='*') nr.push(l*r);
  else if (op=='/') nr.push(l/r);
}

int main() {
  string s;
  fin>>s;

  stack<int> nr{};
  stack<char> op{};
  for (int i=0; i<s.size(); ++i) {
    if (isdigit(s[i])) {
      int x=0;
      while (i<s.size() && isdigit(s[i])) x = x*10+(s[i++]-'0');
      --i;
      nr.push(x);
    } else if (s[i] == '(') op.push('(');
    else if (s[i] == ')') {
      while (op.top()!='(') {
        process_op(nr, op.top());
        op.pop();
      }
      op.pop();
    } else {
      char curr=s[i];
      while (!op.empty() && get_priority(op.top()) >= get_priority(curr)) {
        process_op(nr, op.top());
        op.pop();
      }
      op.push(curr);
    }
  }

  while (!op.empty()) {
    process_op(nr, op.top());
    op.pop();
  }
  fout<<nr.top();
}