// https://www.pbinfo.ro/probleme/3233/afisarenumereimpare1
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if (n%2==0) --n;
  for (int i=n; i>0; i-=2) cout<<i<<" ";
}