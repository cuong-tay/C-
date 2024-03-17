#include<bits/stdc++.h>
using namespace std;

main(){
	
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) 
	{
	cin>>v[i];}
    //tang dan
sort(v.begin(), v.begin()+n/2);
  for(vector<int>::iterator it=v.begin();it!=v.end(); it++){
   	   cout<<*it<<" ";
   }
        cout<<endl;
//giam dan
sort(v.begin(), v.begin()+n/2, greater<int>());
  for(vector<int>::iterator it=v.begin();it!=v.end(); it++){
   	   cout<<*it<<" ";
   }
return 0;
}

