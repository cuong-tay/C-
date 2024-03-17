#include<bits/stdc++.h>
using namespace std;
int max2(int a, int b){
	if(a%2==0) return b%2==0?max(a,b):a;
	return b%2==0?b:-INT_MAX;
}
int main(){
//max_element tra ve con tro
int a[]={4,3,5,1,8,9,5,65};
int n=sizeof(a)/sizeof(a[0]);
/*int *p=max_element(a+3,a+7); //max(a[3]...a[6]
cout<<"\nGia tri max: "<<*p<<endl;
cout<<"vi tri trong mang dat gia tri max:"<<p-a;*/
cout<<accumulate(a,a+n,-INT_MAX,max2)<<"\n";
return 0;
}


