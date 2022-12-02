// https://codeforces.com/contest/514/problem/C
// MLE TODO hashing
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct Node {
  Node* children[3]{NULL};
  bool end=false;
};
Node* trie = new Node;

void add(string x) {
  Node* curr(trie);
  for (int i=0; i<x.size(); ++i) {
    if (!curr->children[x[i]-'a']) curr->children[x[i]-'a'] = new Node;
    curr = curr->children[x[i]-'a'];
  }
  curr->end = true;
}

bool dfs(string x, Node* curr, int i, int skipped) {
  if (skipped>1) return false;
  if (i==x.size()) return (curr->end && skipped);

  bool res=false;
  for (int j=0; j<3 && !res; ++j) {
    if (curr->children[j]) res = dfs(x, curr->children[j], i+1, skipped+(j!=x[i]-'a'));
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  for (int i=0; i<n; ++i) {
    string x;
    cin>>x;
    add(x);
  }

  for (int i=0; i<m; ++i) {
    string x;
    cin>>x;
    cout<<(dfs(x, trie, 0, 0)?"YES":"NO")<<endl;
  }
}