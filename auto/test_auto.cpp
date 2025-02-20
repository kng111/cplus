#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    stringstream ss(str);
    string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}
int main() {
    ifstream file("123.txt"); 
    if (!file.is_open()) {
        cerr << "err" << endl;
        return 1;
    }
    string line;
    while (getline(file, line)) {
        vector<string> words = split(line, ' '); 
        for (const string& word : words) {
            cout << word << endl;
        }
    }
    file.close(); 
    return 0;
}
os.pause