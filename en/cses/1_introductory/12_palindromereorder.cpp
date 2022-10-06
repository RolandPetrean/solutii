// https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string initial;
  cin>>initial;

  array<ll, 26> chars;
  chars.fill(0);
  for (char ch : initial) {
    chars[ch-65]++; // Encode the characters in a frequency array
  }

  string res;
  char mid = '\0';
  for (ll i=0; i<26; i++) {
    char ch = i + 65;
    ll count = chars[i];
    if (count == 0) continue;

    if ((count&1)) {
      if (mid) { // There may only be one middle character
        cout<<"NO SOLUTION";
        return 0;
      }
      mid = ch;
      count--;
    }

    // Insert the characters in the middle of the result string
    res.insert(res.begin()+(res.length()/2), count, ch);
  }
  if (mid) res.insert(res.begin()+(res.length()/2), mid); // Insert middle character

  cout<<res;
}
