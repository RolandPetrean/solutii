// https://codeforces.com/problemset/problem/1732/D1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int q;
  cin>>q;
  
  map<long long, long long> memo{};
  set<long long> s{};
  while (q--) {
    char op;
    long long x;
    cin>>op>>x;
    if (op=='+') s.insert(x);
    else {
      long long y=(memo[x]?memo[x]:x);
      while (s.find(y) != s.end()) y += x;
      memo[x] = y;
      cout<<memo[x]<<endl;
    }
  }
}