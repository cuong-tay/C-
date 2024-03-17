#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i]; 
	}
/*	int l,r; 
	cin>>l>>r;
	reverse(v.begin(), v.end());
	  for (int i : v) {
        std::cout << i << " ";
    } cout<<endl;
    reverse(v.begin() + l, v.begin() + r + 1);
     for (int i : v) {
        std::cout << i << " ";
    }  */ // lat nguoc vector
  // min max tinh tong day so trong vector
  cout << *min_element(v.begin(), v.end())<<endl;
cout << *max_element(v.begin(), v.end())<<endl;
 cout << accumulate(v.begin(), v.end(), 0);
  
}

