#include<iostream>
using namespace std;

class Adapter{

public:
    int data;
    virtual ~Adapter() { cout << "usuwam" << endl; };
};

int main() {
    std::string data = "Ala ma kota.";
    char temp = data[0];

    std::cout << data << std::endl;
    std::cout << temp << std::endl;

    return 0;
}
