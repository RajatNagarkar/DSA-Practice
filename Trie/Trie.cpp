#include<bits/stdc++.h>

using namespace std;

class Node() {
    public:
    bool end = false;
    Node* next[26];

    bool containsKey(char ch) {
        return (next[ch - 'a'] != NULL);
    }

    void putChar(char ch, Node* node) {
        next[ch - 'a'] = node;
    }

};

class Trie {
    public:
        
        Node* root;

        Trie(){
            trie = new Node();
        }

        void insert(string word) {
            Node* node = root;

            for(int i = 0;i<word.size();i++) {
                if(!node->containsKey(word[i])){
                    node->put(word[i], new Node);
                }
            }
        }
};

int main(){

    

    return 0;
}