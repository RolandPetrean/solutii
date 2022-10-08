// https://www.pbinfo.ro/probleme/288/verifpare
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    if (x&1) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}