#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char data){
        cout<<"constructor called"<<endl;
        this->data=data;
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        isTerminal = false;
    } 
    ~TrieNode(){
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    TrieNode ch1('a');

return 0;
}