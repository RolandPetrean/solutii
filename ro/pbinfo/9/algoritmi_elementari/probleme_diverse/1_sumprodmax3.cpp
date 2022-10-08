// https://www.pbinfo.ro/probleme/3072/sumprodmax3
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  cout<<n/3<<" "<<(n-n/3)/2<<" "<<n-((n/3)+((n-n/3)/2));
}