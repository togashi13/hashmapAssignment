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
    








}


int main()
{
    // Initialize the Hashmap. For each word, add to the tables by hashing it and adding to the tables and nodes. 
    // If not empty,
    // use chaining and change the node.next. 
   
    ifstream inFile;
    inFile.open("~/dict.txt");
    
    if (!inFile)
    {
	cerr << "Unable to open file dict.txt";
	exit(1);
    }
    while (inFile >> x)
    {
	sum = sum + x;
    }
    inFile.close();     
    SerializableHashMap m("dict.txt");

}
