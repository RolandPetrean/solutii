// https://www.pbinfo.ro/probleme/11/vocale
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;
  replace(s.begin(), s.end(), 'a', 'A');
  replace(s.begin(), s.end(), 'e', 'E');
  replace(s.begin(), s.end(), 'i', 'I');
  replace(s.begin(), s.end(), 'o', 'O');
  replace(s.begin(), s.end(), 'u', 'U');
  cout<<s;
}