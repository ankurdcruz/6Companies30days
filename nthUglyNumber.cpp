#include <bits/stdc++.h>
using namespace std;
int nthUglyNumber(int n) {
        
        if(n<=0) return 0;
        if(n==1) return 1;
        
        vector<int> a(n);
        a[0]=1;
        int i1=0, i2=0, i3=0;
        
        for(int i=1; i<n; i++) {
            
            int nextNum=min(a[i1]*2, min(a[i2]*3, a[i3]*5));
            a[i]=nextNum;
            if(nextNum==a[i1]*2) {
                i1++;
            }
            if(nextNum==a[i2]*3) {
                i2++;
            }
            if(nextNum==a[i3]*5) {
                i3++;
            }
        }
        return a[n-1];
        
    }
int main() {
    int n;
    cin>>n;
    cout<<nthUglyNumber(n);

    return 0;
}