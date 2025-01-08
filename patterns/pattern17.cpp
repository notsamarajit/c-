// A B C 
// B C D 
// C D E
// print this formula.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i +j -2;
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}