#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int sum = 0;
    double average;

    cout << "科目1の点数を入力してください。\n";
    cin >> num;
    sum += num;

    cout << "科目2の点数を入力してください。\n";
    cin >> num;
    sum += num;

    cout << "科目3の点数を入力してください。\n";
    cin >> num;
    sum += num;

    cout << "科目4の点数を入力してください。\n";
    cin >> num;
    sum += num;

    cout << "科目5の点数を入力してください。\n";
    cin >> num;
    sum += num;

    average = (double)sum/5;

    cout << "5科目の合計点は" << sum << "点です\n";
    cout << "5科目の平均点は" << average << "点です。\n";

    return 0;
}