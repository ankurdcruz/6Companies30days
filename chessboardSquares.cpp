#include <bits/stdc++.h>
using namespace std;
int noOfSquares(int n) {
    
    return (n*(n+1)*((2*n)+1))/6;   //using 1^2 + 2^2 + 3^2 + ... + n^2
}
int main() {
    int n;
    cin>>n;

    cout<<noOfSquares(n);

    return 0;
}