#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class FileManager {
private:
    string filename;

public:
    FileManager(const string& fname) {
        filename = fname;
    }

    void writeToFile() {
        ofstream file(filename);
        if (file.is_open()) {
            file << "Welcome to Pakistan\n";
            file << "It is a beautiful country";
            file.close();
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    void readFromFile() {
        string line;
        ifstream file(filename);
        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cout << "File does not exist." << endl;
        }
    }
};

int main() {
    FileManager fileManager("2nd.txt");

    fileManager.writeToFile();
    fileManager.readFromFile();

    return 0;
}