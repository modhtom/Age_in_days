#include <iostream>
using namespace std;
int main(){
    long num;
    int years=0, days=0, months=0;
    cin >> num;
    while (num >= 365) {
        num -= 365;
        years += 1;
    }
    while (num >= 30) {
        num -= 30;
        months += 1;
    }
    days = num;
    cout <<years<< " years\n"<< months<<" months\n"<<days<<" days";
    return 0;
}