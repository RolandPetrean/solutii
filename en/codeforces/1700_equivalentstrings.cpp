// https://codeforces.com/problemset/problem/559/B
#include <bits/stdc++.h>
using namespace std;#define endl '\n'
 
string lex(string n) {
  if (n.size()&1) return n;
  string s1=lex(n.substr(0, n.size()/2));
  string s2=lex(n.substr(n.size()/2));
  return (s1<s2) ? s1+s2 : s2+s1;
}
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string a, b;
  cin>>a>>b;
 
  if (lex(a) == lex(b)) cout<<"YES";
  else cout<<"NO";
}