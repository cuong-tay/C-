#include "node.cpp"
#include "slist_iterator.cpp"
using namespace std;
#ifndef __slist__cpp__
#define __slist__cpp__
template<class T>
class slist{
	node<T> *head,*tail;
	unsigned int num;//so phan tu hien tai trong list -> size
	public:
		typedef slist_iterator<T> iterator;
		slist(){ head = tail = nullptr; num=0;}
		slist(int k,T x){
			head=tail=NULL; num=0;
			for(int i=1;i<=k;i++) push_back(x);
		}
		iterator begin(){
			return head;
		}
		iterator end(){
			return NULL;
		}
		
		unsigned size(){ return num;}
		bool empty(){ return num==0;}
		T &front(){ return head->getelem();	}
		T &back(){ return tail->getelem();	}
		void push_front(T x){
			head = new node<T>(x,head);
			if(num==0) tail = head; 
			num++;
		}
		void push_back(T x){
			if(num==0) push_front(x);
			else{
				tail->setnext(new node<T>(x,NULL));
				tail = tail->getnext();
				num++;
			}
		}
		void pop_front(){
			if(num==0) return;
			if(num==1) {
				head=tail=NULL;
			}
			else{
				head=head->getnext();
			}
			num--;
		}
		void pop_back(){
			if(num==0) return;
			if(num==1){head=tail=NULL; num--; return;}
			node<T> *p=head;
			while(p->getnext()!=tail) p=p->getnext();
			p->setnext(NULL);
			tail=p;
			num--;
		}
		 void insert(int position, T x) {
        if (position < 0 || position > num) {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 0) {
            push_front(x);
            return;
        }

        if (position == num) {
            push_back(x);
            return;
        }

        node<T>* current = head;
        for (int i = 1; i < position; i++) {
            current = current->getnext();
        }

        current->setnext(new node<T>(x, current->getnext()));
        num++;
    }
     void erase(int pos) {
        if (pos < 0 || pos >= num) {
            // Invalid position, do nothing or handle the error as needed
            return;
        }

        if (pos == 0) {
            pop_front();
        } else {
            node<T> *current = head;
            for (int i = 1; i < pos; i++) {
                current = current->getnext();
            }
            node<T> *temp = current->getnext();
            current->setnext(temp->getnext());
            delete temp;
            num--;
        }
    }
};
#endif
//

