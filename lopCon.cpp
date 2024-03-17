#include<bits/stdc++.h>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(const string& _name) : name(_name) {}

    virtual void speak() const {// da cai dat
        cout << "Animal " << name << " speaks." << endl;
    }
    virtual Animal& operator=(const Animal& other) {
        if (this != &other) {
            name = other.name;
        }
        return *this;
    }
    virtual ~Animal() {}
};

// Lop con
class Dog : public Animal {
public:
    Dog(const string& _name) : Animal(_name) {}
    
     virtual Animal& operator=(const Animal& other) {
         Animal::operator=(other);
        
        if (const Dog* derived = dynamic_cast<const Dog*>(&other)) {
            name = derived->name;
        }
        return *this;
    }
    
    void speak() const override {
        cout << "Dog " << name << " barks." << endl;
    }
};

// Lop con khac
class Cat : public Animal {
public:
    Cat(const string& _name) : Animal(_name) {}
    
     virtual Animal& operator=(const Animal& other) {
        Animal::operator=(other);
        
        if (const Cat* derived = dynamic_cast<const Cat*>(&other)) {
            name = derived->name;
        }
        return *this;
    }
    void speak() const override {
        cout << "Cat " << name << " meows." << endl;
    }
};

int main() {
    Animal* animal1 = new Dog("Buddy");
    Animal* animal2 = new Cat("Whiskers");
    Animal* a= new Cat("loi");
    *a=*animal2;
    a->speak();

    animal1->speak();
    animal2->speak();

    delete animal1;
    delete animal2;

    return 0;
}


