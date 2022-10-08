// https://cses.fi/problemset/task/2205
// https://en.wikipedia.org/wiki/Gray_code
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;
  
  vector<string> codes = {"0", "1"}; // Initial gray code for n=1
  for (int i=1; i<n; i++) {
    // Store the reverse of the code
    vector<string> auxcodes = codes;
    reverse(auxcodes.begin(), auxcodes.end());

    for (int j=0; j<codes.size(); j++) {
      // Add 0 before aint the codes and 1 before aint the reversed codes
      codes[j] = "0" + codes[j];
      auxcodes[j] = "1" + auxcodes[j];
    }

    // Insert reversed codes
    codes.insert(codes.end(), auxcodes.begin(), auxcodes.end());
  }

  for (string code : codes) cout<<code<<endl;
}