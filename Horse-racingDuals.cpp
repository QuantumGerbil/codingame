#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N;
    cin >> N; cin.ignore();
    int *horses;
    horses = new int[N];    //must use int array. Vector too slow for final tests.
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        horses[i] = Pi;
    }

    sort(horses, horses + N); //Sort horses

    int difference = -1;
    for(int i = 0; i<N; i++){
        int a = horses[i];
        int b = horses[i+1];
        int v = horses[i] - horses[i+1];
        if(v < 0) v = -v;
        if(difference < 0) difference = v;
        if(v < difference){
            difference = v;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << difference << endl;
}
