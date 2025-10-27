#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string line = "ID=101,Score=89;ID=102,Score=93";
    stringstream ss(line);

    string token;
    // split by ;
    while (getline(ss, token, ';'))
    {
        stringstream record(token);
        string str;
        int id, score;
        // split by,
        getline(record, str, ',');
        // id
        id = stoi(str.substr(str.find("=") + 1));
        // split by,
        getline(record, str, ',');
        // score
        score = stoi(str.substr(str.find("=") + 1));
        cout << "Id: " << id << " , "
             << " Score: " << score << endl;
    }
    return 0;
}