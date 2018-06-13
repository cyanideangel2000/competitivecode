#include <iostream>
#include <string>
#include <tr1/unordered_map>
#include <iterator>
using namespace std;

typedef std::tr1::unordered_multimap<std::string,std::string> stringmap;
typedef std::tr1::unordered_map<std::string,std::string> stringmap2;

int main ()
{
    stringmap yes;
    stringmap2 yes1;
    yes1["varun"] = "plobo";
    cout << yes1["varun"] << endl;
    yes.insert(make_pair("varun", "arun"));
    yes.insert(make_pair("varun", "kiran"));
    yes.insert(make_pair("varun", "plobo"));

    stringmap::iterator it = yes.find("varun");
    cout << yes.count("varun") << endl << (*it).first << " " << (*it).second << endl;

    pair<stringmap::iterator, stringmap::iterator> pit = yes.equal_range("varun");
    for (stringmap::iterator itq = pit.first; itq != pit.second; ++itq) cout << (*itq).second << endl;

    return 0;
}
