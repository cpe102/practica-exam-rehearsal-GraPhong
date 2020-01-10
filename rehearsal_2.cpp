#include<iostream>
using namespace std;

int main(){
    float x;
    float sum = 0;
    while(x != 0){
        cout << "Enter x: ";
        cin >> x;
        if(x > 0)
        sum = sum + x;
        }
    cout << "sum = "<<sum;    
return 0;
}