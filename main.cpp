/**
 * Copyright (c) 28.06.2021, 12:48.
 * Created by Tolibjon
 **/

#include <iostream>
#include <cassert>
#include <regex>

using namespace std;
string vector_to_string(vector<string> v){
    string  res = "";
    for(int i = 0; i < v.size(); i++)
        res += "." + v[i];
    res.erase(0,1);
    return  res;
}
int main(int argc, char** argv)
{
    int n, q, k;
    string line;
    regex reg(R"(([a-zA-Z0-9-]*) = \"([a-zA-Z0-9]*)\")");
    cin>>n>>q;
    map<string, string> maps;
    vector<string> tags;
    while (n-->0) {
        getline(cin,line);
        if(line[0] == '<' && (k = line.find(" ")) != string::npos){
            tags.push_back(line.substr(1,k-1));
            string key = vector_to_string(tags);
            const vector<smatch> matches{
                    sregex_iterator{line.cbegin(), line.cend(), reg},
                    sregex_iterator{}
            };
            for(auto &m: matches)
                maps[key + "~" + m.str(1)] =
        }else

    }

}
