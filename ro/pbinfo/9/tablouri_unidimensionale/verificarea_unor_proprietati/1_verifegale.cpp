// https://www.pbinfo.ro/probleme/501/verifegale
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long e;
  cin>>e;
  for (int i=1; i<n; ++i) {
    long long x;
    cin>>x;
    if (x != e) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}