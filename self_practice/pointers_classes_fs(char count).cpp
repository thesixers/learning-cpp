#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>


using namespace std;

class Book{
    public:
        Book(string title, string isbn, string author): 
        title(title), isbn(isbn), author(author) {
            cout << "Book titled: " << title << " has been created" << endl; 
            details();
        };

        void details(){
            cout << "Title: " << title << endl;
            cout << "ISBN: " << isbn << endl;
            cout << "Author: " << author << endl;
        }

        bool getBookContent(string &line){
            string bookFilePathName = "books/" + title + "_"+ isbn + ".txt"; 
            if(bookFilePath == "") bookFilePath = bookFilePathName;

            int lastLineCharCount = getLastLineCharCount(bookFilePathName);
            if(lastLineCharCount == -1) return false;

            int success = writeToFile(line, bookFilePathName, lastLineCharCount);
            if(!success) return false;

            showFilePath();
            return true;
        }

        void showFilePath(){
            cout << "Book content has been saved to: " << bookFilePath << endl;
        }

        
    
    private:
        string title, isbn, author, bookFilePath;
        int charsPerLine = 110;
        int getLastLineCharCount(string &bookFilePathName){

            // check if the file exists.
            if(!filesystem::exists(bookFilePathName)){
                return 0;
            }
            
            // open the file with the cursor at the end of the of the file
            ifstream rBook(bookFilePathName, ios::ate);

            if(!rBook.is_open()) {
                cout << "error occured while opening or creating file r" << endl;
                return -1;
            }
            // move the cursor back till the last char is a new line ("\n") and count the words in that line.
            // get the file size
            int fileSize = rBook.tellg();
            // init the word count variable
            int lastLineCharCount{};
            char ch;
            // use the file size as an origin to loop backwards until u get to a new line("\n")
            for(int i = fileSize - 1; i >= 0; i--){
                rBook.seekg(i);
                rBook.get(ch);
                // while moving back words if the next char is a space the increment the word count 
                lastLineCharCount++;
                // if the next char is a new line then break the loop
                if(ch == '\n' && i != fileSize - 1) break;
                // lastLine.insert(lastLine.begin(), ch);
            }
            rBook.close();
            return lastLineCharCount;
        }

        
        int writeToFile(string &line, string &bookFilePathName, int &lastLineCharCount){ 
            ofstream book(bookFilePathName, ios::app);

            if(!book.is_open()) {
                cout << "error occured while opening or creating file w" << endl;
                return 0;
            }

            int remainderChars = charsPerLine - lastLineCharCount;
            int charCount = 0;
            cout << "remainderChars: " << remainderChars << endl;
            cout << "lastLineCharCount: " << lastLineCharCount << endl;


            for(int x = 0; x < line.length(); x++){ 

                if(remainderChars > 0){
                    cout << "remainder Loop: " << remainderChars << endl;
                    book << line[x];
                    
                    if(remainderChars == 1){
                        if(line[x + 1] != ' '){
                            book << '-' << endl;
                            remainderChars--;
                            continue;
                        }
                    }
                    remainderChars--;
                    if(remainderChars == 0) {
                        book << endl;
                        continue;
                    }
                }else{
                    
                    book << line[x];
                    charCount++;
                    if(charCount == charsPerLine - 1){
                        if(line[x + 1] != ' ' || line[x + 1] != '.'){
                            book << '-' << endl;
                            charCount = 0;
                        }
                    }
                    if(charCount == charsPerLine){
                        book << endl;
                        charCount = 0;
                    }
                }
            }
            book.close();
            return 1;
        }
};


int main()
{
    string title, isbn, author;
    cout << "Welcome to the Book Creator!" << endl;
    cout << "You can create a new book and save its content." << endl;
    cout << "To exit, type 'exit' when prompted for content." << endl;

    cout << "The services of this program is to create a book and save its content" << endl;

    cout << "To create a new book enter the following: (title, isbn, author) " << endl;

    cout << "Enter Title: ";
    getline(cin, title);
    cout << endl;

    cout << "Enter ISBN: ";
    getline(cin, isbn);
    cout << endl;

    cout << "Enter Author: ";
    getline(cin, author);
    cout << endl;

    Book newBook(title, isbn, author);

    cout << "Enter the content of the book" << endl;

    string line;

    while(true){
        getline(cin, line);
        if(line == "exit") break;
        int success = newBook.getBookContent(line);
        if(!success){
            break;
        }
    }

    return 0;
}