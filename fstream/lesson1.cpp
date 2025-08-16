#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // Open a file in write mode
    // This creates a new file or overwrites an existing one
    // The file will be created in the current working directory
    // If the file already exists, its contents will be replaced`
    ofstream newFile;
    // ofstream anotherFile("../example.txt"); => this is another way to open a file directly
    // The file path can be relative or absolute
    // Here we use a relative path to create a file in the parent directory

    newFile.open("../example2.txt");

    if(!newFile.is_open()) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }
    
    newFile << "This is a new file created using fstream in C++.\n";
    newFile << "It demonstrates how to write to a file.\n";
    
    // Close the file
    newFile.close();

    // Open the file in read mode to verify contents
    string line;
    ifstream readFile("genesix.txt");

    // check if the file is open
    // If the file does not exist, log an error
    if(!readFile.is_open()) {
        cerr << "Error opening file for reading." << endl;
        return 1;
    }
    
    // If the file is open, read its contents line by line
    while(getline(readFile, line)){
        cout << line << endl;
    }

    readFile.close();

    // Indicate successful completion
    cout << "File operations completed successfully." << endl;
    
    return 0;
}