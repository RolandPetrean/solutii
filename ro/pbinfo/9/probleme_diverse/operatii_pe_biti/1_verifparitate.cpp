// https://www.pbinfo.ro/probleme/2708/verifparitate
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    cout<<(x&1)<<" ";
  }
}