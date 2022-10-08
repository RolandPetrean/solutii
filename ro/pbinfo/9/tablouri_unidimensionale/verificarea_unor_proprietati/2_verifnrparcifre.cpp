// https://www.pbinfo.ro/probleme/291/verifnrparcifre
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    long long c=0;
    if (x==0) ++c;
    while (x>0) {
      ++c;
      x /= 10;
    }
    if (c&1) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}