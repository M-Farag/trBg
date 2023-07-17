#include "iostream"
#include "string"

using std::cout;
using std::cin;
using std::string;

int main(){
    string bgColor;
    getline(cin, bgColor);
    cout
    << "\e]11;"
    << bgColor
    << "\a";
    
}
