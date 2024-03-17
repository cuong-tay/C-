#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;    
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--){
        string s;
        cin >> s;
        if (s.size()==1 || s[0]=='0') cout << "NO\n";
        else {
            ll n=0;
            int kt=0;
            for (int i=0; i<s.size()/2; ++i){
                n=n*10+(s[i]-'0');
                string t = to_string(n);
                ll d=n+1;
                while (t.size()<s.size()){
                    t+=to_string(d);
                    d++;
                }
                if (t.size()!=s.size()) continue;
                else if (t==s){
                    kt=1;
                    cout << "YES " << n << endl;
                    break;
                }
            }
            if (!kt) cout << "NO\n";
        }
    }
    return 0; 
	}
