// A 
// B B 
// C C C 
// D D D D
// print this pattern.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 4;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i +1;
    }
    
}