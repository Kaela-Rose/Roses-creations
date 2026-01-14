#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string book, chapter, verse;
    string line;

    // Get user input
    cout << "Enter the book name (e.g., Genesis): ";
    getline(cin, book);

    cout << "Enter the chapter number: ";
    getline(cin, chapter);

    cout << "Enter the verse number: ";
    getline(cin, verse);

    // Construct the target verse index
    string target = book + " " + chapter + ":" + verse;

    // Open the Bible file
    ifstream bibleFile("bible.txt");
    if (!bibleFile.is_open()) {
        cerr << "Error: Could not open bible.txt" << endl;
        return 1;
    }

    bool found = false;
    string verseText;

    // The file alternates: index line, then verse line
    while (getline(bibleFile, line)) {
        if (line == target) {
            if (getline(bibleFile, verseText)) {
                cout << "\n" << target << "\n" << verseText << endl;
                found = true;
                break;
            }
        }
    }

    bibleFile.close();

    if (!found) {
        cout << "\nVerse not found in bible.txt" << endl;
    }

    return 0;
}
