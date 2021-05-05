#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    cin >> N; cin.ignore();
    vector<int> horses;
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        //cerr << "Pi: " << Pi << endl; //Slowed down program and caused timeout on test 3
        horses.push_back(Pi);
    }

    sort(horses.begin(), horses.end()); //Sort horses

    int difference = 0;
    for(int i = 0; i<N; i++){
        int a = horses[i];
        int b = horses[i+1];
        int v = abs(a - b);
        if(difference == 0) difference = v;
        if(v < difference){
            difference = v;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << difference << endl;
}
