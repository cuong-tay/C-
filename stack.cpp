#include<bits/stdc++.h>
using namespace std;
//Lifo last in first out
//push
//pop
//top
//size
//empty ktra xem stack rong khong
//O(1)
main(){
  /*	stack<int> st;       
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.top()<<endl;
	st.pop();
	cout<<st.top()<<endl;
	cout<<st.size()<<endl;
	st.pop();
	
	if(st.empty()){
		cout<<"stack rong";
	} */
 /*	int n; //bai toan doi tu thap phan sang nhi phan
	cin>>n;
	stack<int> st;
	while(n!=0){
		st.push(n%2);
		n/=2;
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();	
	} */
	string s; cin>>s;
	stack<char> st;
	for(char x:s){
		if(x=='(') {
			st.push(x);
		} else {
			if(st.empty()){
				cout<<"ko hop le\n";
				return 0;
			} else st.pop();
		}
	}
	if(st.empty()){
		cout<<"cap ngoac hop le\n";
	} else cout<<"ko hop le\n";
return 0;	
}

