// https://www.pbinfo.ro/probleme/354/n-maxim
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long maxi=LONG_LONG_MIN;
  for (int i=0; i<n; i++) {
    long long x;
    cin>>x;
    maxi = max(maxi, x);
  }
  cout<<maxi;
}