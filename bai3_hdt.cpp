#include<bits/stdc++.h>
using namespace std;
class Time{
	private :
		int h, p, s;
	public:
	    Time();
	    void hientime();
	    void update(int ,int ,int );
	    bool kt(int , int, int);		
};
Time::Time(){
   h = 0;
   p=0; s=0;
}
void Time::hientime(){
	 if (h < 10) {
        cout <<"0"<<h;
    } else {
        cout << h;
    }

  cout << ":";

    if (p < 10) {
    cout << "0" << p;
    } else {
      cout << p;
    }

   cout << ":";

    if (s < 10) {
        cout << "0" << s;
    } else {
       cout << s;
    }
}
void Time::update(int a, int b, int c){
	if(h+a>=10){
		cout<<h+a;
	} else cout<<"0"<<h+a;
	cout<<":";
	  if (p+b < 10) {
    cout << "0" << p+b;
    } else {
      cout << p+b;
    }

   cout << ":";

    if (s+c < 10) {
        cout << "0" << s+c;
    } else {
       cout <<s+c;
    }
}
bool Time::kt(int gio, int phut, int giay){
	if(gio>0 and phut>0 and giay>0 and gio<24 and phut<=59 and giay<=59){
	 return true;
} else return 0;
}
main(){
	Time x;
	x.hientime();
	cout<<endl;
	int a,b,c;
	cout<<"muon cong them may gio : "; cin>>a;
	cout<<"muon cong them may phut: "; cin>>b;
	cout<<"muon cong them may giay: "; cin>>c;
	x.update(a,b,c);
	cout<<endl;
	bool ok= x.kt(a,b,c);
	if(ok){
		cout<<"thoi gian hop le";
	} else {
	    cout<<"thoi gian bi sai. Hay nhap lai"<<endl; 
	    bool ok1;
        do {
            cout << "Nhap gio: ";
            cin >> a;
            cout << "Nhap phut: ";
            cin >> b;
            cout << "Nhap giay: ";
            cin >> c;
            cout << endl;
            ok1 = x.kt(a, b, c);
            if (ok1) {
                cout << "Thoi gian hop le";
            } else {
                cout << "Thoi gian bi sai. Hay nhap lai"<<endl;
            }
        } while (ok1==false);
}
}


