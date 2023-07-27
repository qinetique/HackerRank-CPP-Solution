/*Author: Tonmoy M
**URI: https://qinetique.github.io
*/

#include <bits/stdc++.h>

using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin >> n>> q;
    vector<vector<int>> a;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        vector<int> inA;
        for(int j = 0;  j< k;j++){
            int m;
            cin >> m;
            inA.push_back(m);
        }
        a.push_back(inA);
    }
    for(int x = 0; x< q; x++){
        int i,j;
        cin >> i >>j;
        cout<< a[i][j] << endl;
    }
    return 0;
}