#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Node{
	int x;
	
	//la mot con tro kieu node
	Node *next;
};
typedef Node* node;
node taonode(int data){
	//cap phat dong mot node
	node tmp = new Node();
	tmp->x = data;
	tmp->next = NULL;
	return tmp;
}
int size(node head){
	int dem=0;
	while(head!=NULL){
		dem++;
		head = head->next;
	}
	return dem;
}
void display(node head){
	cout<<"Danh sach lien ket: ";
	while(head!=NULL){
		cout<<head->x<<' ';
		head=head->next;
	}
	cout<<endl;
}
void themdau(node &head,int data){
	node moi = taonode(data);
	if(head==NULL){
		head = moi;
	}
	else{
		//b1 : cap nhat phan tham chieu
		moi->next= head;
		head=moi;
	}
}
void themcuoi(node &head,int data){
	node moi = taonode(data);
	if(head==NULL){
		head=moi;
	} else{
		node tmp=head;
		while(tmp->next!=NULL){
			tmp=tmp->next;
		}
		tmp->next = moi;
	}
}
void themgiua(node &head,int data, int vitri){
	int n=size(head);
	if(vitri<1||vitri>n+1){
		cout<<"vi tri chen khong hop le!\n";
		return;
	}
	if(vitri==1){
		themdau(head,data);
	} else if(vitri==n+1){
		themcuoi(head,data);
	}else {
		node tmp=head;
		for(int i=1;i<=vitri-2;i++){
			tmp = tmp->next;
		}
		node moi = taonode(data);
		moi->next= tmp->next;
		tmp->next= moi;
	}
}
void xoadau(node &head){
	if(head==NULL){
		cout<<"Danh sach lien ket rong!\n";
	}
	node tmp=head;
	head = head->next;
	delete tmp;
}
void xoacuoi(node &head){
	 if(head==NULL){
		cout<<"Danh sach lien ket rong!\n";
		return;
	}
	node p = head,q=NULL;
	while(p->next !=NULL){
		q=p;
		p=p->next;
	}
	delete p;
	if(q==NULL){ //dslk chi co 1 phan tu
	  head = NULL;
	} else { q->next=NULL;
	}
}
void xoagiua(node &head, int vitri){
	int n = size(head);
	if(vitri<1||vitri>n){
		cout<<"vi tri xoa ko hop le\n"; return;
	}
	node p=head,q=NULL;
	for(int i=1;i<vitri;i++){
		q=p;
		p=p->next;
	}
	 if(q!=NULL){
	 	q->next=p->next;
	 } else head= head->next;
	 delete p;
}
//ham tim kiem phan tu trong dslk
bool timkiem(node head,int val){
	int n= size(head);
	if(head==NULL) return false;
	for(int i=0;i<n;i++){
		if(val==head->x){
			return true;
		}
	}
	return false;
}
// ham sap xep ptu trong dslk
void sx(node &head){
	for(node i=head;i!=NULL;i=i->next){
		node min =i;
		for(node j=i->next;j!=NULL;j=j->next){
			if(j->x<min->x){
				min =j;
			}
		}
		swap(min->x,i->x);
	}
}
void dao(node &head){
	vector<int> v;
	node p = head;
	while(p!=NULL){
		v.push_back(p->x); p=p->next;
	}
	reverse(v.begin(),v.end());
	node tmp = head; int i=0;
	while(tmp!=NULL){
		tmp->x=v[i++];
		tmp=tmp->next;
	}
	
}

 /*int main(){
   node head = NULL;
   while(1){
   	 cout<<"-----------Menu-------------\n";
   	 cout<<"1. them 1 node vao dau danh sach lien ket\n";
   	 cout<<"2. them 1 node vao cuoi danh sach\n";
   	 cout<<"3. chen 1 node vao giua danh sach\n";
   	  cout<<"4. xoa 1 node o dau ds\n";
   	   cout<<"5. xoa 1 node o cuoi danh sach\n";
   	    cout<<"6. xoa 1 node o giua ds\n";
   	    cout<<"7. tim kiem danh sach lket\n";
   	    cout<<"8. sx dslk\n";
   	    cout<<"9.dao nguoc ds lk\n";
   	 cout<<"10. hien thi danh sach lket\n";
   	 cout<<"-------------------------------\n";
   	 
   	 int n; cin>>n;
   	 if(n==1){
   	 	int x; cout<<"nhap gia tri can them : "; cin>>x;
   	 	themdau(head,x);
		} else if(n==2){
			int x; cout<<"nhap gia tri can them : "; cin>>x;
			themcuoi(head,x);
		} else if(n==3){
			int x; cout<<"nhap gia tri can them : "; cin>>x;
			int vt; cout<<"nhap vi tri can chen: "; cin>>vt;
			themgiua(head,x,vt);
		} else if(n==10){
			display(head);
		}else if(n==4){
			xoadau(head);
		}else if(n==5){
			xoacuoi(head);
		} else if(n==6){
			int vt; cout<<"nhap vi tri can xoa: "; cin>>vt;
			xoagiua(head,vt);
		} else if(n==7){
		  int gt; cout<<"nhap gia tri can tim: "; cin>>gt;
		 if(timkiem(head,gt)){
		 	cout<<"Yes\n";
		 } else cout<<"ko thay\n";
		} else if(n==8){
			sx(head);
		} else if(n==9){
			dao(head);
		}
   }
return 0;
}*/

