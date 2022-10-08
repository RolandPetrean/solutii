// https://www.pbinfo.ro/probleme/509/ordonare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  
  vector<long long> x(n);
  for (int i=0; i<n; i++) cin>>x[i];
  sort(x.begin(), x.end());
  for (int i=0; i<n; i++) cout<<x[i]<<" ";
}