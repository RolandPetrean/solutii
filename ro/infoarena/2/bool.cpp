// https://infoarena.ro/problema/bool
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("bool.in");
ofstream fout("bool.out");

int priority(char p) {
  if (p=='!') return 2;
  else if (p=='&') return 1;
  else if (p=='|') return 0;
  return -1;
}

void process(stack<int>& t, stack<char>& op) {
  char p=op.top(); op.pop();
  int r=t.top(); t.pop();
  if (p=='!') t.push(!r);
  else {
    int l=t.top(); t.pop();
    if (p=='&') t.push(l&r);
    else if (p=='|') t.push(l|r);
  }
}

int eval(string s, array<int,26>& v) {
  stack<int> t{};
  stack<char> op{};
  for (int i=0; i<s.size(); ++i) {
    if (isalpha(s[i])) {
      string x="";
      while (isalpha(s[i])) x.push_back(s[i++]);
      --i;

      if (x.size()==1 || x=="TRUE" || x=="FALSE") {
        bool val=0;
        if (x.size()==1) val = v[x[0]-'A'];
        else val = (x=="TRUE");
        t.push(val);
      } else if (x=="NOT" || x=="AND" || x=="OR") {
        char curr;
        if (x=="NOT") curr='!';
        else if (x=="AND") curr='&';
        else curr='|';

        while (!op.empty() && priority(op.top()) > priority(curr)) process(t, op);
        op.push(curr);
      }
    } else if (s[i]=='(') op.push('(');
    else if (s[i]==')') {
      while (op.top() != '(') process(t, op);
      op.pop();
    }
  }
  
  while (!op.empty()) process(t, op);
  return t.top();
}

int main() {
  int n;
  string s, b;
  getline(fin, s);
  fin>>n;

  array<int,26> v{};
  for (int i=0; i<n; ++i) {
    char ch;
    fin>>ch;
    v[ch-'A'] = !v[ch-'A'];
    fout<<eval(s, v);
  }
}