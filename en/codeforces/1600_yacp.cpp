// https://codeforces.com/problemset/problem/1342/C
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int a, b, q;
    cin>>a>>b>>q;

    int len=a*b;
    vector<int> cnt(len+1);
    for (int i=1; i<=len; ++i) {
      cnt[i] = cnt[i-1] + ((i%a)%b != (i%b)%a);
    }

    while (q--) {
      long long l, r;
      cin>>l>>r;

      long long q1 = cnt[len]*((l-1)/len) + cnt[(l-1)%len], q2 = cnt[len]*(r/len) + cnt[r%len];
      cout<<q2-q1<<" ";
    }
    cout<<endl;
  }
}