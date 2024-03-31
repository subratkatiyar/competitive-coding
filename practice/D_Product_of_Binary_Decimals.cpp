#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

/*    Code starts from below    */
vector<int> binary;
bool multipleCheck(int n){
    if(n==1)
        return true;
    
    bool ans = false;

    for(auto i:binary){
        if(n%i==0){
            ans |= multipleCheck(n/i);
        }
    }
    return ans;

}
void solve(){
    int n;
    cin>>n;

    cout<<(multipleCheck(n)?"YES\n":"NO\n");
}

int main()
{
    fastio();
    // Special Case
    for(int i = 2;i<=1e5;i++){
        int temp = i;
        bool bad = false;
        while(temp>0){
            int rem = temp%10;
            if(rem>1){
                bad = true;
                break;
            }
            temp = temp/10;
        }
        if(!bad){
            binary.push_back(i);
        }
    }
    cout<<"\n";
    /* Test cases Handling*/
    long long test = 1; 
    cin>>test;
    while(test--){
        solve();
    }
    return 0;
}