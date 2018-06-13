#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool strPermuteFrom(unordered_set<string> &dict, string &str, int pos)
{
    if(pos >= str.size())
        return true;

    if(dict.size() == 0)
        return false;

    for(int j = pos; j < str.size(); j++){
        string w = str.substr(pos, j - pos + 1);
        if(dict.find(w) != dict.end()){
            dict.erase(w);
            int status = strPermuteFrom(dict, str, j+1);
            dict.insert(w);
            if(status){
                if(pos > 0) str.insert(pos, " ");
                return status;
            }
        }
    }

    return false;
}


bool strPermute(unordered_set<string> &dict, string &str)
{
    return strPermuteFrom(dict, str, 0);
}

int main (void)
{
    unordered_set<string> temp( {"bad", "actor", "good", "acting"} );
    unordered_set<string> &dict = temp;

    cout << strPermute(dict, "badgoodactoracting") << endl;
    cout << strPermute(dict, "badgoodactacting") << endl;
}
