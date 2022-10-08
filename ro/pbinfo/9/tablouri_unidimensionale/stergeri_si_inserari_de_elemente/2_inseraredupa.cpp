// https://www.pbinfo.ro/probleme/159/inseraredupa
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  
  vector<long long> nr;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    nr.push_back(x);
    if (x%2==0) nr.push_back(2*x);
  }
  for (auto x : nr) cout<<x<<" ";
}