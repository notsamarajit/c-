// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 3;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             char ch = 'A';
//             cout << ch << " ";
//             ch = ch + 1;
//             j = j + 1;
            
//         }
//         cout << endl;
//         i = i + 1;
//     }
    
// }

#include <iostream>

using namespace std;

int main() {
    int n = 3;
    char ch = 'A';

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
        ch = 'A' + (i - 1) * n; // Reset ch for the next row
    }

    return 0;
}