#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Document {
private:
    string tentl, mota, tentgia, dinhdang;
    int yeah;

public:
    Document() {
    }

    void nhap() {
        cout << "Nhap ten tai lieu: ";
        getline(cin, tentl);
        cout << "Nhap mo ta: ";
        getline(cin, mota);
        cout << "Nhap ten gia: ";
        getline(cin, tentgia);
        cout << "Nhap dinh dang: ";
        getline(cin, dinhdang);
        cout << "Nhap nam xuat ban: ";
        cin >> yeah;
        // Clear the input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void inthongtin() {
        cout << tentl << " " << mota << " " << tentgia << " " << dinhdang << " " << yeah << endl;
    }

    string getten() const {
        return this->tentl;
    }
};

class Folder {
private:
    string namefolder;
    vector<Document> documents;

public:
    Folder() {
    }

    void nhap() {
        cout << "Nhap ten thu muc: ";
        getline(cin, namefolder);
    }

    void adddocument() {
        Document newDocument;
        newDocument.nhap();
        documents.push_back(newDocument);
    }

    void xoatailieu(string ttl) {
        auto it = find_if(documents.begin(), documents.end(), [&ttl](const Document &doc) {
            return doc.getten() == ttl;
        });

        if (it != documents.end()) {
            documents.erase(it);
            cout << "Da xoa tai lieu co ten: " << ttl << endl;
        } else {
            cout << "Khong tim thay tai lieu co ten: " << ttl << endl;
        }
    }
};

int main() {
    Folder myFolder;  // Create an instance of the Folder class

    myFolder.nhap(); // Input folder name

    int numDocuments;
    cout << "Nhap so luong tai lieu can them: ";
    cin >> numDocuments;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer

    for (int i = 0; i < numDocuments; ++i) {
        myFolder.adddocument(); // Input document details
    }

    string ttl;
    cout << "Nhap ten tai lieu can xoa: ";
    getline(cin, ttl);
    myFolder.xoatailieu(ttl);  // Call xoatailieu with the provided document name

    return 0;
}

