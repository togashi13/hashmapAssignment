#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

class SerializableHashMap
{
private: 
    string words;
    struct Node
    {
        uint32_t key;
        int val;
       	uint32_t next;
    };
    Node** tables;
    Node* nodes;

public:







};

int main()
{
    // Initialize the Hashmap. For each word, add to the tables by hashing it and adding to the tables and nodes. 
    // If not empty,
    // use chaining and change the node.next. 
   
    //    SerializableHashMap m("dict.txt");

    string word;
    HashMapLinearChaining dict1(50000);
    while (!words.feof())
    {
        words >> word;
        dict1.add(word);
    }
    dict1.hist();
    ifstream spell("words.dat");
    string s;
    while (!spell.eof())
    {
        spell >> s;
        if (dict1.contains(s)) cout << s << " found !\n";
        else cout << s << " not found !\n";
    }
    
    return 0;
}
