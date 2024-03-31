#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
bool valid(string s, int i){
    int diff = 0;
    for(int j = i;j<s.length();j++){
        if(s[j] != s[j%i])
            diff++;
        if(diff>1)
            break;
    }
    if(diff<2){
        return true;
    }
    return false;
}
void solve(){
    int n;
    string s;
    cin>>n>>s;

    int ans = n;
    string st = s;
    reverse(st.begin(), st.end());
    for(int i = 1;i<=n;i++){
        if(n%i!=0)
            continue;
        
        bool check = valid(s, i) | valid(st, i);
        if(check){
            ans = i;
            break;
        }


    }


    cout<<ans<<"\n";
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