#include<bits/stdc++.h>
using namespace std;
class sv{
	private:
		string name;
		int ngaysinh;
		double gpa;
	public:
	    //tao dau >>,<< cin cout
	  friend istream& operator >> (istream &in, sv &x){
		   getline(in,x.name);
		   in>>x.ngaysinh>>x.gpa;
		   in.ignore();
		   return in;
		}
		friend ostream & operator << (ostream &out, sv x){
			 out<<x.name<<" "<<x.ngaysinh<<" "<<x.gpa<<endl;
		}
		bool operator <(sv khac){
			return (this->gpa)<(khac.gpa);
		}
	friend sv in(sv a,sv b){
		cout<<a.name<<" "<<a.ngaysinh<<" "<<a.gpa<<endl;
	}
};

int main(){
  sv x,y;
  cin>>x>>y;
  if(x<y){
  	cout<<"x nho hon y"<<endl;
  } else cout<<"y nho hon x"<<endl;
  sv k; k=in(x,y);



return 0;
}

