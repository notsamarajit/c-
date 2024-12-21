// A B C 
// A B C 
// A B C 
// print this pattern.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int i = 1;
    while (i <= 3)
    {
        int j = 1;       
        while (j <= n)
        {
            char m = 'A' + j - 1;
            cout << m  << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        
    }
    
}