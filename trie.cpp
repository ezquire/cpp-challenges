#include <iostream>
#include <string>
#include <vector>

#define ALPHABET_SIZE 26

using namespace std;

struct TrieNode {
    TrieNode* children [ALPHABET_SIZE];
    bool eow;
};

class Trie {
public:
    Trie(): head(makeNode()) {}
    
    struct TrieNode* makeNode() {
        struct TrieNode* newNode = new TrieNode;
        newNode->eow = false;
        for(int i = 0; i < ALPHABET_SIZE; ++i)
            newNode->children[i] = NULL;
        return newNode;
    }
    
    bool insert(string word) {
        TrieNode* cur = head;
        for (int i = 0; i < word.length(); ++i) {
            int index = word[i] - 'a';
            if (!cur->children[index])
                cur->children[index] = makeNode();
            cur = cur->children[index];
        }
        if (cur->eow) return false;
        cur->eow = true;
        return true;
    }
    
    bool search(string word) {
        TrieNode* cur = head;
        for (int i = 0; i < word.length(); ++i) {
            int index = word[i] - 'a';
            if (!cur->children[index]) return false;
            cur = cur->children[index];
        }
        return cur && cur->eow;
    }
    
    bool startWith(string prefix) { 
        TrieNode* cur = head;
        for (int i = 0; i < prefix.length(); ++i) {
            int index = prefix[i] - 'a';
            if (!cur->children[index]) return false;
            cur = cur->children[index];
        }
        return true;
    }
    
private:
    TrieNode* head;
};

int main() {
    string keys[] = {"the", "a", "there", 
                     "answer", "any", "by", 
                     "bye", "their" }; 
    int n = sizeof(keys)/sizeof(keys[0]); 
  
    Trie* root = new Trie();
    
    for (int i = 0; i < n; i++) 
        root->insert(keys[i]); 
  
    root->search("the") ? cout << "Yes\n" : cout << "No\n"; 
    root->search("brad") ? cout << "Yes\n" : cout << "No\n"; 
    root->startWith("brad") ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
