#include<bits/stdc++.h>
using namespace std;
class sophuc{
	private:
	   double *a,*b;
	public:
		sophuc(){
			a=new double; b=new double;
		}
	    void add(){
	    	cin>>*a;
	    	cin>>*b;
		}
		double geta(){
			return *a;
		}
		double getb(){
			return *b;
		}
	 void cong(sophuc &x){
			cout<<geta()+*x.a<<' '<<getb()+*x.b<<endl;
		}
		void in(){
			cout<<*a<<' '<<*b<<endl;
		}
		friend void cong(sophuc &x, sophuc &y){
			cout<<"tong hai so phuc: ";
			cout<<*x.a+*y.a<<' '<<*x.b+*y.b;
		}   
};
int main(){
sophuc a;
cout<<"nhap so phuc a: \n"; 
a.add();
cout<<"nhap so phuc b: \n"; 
sophuc b;
b.add();
cout<<"tong hai so phuc:\n";
a.cong(b);
cong(a,b);

return 0;
}


