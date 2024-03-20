#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> data;

    data["John"] = 25;
    data["Alice"] = 30;
    data["Bob"] = 28;

    cout << "Usia John: " << data["John"] << endl;
    cout << "Usia Alice: " << data["Alice"] << endl;
    cout << "Usia Bob: " << data["Bob"] << endl;

    return 0;
}
