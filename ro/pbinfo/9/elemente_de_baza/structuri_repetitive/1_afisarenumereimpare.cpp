// https://www.pbinfo.ro/probleme/331/afisarenumereimpare
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  for (int i=2*n-1; i>0; i-=2) cout<<i<<" ";
}