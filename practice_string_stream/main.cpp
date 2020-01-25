#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int N,M;
    string puffer;
    string S;
    vector<string> alma;
    stringstream sstr;
    for(int i=0; i<3; i++)
    {
        sstr.clear();
        sstr.str("");
        getline(cin, puffer);
        sstr<<puffer;
        sstr>>N;
        sstr>>M;
        sstr>>S;
        alma.push_back(S);
        sstr>>S;
        alma.push_back(S);
        for(vector<string> :: iterator it=alma.begin(); it!=alma.end(); ++it)
        {
            cout << ' ' << *it;
        }
    }


    return 0;
}
