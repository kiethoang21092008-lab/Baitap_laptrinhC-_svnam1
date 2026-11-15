#include <bits/stdc++.h>
using namespace std;
void tinh(int n, int k, int &tl, int &tc, int &sl, int &sc) {
    tl=tc=sl=sc=0;
    for (int i=n;i<=n+k;i++) {
        if (i % 2 != 0) {
            tl += i;
            sl++;
        } else {
            tc += i;
            sc++;
        }
    }
}
int main() {
    int n, k,tongle,tongchan,sole,sochan;
    cin>>n>>k;
    tinh(n,k,tongle,tongchan,sole,sochan);
        cout<<tongle<<" "<<tongchan<<" "<<sole<<" "<<sochan;
    }
