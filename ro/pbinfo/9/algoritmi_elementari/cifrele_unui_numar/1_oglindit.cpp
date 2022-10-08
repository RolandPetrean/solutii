// https://www.pbinfo.ro/probleme/69/oglindit
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

  string s = to_string(n);
  reverse(s.begin(), s.end());
  s.erase(0, s.find_first_not_of('0'));
  cout<<s;
}