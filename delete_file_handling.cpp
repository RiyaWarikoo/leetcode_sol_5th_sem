#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const string filename = "user_data.txt";
    ofstream outFile(filename, ios::trunc);
    if (outFile.is_open()) {
        outFile.close();
        cout << "File cleared successfully." << endl;
    } else {
        cerr << "Unable to open file." << endl;
    }

    return 0;
}