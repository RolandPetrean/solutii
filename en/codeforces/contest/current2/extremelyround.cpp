// https://codeforces.com/contest/1766/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int _pow10(int x) {
  int n=1;
  while (x--) n *= 10;
  return n;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    int x=n, cnt=0;
    do {
      ++cnt;
      x /= 10;
    } while (x);
    
    cout<<(cnt-1)*9+n/_pow10(cnt-1)<<endl;
  }
}