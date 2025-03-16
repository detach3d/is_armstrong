#include <iostream>
#include <string>

bool is_armstrong() {
    using std::string,std::cin,std::cout;
    int number, first_ver;

    cin >> number;
    first_ver = number;
    string s = std::to_string(number);
    int n = s.length();
    int sum = 0,layers=1;
    cout << number << " => ";

    for (int i = 0; i<n;++i){
        layers = number%10;
        number = number/10;
        sum += std::pow(layers,n);
    }
    cout << sum << '\n';
    return (first_ver == sum) ? true : false;
}

int main() {
    //is_armstrong();
    std::cout << std::boolalpha << is_armstrong() << '\n';
}