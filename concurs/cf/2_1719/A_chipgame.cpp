// https://codeforces.com/contest/1719/problem/0
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  for (int i=0; i<t; ++i) {
    int n, m;
    cin>>n>>m;
    if (n%2 == m%2) cout<<"Tonya"<<endl;
    else cout<<"Burenka"<<endl;
  }
}