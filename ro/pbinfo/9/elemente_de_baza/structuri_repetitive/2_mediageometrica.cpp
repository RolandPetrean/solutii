// https://www.pbinfo.ro/probleme/2299/media-geometrica
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  double p=1;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    p *= x;
  }
  cout<<pow(p, 1.0/(double)n);
}