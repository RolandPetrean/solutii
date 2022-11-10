// https://codeforces.com/problemset/problem/1714/E
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int add(int x) {
  return x+x%10;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; ++i) {
      cin>>a[i];
      if (a[i]%5==0) a[i] = add(a[i]);
    }

    if (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end())) {
      cout<<"YES\n";
      continue;
    }

    array<bool,2> exists{};
    for (int i=0; i<n; ++i) {
      if (a[i]%10==0) {
        exists[0] = exists[1] = true;
        break;
      }

      while (a[i]%10 != 2) a[i] = add(a[i]);
      if (a[i]%20==2) exists[0] = true;
      else exists[1] = true;
    }

    if (exists[0] && exists[1]) cout<<"NO\n";
    else cout<<"YES\n";
  }
}