#include<bits/stdc++.h>
using namespace std;
//cin,getline
// length()= size(): do dai xau
//stoi = chuyen mot chuoi so thanh int;
//stoll = chuyen xau thanh long long ;
//to_string = chuyen so thanh xau ki tu;
//stringstream : tach tu trong xâu theo dau cach  ., ...;
main(){
	int n;
	cin>>n;// van con phim enter
	cin.ignore();
	string s;
	getline(cin,s);
	cout<<s<<endl;
	string a="python";
	string b="siuuuu";
	a+=b;
	cout<<a<<endl;
	//so sanh xem hai xau xau nao dai hon theo tu dien
	//dung ham a.compare(b) a>b tra ve 1 a<b tra ve -1 va a=b tra ve 0
	// ham a.substr(cat tu chi so nao do, so ki tu muon cat tu chi so da chon)
	string c=a.substr(2,a.size());
	cout<<c<<endl;
	//vd;
	string sau = "sdkf ddd ce8 cttt";
	stringstream ss(sau);
	string tam;
	int dem=0;
	while(ss>>tam){
		cout<<tam<<endl;
		dem++;
	}
	
	
}

