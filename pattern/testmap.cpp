#include<bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int , int> marks;

    marks[9] = 100;
    marks[5] = 90;
    marks[4] = 80;
    marks[8] = 66;

    for (auto it : marks)
    {
        cout << "Name: " << it.first << ", Marks: " << it.second << endl;
    }
    
    return 0;
}