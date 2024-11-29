// 1
// 2 3
// 3 4 5
// 4 5 6 7
// print this pattern method 2 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int value = i;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << value << " ";
            value = value + 1;
            j = j + 1;

        }
        cout << endl;
        i = i + 1;
    }
    
}