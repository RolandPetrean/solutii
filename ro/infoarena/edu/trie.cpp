// https://www.infoarena.ro/problema/trie
#include <bits/stdc++.h>
using namespace std;

ifstream fin("trie.in");
ofstream fout("trie.out");

struct Trie {
  Trie *children[26];
  int words;

  // ---    UTIL    ---

  void init() {
    words = 0;
    for (int i=0; i<26; ++i) children[i] = NULL;
  }

  bool isEmpty() {
    for (int i=0; i<26; ++i) {
      if (children[i]) return false;
    }
    return true;
  }

  // --- OPERATIONS ---

  void insert(string w) {
    Trie *node = this;
    for (int i=0; i<w.size(); ++i) {
      int c=w[i]-'a';
      if (!node->children[c]) {
        node->children[c] = new Trie;
        node->children[c]->init();
      }
      node = node->children[c];
    }
    ++node->words;
  }

  bool del(Trie* node, string w, int dep) {
    if (dep==w.size()) {
      --node->words;
      if (node->isEmpty() && !node->words) return true;
      return false;
    }
    if (del(node->children[w[dep]-'a'], w, dep+1)) node->children[w[dep]-'a'] = NULL;
    if (node->isEmpty() && !node->words) return true;
    return false;
  }
  void del(string w) {
    del(this, w, 0);
  }

  int search(string w) {
    Trie *node = this;
    for (int i=0; i<w.size(); ++i) {
      int c=w[i]-'a';
      if (!node->children[c]) return 0;
      node = node->children[c];
    }
    return node->words;
  }

  int prefix(string w) {
    Trie *node = this;
    for (int i=0; i<w.size(); ++i){
      int c=w[i]-'a';
      if (!node->children[c]) return i;
      node = node->children[c];
    }
    return w.size();
  }
};

int main() {
  int op;
  Trie* trie = new Trie;
  trie->init();
  while (fin>>op) {
    string w;
    fin>>w;

    if (op==0) trie->insert(w);
    else if (op==1) trie->del(w);
    else if (op==2) fout<<trie->search(w)<<endl;
    else fout<<trie->prefix(w)<<endl;
  }
}