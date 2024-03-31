#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
void solve(){
    int n;
    cin>>n;


    for(int i = 0;i<2*n;i++){
        for(int j = 0;j<2*n;j++){
            
            int sum = i/2 + j/2;
            
            if (sum%2==0)
            cout<<'#';
            else
            cout<<'.';
        }
        cout<<"\n";
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