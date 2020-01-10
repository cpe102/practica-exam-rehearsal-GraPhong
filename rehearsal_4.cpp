#include <iostream>
#include <string>
using namespace std;

//Write compress() here.
string compress(string x){
    int L = x.size();
    int i=0;
    string y;
    while(i < L){
        y = y +x[i];
        i = i+3;
    }
    return y;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("X");
    string i = compress("CPECMU");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}