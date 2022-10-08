// https://www.pbinfo.ro/probleme/77/ultimacifrapara
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if (n == 0) {
    cout<<0;
    return 0;
  }
  
  while (n) {
    if (n%10%2==0) {
      cout<<n%10;
      return 0;
    }
    n /= 10;
  }
  cout<<-1;
}