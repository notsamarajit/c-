/*

Search

 Given rectangle of length 1 and b. Print area of rectnagle.



 Constraints:
1 <= l <= 10^9

1 <= b <= 10^9

 Input format:

 2 space sperated integer 1 an b

 Output Format

 Single number which is area of rectangle

 Sample input:3 4

 Sample output: 12

 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int l,b;
    cout << "enter length :";
    cin >> l;
    cout << "enter bridth :";
    cin >> b;
    if ( l == b)
    {
        cout << "this is a square.";
    }
    else if (l < b)
    {
        cout << "breadth ofrectangle cant be bigger than length.";
    }
    
    else
    {
        int area = l*b;
        cout << area;
    }
}
