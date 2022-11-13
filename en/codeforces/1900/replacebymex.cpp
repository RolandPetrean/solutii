// https://codeforces.com/contest/1375/problem/D
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int get_mex(vector<int>& a, int n) {
  vector<bool> included(n+1);
  for (int v:a) included[v] = true;
  for (int i=0; i<=n; ++i) {
    if (!included[i]) return i;
  }

  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;
  
    vector<int> a(n), target(n), op;
    for (int i=0; i<n; ++i) cin>>a[i];
    for (int i=0; i<n; ++i) target[i] = i;

    while (a != target) {
      int mex = get_mex(a, n);
      if (mex==n) {
        for (int i=0; i<n; ++i) {
          if (a[i] != i) {
            op.push_back(i);
            a[i] = mex;
            break;
          }
        }
        continue;
      }
      op.push_back(mex);
      a[mex] = mex;
    }

    cout<<op.size()<<endl;
    for (int v:op) cout<<v+1<<" ";
    cout<<endl;
  }
}