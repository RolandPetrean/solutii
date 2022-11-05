// https://www.infoarena.ro/problema/fbsearch
// 0p :( chiar nu stiu ce e gresit.
#include <bits/stdc++.h>
using namespace std;

ifstream fin("fbsearch.in");
ofstream fout("fbsearch.out");

int getChar(char c) {
  if (c=='_') return 26;
  else return c-'a';
}

struct Trie {
  Trie* children[27];
  int rel=0, idx=-1;

  void insert(string name, int idx) {
    Trie* node = this;
    for (int i=0; i<name.size(); ++i) {
      int c=getChar(name[i]);
      if (!node->children[c]) node->children[c] = new Trie;
      node = node->children[c];
    }
    node->idx = idx;
    node->rel = 1;
  }

  Trie* getPrefixNode(string prefix) {
    Trie* node = this;
    for (int i=0; i<prefix.size(); ++i) {
      int c=getChar(prefix[i]);
      if (!node->children[c]) return node;
      node = node->children[c];
    }
    return node;
  }
  Trie* dfs(Trie* node) {
    int maxRel=node->rel;
    Trie* maxTrie = node;
    for (int i=0; i<27; ++i) {
      if (!node->children[i]) continue;
      Trie* found = dfs(node->children[i]);
      if (found->rel > maxRel) {
        maxRel = found->rel;
        maxTrie = found;
      }
    }
    return maxTrie;
  }
  int search(string x) {
    Trie* node = getPrefixNode(x);
    if (node==this) return -1;

    Trie* found=dfs(node);
    return found->idx;
  }

  void update(string name, int cnt) {
    Trie* node = this;
    for (int i=0; i<name.size(); ++i) {
      int c=getChar(name[i]);
      if (!node->children[c]) return;
      node = node->children[c];
    }
    node->rel += cnt;
  }
};

int main() {
  int t;
  fin>>t;

  while (t--) {
    Trie* trie = new Trie;

    int n, m;
    fin>>n>>m;

    vector<string> names(n);
    for (int i=0; i<n; ++i) {
      string s;
      fin>>s;
      names[i] = s;
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      trie->insert(s, i);
    }

    for (int i=0; i<m; ++i) {
      char op;
      fin>>op;
      if (op=='Q') {
        string s;
        fin>>s;
        string orig=s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int idx=trie->search(s);
        if (idx==-1) fout<<"Search Bing for "<<orig<<endl;
        else fout<<names[idx]<<endl;
      } else {
        string s;
        int cnt;
        fin>>s>>cnt;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        trie->update(s, cnt);
      }
    }
  }
}