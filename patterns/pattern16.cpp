// 1 2 3 
// 2 3 4 
// 3 4 5
// print this pattern

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
            cout << i + j - 1 << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    
}