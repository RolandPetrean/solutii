// https://www.pbinfo.ro/probleme/486/minmax0
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long mini=LONG_LONG_MAX, maxi=LONG_LONG_MIN;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    mini = min(mini, x);
    maxi = max(maxi, x);
  }
  cout<<mini<<" "<<maxi;
}