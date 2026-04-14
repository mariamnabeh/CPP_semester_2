#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string n;      
    string a;      
    bool f;        

public:

    Book() {
        n = "";
        a = "";
        f = 0;
    }

    Book(string x, string y) {
        n = x;
        a = y;
        f = 0;
    }

    void setN(string x) {
        n = x;
    }

    void setA(string x) {
        a = x;
    }

    string getN() {
        return n;
    }

    string getA() {
        return a;
    }

    bool getF() {
        return f;
    }

    void take() {
        if (f == 0) {
            f = 1;
            cout << "ok taken\n";
        } else {
            cout << "no already\n";
        }
    }

    void back() {
        f = 0;
        cout << "ok back\n";
    }

    void sh() {
        cout << n << " " << a << " ";
        if (f == 1)
            cout << "taken\n";
        else
            cout << "free\n";
    }
};

int main() {

    Book x("b1", "a1");
    Book y("b2", "a2");
    Book z("b3", "a3");

    x.sh();
    y.sh();
    z.sh();

    cout << "----\n";

    x.take();
    x.take();

    cout << "----\n";

    x.back();

    x.sh();

}