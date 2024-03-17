#include <iostream>
#include <string>

class Cho {
private:
    std::string ten;

public:
    // tao doi tuong
    Cho(std::string n) {
    	ten=n;
        std::cout << ten << " da duoc tao." << std::endl;
    }

    // huy doi tuong
    ~Cho() {
        std::cout << ten << " da bi huy." << std::endl;
    }

    // Sao chép doi tuong
    Cho(const Cho &other) {
       std::string ten =other.ten + "_saochep";
        std::cout << ten << " da duoc sao chep." << std::endl;
    }

    // Toán tu gan
    Cho& operator=(const Cho &other) {
        if (this != &other) {
            ten = other.ten + "_gan";
            std::cout << ten << " da duoc gan." << std::endl;
        }
        return *this;
    }

    void sua() {
        std::cout << ten << " dang sua." << std::endl;
    }
};

int main() {
    // tao doi tuong
    Cho choCuaToi("Luffy");

    // Sao chép doi tuong
    Cho choKhac = choCuaToi;

    // toan tu gan
    Cho choDaGan("Becgie");
    choDaGan = choCuaToi;

    // su dung phuong thuc
    choCuaToi.sua();
    choKhac.sua();
    choDaGan.sua();
//ket thuc chuong trinh doi tuong se bi huy
    return 0;
}

