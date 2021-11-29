#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

class SerializableHashMap
{
private: 
    char* words;
    struct Node
    {
        uint32_t key;
        int val;
       	uint32_t next;
    };
    Node** tables;
    Node* nodes;

public:
    explicit SerializableHashMap(int size = 101);
    /*
    bool contains( const Node & x) const;
    void makeEmpty();
    bool insert( const Node & x);
    bool insert( Node && x);
    bool remove( const Node & x);
    */
    









};

int main()
{
    // Initialize the Hashmap. For each word, add to the tables by hashing it and adding to the tables and nodes. 
    // If not empty,
    // use chaining and change the node.next. 
   
    ifstream inFile;
    inFile.open("dict.txt");
    
    if (inFile.is_open())
    {   
        cout << "Successfully opened dict.txt" << endl;
    }else
    {
	    cout << "Unable to open file dict.txt" << endl;
	    exit(-1);
    }
    string line;
    while (!inFile.eof())
    {
        getline(inFile,line);
        if (inFile.good())
        {
            cout << line << endl;
            //hashMap.add(line);
        }

    }
    inFile.close();     
    //    SerializableHashMap m("dict.txt");

    return 0;
}
