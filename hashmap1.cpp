#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

class SerializableHashMap
{
private: 
    string words;

public:







};

int main()
{

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
