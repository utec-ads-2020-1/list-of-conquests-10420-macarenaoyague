#include <iostream>
#include <map>
#include <sstream>

using namespace std;

void UVa10420();

int main() {
    UVa10420();
    return 0;
}

void UVa10420(){

    int nLines;
    cin>>nLines;
    map <string, int> countries;
    string line, country;

    for (int i = 0; i<nLines; i++)
    {
        getline(cin, line);
        stringstream l (line);
        getline(l, country, ' ');
        while (getline(l, line, ' '))
            countries[country]++;
    }

    for (auto element: countries)
        cout <<element.first<<" "<<element.second<<endl;
}



