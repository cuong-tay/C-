#include<bits/stdc++.h>
using namespace std;

class maTran {
private:
    int bac;
    vector<vector<int>> mtran;

public:
	//khoi tao matran ban dau toan 0;
    maTran(int n) : bac(n) {
        mtran.resize(n, vector<int>(n, 0));
    }

    void nhapMaTran() {
        cout << "Nhap ma tran:\n";
        for (int i = 0; i < bac; ++i) {
            for (int j = 0; j < bac; ++j) {
                cin >> mtran[i][j];
            }
        }
    }
    /*maTran operator+(const maTran &other) {
        if (bac != other.bac) {
            cerr << "Khong the cong hai ma tran khac kich thuoc.\n";
            return maTran(0);
        }

        maTran tong(bac);

        for (int i = 0; i < bac; ++i) {
            for (int j = 0; j < bac; ++j) {
                tong.mtran[i][j] = mtran[i][j] + other.mtran[i][j];
            }
        }

        return tong;
    }*/
    friend maTran operator+(const maTran &a, const maTran &b);
    //in ma tran ra 
    void xuatMaTran() {
        for (int i = 0; i < bac; ++i) {
            for (int j = 0; j < bac; ++j) {
                cout << mtran[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    int Min(maTran &a){
    	int min=mtran[0][0];
    	for(int i=0;i<bac;i++){
    		for(int j=0;j<bac;j++){
    			if(min>mtran[i][j]){
    				min=mtran[i][j];
				}
			}
		}
		return min;
	}
	
	//nhan hai ma tran
	maTran operator*(const maTran &other) const {
        if (bac != other.bac) {
            cout << "Khong the nhan hai ma tran khac kich thuoc.\n";
            return maTran(0);
        }

        maTran ketQua(bac);

        for (int i = 0; i < bac; ++i) {
            for (int j = 0; j < bac; ++j) {
                for (int k = 0; k < bac; ++k) {
                    ketQua.mtran[i][j] += mtran[i][k] * other.mtran[k][j];
                }
            }
        }

        return ketQua;
    }
	
};
maTran operator+(const maTran &a, const maTran &b) {
    if (a.bac != b.bac) {
        std::cerr << "Khong the cong hai ma tran khac kich thuoc.\n";
        return maTran(0);
    }

    maTran tong(a.bac);

    for (int i = 0; i < a.bac; ++i) {
        for (int j = 0; j < a.bac; ++j) {
            tong.mtran[i][j] = a.mtran[i][j] + b.mtran[i][j];
        }
    }

    return tong;
}


int main() {
    int n;
    cout<<"Nhap bac cua ma tran: ";
    cin >> n;
    maTran x(n),y(n);
    cout<<"nhap ma tran 1: \n";
    x.nhapMaTran();
    cout<<"nhap ma tran 2: \n";
    y.nhapMaTran();
    maTran S=x+y,T=x*y;
    cout<<"Tong hai ma tran 1,2:\n";
    S.xuatMaTran();
    cout<<"Tich hai ma tran 1,2:\n";
    T.xuatMaTran();

    return 0;
}

