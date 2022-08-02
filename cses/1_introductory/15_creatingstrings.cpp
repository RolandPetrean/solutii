// https://cses.fi/problemset/task/1622
// https://cplusplus.com/reference/algorithm/next_permutation/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string initial;
  cin>>initial;
  sort(initial.begin(), initial.end());

  vector<string> perms;
  do {
    perms.push_back(initial);
  } while (next_permutation(initial.begin(), initial.end()));

  cout<<perms.size()<<endl;
  for (string p : perms) cout<<p<<endl;
}