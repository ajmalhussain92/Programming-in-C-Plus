#include <iostream>
using namespace std;
//Nested Class example3

class Person {
public:
    string name;
    
    class Address {
    public:
        string country;
        string stname;
        int hno;
    };
    
    Address addr;
    void AddressPlease(){
        cout <<name<<endl<<addr.country<<endl<<addr.stname<<endl<<addr.hno;
    }
};

int main() {
    Person::Address ad;
    Person anil;
    anil.name = "anil";
    anil.addr.country = "India";
    anil.addr.stname = "patna";
    anil.addr.hno = 68;
    
    anil.AddressPlease();
    
    return 0;
}
