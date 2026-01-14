#include <iostream>
#include <string>
#include <iterator>
#include <sstream>

using namespace std;

int main() {
	string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    int i = 0;
    for (auto word = istream_iterator<string>(ss) ; word != istream_iterator<string>() ; word++) {
    	cout << ++i << " " << *word << endl;
    }
	return 0;
}