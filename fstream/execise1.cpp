#include <iostream>
#include <fstream>

using namespace std;

int main(){

   try{
     // open a file for writing then read the contents of genesix.txt to the file 
        // declare file paths or names
        string wf =  "newGenesix.txt";
        string rf = "genesix.txt";

        // open the file we are writing to
        ofstream writeFile(wf);
        // open the file we are reading from 
        ifstream readFile(rf);

        // check if the files are open
        if(!writeFile.is_open() || !readFile.is_open()){
            throw 500;
        };

        // read from it and write to the file we are writing to 
        string line;
        while (getline(readFile, line))
        {
            /* code */
            writeFile << line << endl;
        }
        
        // close both files
        writeFile.close();
        readFile.close();
   }
   catch(int err){
    if(err == 500) cout << "error occured in opening files, \n files not opened" << endl;
   }

    return 0;
}