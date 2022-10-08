// https://www.pbinfo.ro/probleme/355/n-minim
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long mini=LONG_LONG_MAX;
  for (int i=0; i<n; i++) {
    long long x;
    cin>>x;
    mini = min(mini, x);
  }
  cout<<mini;
}