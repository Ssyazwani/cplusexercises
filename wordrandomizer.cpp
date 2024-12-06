// Read file, separate the words and try to make a sentence with random words

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>


using namespace std;

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;                // file format doesnt matter but c++ could only read some formats, NOT xlsx

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



    //  for csv:
    //     string cell;
    //     vector<string> row;        
        
    //     while (getline(ss, cell, ',')) { // Split the line by comma 
    //         row.push_back(cell);    // Add each value to the row vector
    //     }

    //     for (const string& word : row) {
    //         cout << word << " ";
    //     }
    //     cout << endl;
    // }

    file.close(); 

    
    cout << "Words in the file:" << endl;
    for (const string& word : words) {
        cout << word << endl;
    }


    
    default_random_engine generator;

    shuffle(words.begin(), words.end(), generator);

    
  
    cout << "Sentence:" << endl;
    for (const string& word : words) {
        cout << word << " ";
    }

    return 0;
}
