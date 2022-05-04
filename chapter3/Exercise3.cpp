#include <iostream>
using namespace std;

int main() {
    double height;
    double weight;

    cout << "身長と体重を入力してください。\n";

    cin >> height;
    cin >> weight;

    cout << "身長は" << height << "センチです。\n";
    cout << "体重は" << weight << "キロです。\n";

    return 0;
}