#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c = 0;
    cout<<"Input a and b : "<<endl;
    cin>>a>>b;       

    c = a & b;
    cout << "AND(&) OPERATOR : " << a <<" AND "<< b <<" = "<< c << endl ;

    c = a | b;
    cout << "OR (|) OPERATOR : " << a <<" OR "<< b <<" = "<< c << endl ;

    c = a ^ b;
    cout << "XOR(^) OPERATOR : " << a <<" XOR "<< b <<" = "<< c << endl ;

    c = !a;
    cout << "NOT(!) OPERATOR : "<< a <<" NOT " << " = " << c << endl ;

    return 0;
}
