#include <iostream>
using namespace std;

int main(){
    int Enter{};
    cout<<"Enter an integer: ";
    cin >> Enter;
    cout << "Double " << Enter<<" is:" << Enter*2 << '\n';
    cout << "Triple " << Enter<<" is:" << Enter*3 << '\n';
    return 0;
}