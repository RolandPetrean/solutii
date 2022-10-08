// https://www.pbinfo.ro/probleme/3979/suma37
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int s=0;
  while (n) {
    if (n%10>=3 && n%10<=7) s += n%10;
    n /= 10;
  }
  cout<<s;
}