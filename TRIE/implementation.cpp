#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root,string word){

        //base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        //assume word will be capital letter
        int index = word[0] - 'A';
        TrieNode* child;
        if(root->children[index] != NULL){
            //present
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        
        //recursion
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root,string word){
        //basa case
        if(word.length()==0){
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;
        
        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        //absent
        else{
            return false;
        }

        //recursion
        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root,word);
    }
    
    void removeUtil(TrieNode* root,string word){
        //base case
        if(root->isTerminal == true){
            root->isTerminal = false;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;
        child = root->children[index];
        removeUtil(child,word.substr(1));
    }

    void removeWord(string word){
        if(searchWord(word)){
            removeUtil(root,word);
        }
        else{
            return ;
        }
    }
};

int main(){
    Trie* t = new Trie();
    t->insertWord("ABCD");

    cout<<"Present or Not: "<<t->searchWord("ABCD")<<endl;

    t->removeWord("ABCD");
    cout<<"After deletiona word--> "<<endl;

    cout<<"Present or Not: "<<t->searchWord("ABCD")<<endl;

    return 0;
}