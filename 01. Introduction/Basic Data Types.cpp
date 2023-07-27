/*Author: Tonmoy M
**URI: https://qinetique.github.io
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char ch;
    float f;
    double d;
    
    cin >> i >> l >> ch >> f >> d;
    cout << i << "\n" << l <<"\n"<< ch << "\n";
    printf("%0.3lf\n",f);
    printf("%0.9lf\n", d);
    return 0;
}