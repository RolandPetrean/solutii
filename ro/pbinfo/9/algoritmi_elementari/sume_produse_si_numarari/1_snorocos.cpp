// https://www.pbinfo.ro/probleme/1892/snorocos
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  if (n%2==0) {
    cout<<"NU ESTE NOROCOS";
    return 0;
  }
  for (int i=0; i<n; ++i) {
    cout<<(n+1)/2+i<<" ";
  }
}