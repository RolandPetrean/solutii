// https://www.pbinfo.ro/probleme/109/paritate
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  cout<<n<<" ";
  if (n&1) cout<<"este impar";
  else cout<<"este par";
}