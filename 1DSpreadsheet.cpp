#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <tuple>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    cin >> N; cin.ignore();

    vector<vector<string> > cells;
    
    for (int i = 0; i < N; i++) {
        string operation;
        string arg1;
        string arg2;
        cin >> operation >> arg1 >> arg2; cin.ignore();
        cerr << "O: " << operation << " a1: " << arg1 << " a2: " << arg2 << endl;
        vector v = {operation,arg1,arg2};
        cells.push_back(v);
    }

    vector<int> results;
    for(int i = 0;i < cells.size(); i++){
        string arg1 = cells[i][1];
        if(arg1[0] == '$'){
            int cell = stoi(arg1.substr(1));
            cells[i][1] = cells[cell][1];
        }
        string arg2 = cells[i][2];
        cerr << arg2 << endl;
        if(arg2[0] == '$'){
            int cell = stoi(arg2.substr(1));
            cells[i][2] = cells[cell][2];
        }

        if(cells[i][0] == "VALUE"){
            int value = stoi(cells[i][1]);
            results.push_back(value);
        }else if(cells[i][0] == "ADD"){
            int value = stoi(cells[i][1]) + stoi(cells[i][2]);
            results.push_back(value);
        }else if(cells[i][0] == "SUB"){
            int value = stoi(cells[i][1]) - stoi(cells[i][2]);
            results.push_back(value);
        }else if(cells[i][0] == "MULT"){
            int value = stoi(cells[i][1]) * stoi(cells[i][2]);
            results.push_back(value);
        }
    }

    for (int i = 0; i < N; i++) {

        // Write an answer using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << results[i] << endl;
    }
}
