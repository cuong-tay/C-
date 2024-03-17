#include <bits/stdc++.h>
using namespace std;

class contact {
private:
    string hoten;
    string sdt;
    string email;

public:
    contact(string ht, string phone, string mail) {
        hoten = ht;
        sdt = phone;
        email = mail;
    }

    void inlienhe() {
        cout << "Ho va ten: " << hoten << endl;
        cout << "So dien thoai: " << sdt << endl;
        cout << "Dia chi email: " << email << endl;
    }
      string getPhoneNumber() const { 
        return sdt;
    }
};

class AddressBook {
private:
    vector<contact> contacts;

public:
    void addcontact(contact lienhe) {
        contacts.push_back(lienhe);
    }
    void xoalh(string phone);
    void search(string p);
    void inall();
};

void AddressBook::xoalh(string so){
	  for(int i=0;i<contacts.size();i++){
	  	 if(contacts[i].getPhoneNumber().compare(so) == 0){
	  	 	 contacts.erase(contacts.begin() + i); //xoa lienhe thu i trong vector
		   cout << "Ban da xoa lien he" << endl;
            return; 
		   }
	  }
	   cout << "Khong tim thay lien he voi so dien thoai : " << so<< endl;
}
void AddressBook::search(string p){
	for(int i=0;i<contacts.size();i++){
		if(contacts[i].getPhoneNumber().compare(p) == 0){
			contacts[i].inlienhe();
		}
	}
	cout<<endl;
}
void AddressBook::inall(){
	int d=0;
	cout<<"In tat ca danh sach lien he: \n";
	for(int i=0;i<contacts.size();i++){
	    contacts[i].inlienhe();	
	    d++;
	    cout<<endl;
	}
	
if (d == 0) {
        cout << "Chua co lien he nao duoc nhap." << endl;
    }
}
int main() {
    AddressBook x;
    cout << "\tMenu:" << endl;
    cout << "1. Them lien he" << endl;
    cout << "2. Xoa lien he bang so phone" << endl;
    cout << "3. Tim kiem lien he bang so phone" << endl;
    cout << "4. Hien thi danh sach tat ca lien he" << endl;
    cout << "5. Exit" << endl;
while(true){

    int chon;
    cin >> chon;
    cin.ignore(); 
 
    switch (chon) {
    case 1: {
        string name, phone, email;
        cout << "Nhap name: ";
        getline(cin, name);
     int ok;   
       do {
    cout << "Nhap phone number: ";
    getline(cin, phone);
    ok = 0; 

    if (phone.size() != 10) {
        ok = 1;
    } else {
        for (int i = 0; i < phone.size(); i++) {
            if (phone[0]!='0') {
                ok = 1;
                break;
            }
        }
    }

    if (ok) {
        cout << "So ban vua nhap bi sai. Hay nhap lai so phone." << endl;
    }
} while (ok);
       int ok1;
       do {
    cout << "Nhap email: ";
    getline(cin, email);
    ok1 = 0;

    if (email.find('@') == string::npos) {
        ok1 = 1;
    }

    if (ok1) {
        cout << "Ban da nhap sai email. Hay nhap lai: " << endl;
    }
} while (ok1);
        
        contact lienhe(name, phone, email);
        x.addcontact(lienhe);
        break;
    }
     case 2:{
     	string phone;
     	cout<<"hap sdt can xoa: ";
     	cin>>phone;
     	cin.ignore();
     	
     	x.xoalh(phone);
		break;
	 }
	 case 3:{
	 	string so;
	 	cout<<"Nhap so can tim: ";
	 	cin>>so;
	 	cin.ignore();
	 	x.search(so);
		break;
	 }
	 case 4:{
	 	x.inall();
		break;
	 }
	  case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
	 
    }
}
    return 0;
}

