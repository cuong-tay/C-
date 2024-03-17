#include<bits/stdc++.h>
using namespace std;
class document{
	private:
		string tentl;
		string mota , tg , dinhdang;
		int namxb;
	public:
	   document(string tentl, string mota, string tg, string dinhdang, int namxb){
	      this->tentl = tentl;
		  this->mota = mota;
		  this->tg = tg;
		  this->dinhdang = dinhdang;
		  this->namxb = namxb; 
	   }
	   void hienthi(){
	   	 cout << left << setw(20) << "Ten tai lieu" << setw(20) << "Mo ta tai lieu" << setw(20) << "Tac gia" << setw(20) << "Dinh dang" << setw(20) << "Nam xuat ban" << endl;
    cout << setw(20) << tentl << setw(20) << mota << setw(20) << tg << setw(20) << dinhdang << setw(20) << namxb << endl;
	   }
	   string name() const {
	return tentl;
}		   
};

class Folder{
	private:
		vector<document> documents;
		string tenthumuc;
	public:
		string file() const {
		return tenthumuc;}
	    void addtl(document tailieu, string tenthumuc){
	    	documents.push_back(tailieu);
		}	
		void xoalh(string ten);
		void inalltailieu(string tenthumuc);
		
};
void Folder::xoalh(string ten){
	for(int i=0;i<documents.size();i++){
		if(documents[i].name().compare(ten) == 0){
			documents.erase(documents.begin()+i);
			cout<<"Da xoa 1 tai lieu ra khoi thu muc"<<endl;
			return;
		}
	}
	cout<<"khong tim thay ten trong thu muc"<<endl;
}
void Folder::inalltailieu(string tenthumuc){
	int d=0;
	cout<<"In tat ca tai lieu trong thu muc: "<<tenthumuc<<endl;
	for(int i=0;i<documents.size();i++){
		documents[i].hienthi();
		d++;
	}
	if(d==0){
		cout<<"thu muc khong co tai lieu nao :(("<<endl;
	}
}
class user{
	public:
		string tenuser;
		vector<Folder> folder;
	public:
	
	  void addthumuc(Folder thumuc, string tenuser){
	  	folder.push_back(thumuc);
	  }
	  void deleted(string tenthumuc);
	  void danhsach(string tenuser);	
};
void user::deleted(string tenthumuc){
	for(int i=0;i<folder.size();i++){
		if(folder[i].file().compare(tenthumuc) == 0){
			folder.erase(folder.begin()+i);
			cout<<"Da xoa 1 thu muc ra khoi danh sach"<<endl;
			return;
		}
	}
	cout<<"khong tim thay ten thu muc"<<endl;
}
void user::danhsach(string tenuser){
		int d1=0;
	cout<<"In tat ca thu muc cua ng dung: "<<tenuser<<endl;
	for(int i=0;i<folder.size();i++){
		folder[i].file();
		d1++;
	}
	if(d1==0){
		cout<<"nguoi dung khong co thu muc nao :(("<<endl;
	}
}
main(){
vector<user> x;
	Folder thumuc;
	cout << "\tMENU" << endl;
    cout << "1. Them tai lieu moi vao 1 thu muc cua nguoi dung" << endl;
    cout << "2. Xoa tai lieu khoi thu muc cua nguoi dung" << endl;
    cout << "3. Hien thi danh sach tai lieu trong thu muc" << endl;
    cout << "4. Them thu muc moi vao danh sach thu muc cua user" << endl;
     cout << "5. Xoa thu muc khoi danh sach thu muc cua user" << endl;
      cout << "6. Hien thi danh sach thu muc cua user" << endl;
    cout << "7. Exit" << endl;
while(true){

    int chon;
    cin >> chon;
    cin.ignore(); 
 
    switch (chon){
    	case 1: {
    	 string tenuser, tenthumuc, tentl, mota, tg, dinhdang;
                int namxb;

                cout << "Nhap ten nguoi dung: ";
                getline(cin, tenuser);

                    cout << "Nhap ten thu muc: ";
                    getline(cin, tenthumuc);
                    cout << "Nhap ten tai lieu: ";
                    getline(cin, tentl);
                    cout << "Nhap mo ta tai lieu: ";
                    getline(cin, mota);
                    cout << "Nhap tac gia: ";
                    getline(cin, tg);
                    cout << "Nhap dinh dang: ";
                    getline(cin, dinhdang);
                    cout << "Nhap nam xuat ban: ";
                    cin >> namxb;

                    
                    document tai_lieu(tentl,mota,tg,dinhdang,namxb);
                    thumuc.file() = tenthumuc;
                thumuc.addtl(tai_lieu, tenthumuc);
                x.addthumuc(thumuc, tenthumuc);
        
			break;
		}
	  case 2:{
	  	string tl,tm,user;
	  	cout << "Nhap ten tai lieu: ";
                    getline(cin, tl);
        cout << "Nhap ten thu muc: ";
                    getline(cin, tm);  
		cout << "Nhap ten nguoi dung: ";
                getline(cin, user);	
		thumuc.xoalh(tl);				         
		break;
	  }	
	  case 3: {
	  	string user,tm;
	  		cout << "Nhap ten nguoi dung: ";
                getline(cin, user);	
        cout << "Nhap ten thu muc: ";
                    getline(cin, tm);  
                  
                
		thumuc.inalltailieu(tm);			       
		break;
	  }
	}    
    
}
}

