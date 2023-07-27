/*Author: Tonmoy M
**URI: https://qinetique.github.io
*/

#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i=n-1;i>=0;i--){
        cin >> a[i];
        cout << a[i] << " ";
    }  
    return 0;
}
