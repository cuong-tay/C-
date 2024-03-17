#include <bits/stdc++.h>
#include "node.cpp"

#ifndef __slist_iterator__cpp__
#define __slist_iterator__cpp__

using namespace std;

template <class T>
class slist_iterator {
    node<T> *curr; // con tro tro vao node hien tai

public:
    slist_iterator() : curr(nullptr) {}
    slist_iterator(node<T> *p) : curr(p) {}

    node<T> *getcurr() const {
        return curr;
    }

    slist_iterator<T> &operator=(const slist_iterator<T> &p) {
        this->curr = p.getcurr();
        return *this;
    }

    bool operator!=(const slist_iterator<T> &p) const {
        return curr != p.getcurr();
    }

    slist_iterator<T> operator++() // ++curr
    {
        if (curr != nullptr) {
            curr = curr->getnext();
        }
        return *this;
    }

    slist_iterator<T> operator++(int) // curr++
    {
        slist_iterator<T> temp = *this;
        if (curr != nullptr) {
            curr = curr->getnext();
        }
        return temp;
    }

    T &operator*() const {
        return curr->getelem();
    }
      
    
    
};

#endif

