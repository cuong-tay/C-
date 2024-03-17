#include<bits/stdc++.h>
using namespace std;
int b[10];
main(){
  int ok=1;
  for(int i=0;i<3;i++){
  	for(int j=0;j<3;j++){
  			int x;cin>>x;
  			if(b[x]!=1) {
  				b[x]=1;
			  }
			  else {
			  ok=0;
		}
  }}
  if(ok==0){
  	cout<<"INVALID";
  } else cout<<"VALID";
}

