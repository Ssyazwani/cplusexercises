// Read file, separate the words and try to make a sentence with random words

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream file(filename);

    string line;
    vector<string> words;

    
    while (getline(file, line)) {
        stringstream ss(line);  
        string word;
        
       
        while (ss >> word) {
            words.push_back(word);  
        }
    }

    file.close(); 

    
    cout << "Words in the file:" << endl;
    for (const string& word : words) {
        cout << word << endl;
    }

    //randomise the words to make them into a 7 word sentence

    return 0;
}
