#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // opens a file to write to
    ofstream file;
    file.open("numbers.html");
    
    // creates a main header for the list of numbers
    // creates a header for even numbers and a header for odd numbers
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // writes even numbers and odd numbers to their respective column
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    // closes file
    file.close();
    ifstream input("numbers.html");
    // prints table
    cout << input.rdbuf();
    input.close();
    return 0;
}
