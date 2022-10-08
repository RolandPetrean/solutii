// https://www.pbinfo.ro/probleme/500/verificareordonat
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long l;
  cin>>l;
  for (int i=1; i<n; ++i) {
    long long x;
    cin>>x;
    if (x<l) {
      cout<<"NU";
      return 0;
    }
    l = x;
  }
  cout<<"DA";
}