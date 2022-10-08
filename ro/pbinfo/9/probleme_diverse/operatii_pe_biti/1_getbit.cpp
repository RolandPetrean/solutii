// https://www.pbinfo.ro/probleme/2577/getbit
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long t;
  cin>>t;

  for (int i=0; i<t; ++i) {
    long long n, b;
    cin>>n>>b;
    cout<<((n>>b)&1);
  }
}