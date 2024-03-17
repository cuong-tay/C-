#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void maxheap(vector<ll>::iterator begin, vector<ll>::iterator end, vector<ll> &number) {
    auto i = begin;
    auto largest = i;
    auto l = begin + 2 * (i - begin) + 1;
    auto r = begin + 2 * (i - begin) + 2;

    if (l < end && *l > *largest) {
        largest = l;
    }

    if (r < end && *r > *largest) {
        largest = r;
    }

    if (largest != i) {
        swap(*i, *largest);
        maxheap(largest, end, number);
    }
}
void minheap(vector<ll>::iterator begin, vector<ll>::iterator end, vector<ll> &number){
	auto i= begin;
	auto laget =i;
	auto l= begin + 2*(i-begin)+1;
	auto r=begin + 2*(i-begin)+2;
	if(l<end  and *l<*laget){
		laget=l;
	}
	if(r<end and *r<*laget){
		laget=r;
	}
	if(laget!=i){
		swap(*i,*laget);
		minheap(laget,end,number);
	}
}
class Dayso {
private:
    vector<ll> number;

public:
    Dayso() {}

    void add(int n) {
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            number.push_back(x);
        }
    }

    void heapsort() {
        auto begin = number.begin();
        auto end = number.end();
      
        for (auto i = begin + number.size()/ 2 - 1; i >= begin; i--) {
            maxheap(i, end, number);
        }

        for (auto i = end - 1; i >= begin; i--) {
            swap(*i, *begin);
            maxheap(begin, i, number);
        }
    }

    bool search(int x) {
        auto l = number.begin();
        auto r = number.end() - 1;
        while (l <= r) {
            auto m = l + (r-l) / 2; 
            if (*m == x) {
                return true;
            } else if (*m < x) {
                l = m + 1;
            } else {
                r = m - 1;
            }
        }
        return false;
    }

    void display() {
        for (auto i : number) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    Dayso x;
    int n;
    cin >> n;
    x.add(n);
    x.heapsort();
    int a;
    cout << "Nhap so can tim: ";cin >> a;
    cin.ignore();
    x.search(a) ? cout << "yes\n" : cout << "no\n";
    x.display();
    return 0;
}

