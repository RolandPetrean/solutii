// https://www.pbinfo.ro/probleme/972/pozitii
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  getline(cin, s);
  regex cvc("[^aeiou\\s][aeiou](?=[^aeiou\\s])");
  cout<<distance(sregex_iterator(s.begin(), s.end(), cvc), sregex_iterator());
}