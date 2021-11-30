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
    explicit SerializableHashMap(const string & fileName):tables{nullptr},nodes{nullptr}
    {  
        words = "";
        ifstream inFile;
        inFile.open(fileName);
        
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
                words += line + ",";
                //hashMap.add(line);
            }

        }
        words = words[0,words.length()-2];
        inFile.close();     
        /*
        bool contains( const Node & x) const;
        void makeEmpty();
        bool insert( Node && x);
        bool remove( const Node & x);
        */
    }
    /*
    bool insert( const string & x)
    {
        

    }
    
    */







};

int main()
{
    // Initialize the Hashmap. For each word, add to the tables by hashing it and adding to the tables and nodes. 
    // If not empty,
    // use chaining and change the node.next. 
   
    //    SerializableHashMap m("dict.txt");

    return 0;
}
