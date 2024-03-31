#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
    int h, m; char c;
    cin>>h>>c>>m;

    string am = h<12?"AM":"PM";
    h = h%12?h%12:12;
    cout<<((h<10)?"0":"")<<h<<c<<((m<10)?"0":"")<<m<<" "<<am<<"\n";



}

int main()
{
    fastio();
    /* Test cases Handling*/
    long long test = 1; 
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}