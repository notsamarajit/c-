// A A A 
// B B B 
// C C C
// print this pattern.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;
    int i = 1;
    char ch = 'A';
    while (i <= n)
    {

        int j = 1;

        while (j <= n)
        {
            cout << ch << " ";
            
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
        ch = ch + 1;
    }
    
}
 