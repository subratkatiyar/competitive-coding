#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
    int a, b, c;
    cin>>a>>b>>c;

    if(b>a && b>c){
        cout<<"PEAK\n";
    }
    else if(b>a && c>b){
        cout<<"STAIR\n";
    }
    else{
        cout<<"NONE\n";
    }
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