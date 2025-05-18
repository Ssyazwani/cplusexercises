#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    
    map<string, int> movies;

   
    movies["A Midsummer's Equation"] = 2013;
    movies["Kimi Ni Todoke"] = 2010;
    movies["A Silent Parade"] = 2022;
    movies["Our Secret Diary"] = 2023;
    movies["Your Name"] = 2016;
    movies["Last Mile"] = 1954;

    
    cout << "Japanese Movies Database:" << endl;
    for (const auto& movie : movies) {
        cout << movie.first << " - Released in " << movie.second << endl;
    }

   
    string query;
    cout << "\nEnter a movie title to search for its release year: ";
    // cin >> query; only gets the first word/string
    getline(std::cin, query);

    auto it = movies.find(query);
    if (it != movies.end()) {
        cout << "The movie \"" << it->first << "\" was released in " << it->second << ".\n";
    } else {
        cout << "Sorry, the movie \"" << query << "\" is not in the database.\n";
    }

    return 0;
}
