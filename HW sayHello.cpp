#include <iostream>
#include <string>

using namespace std;

int main() {
	
    cout << "Say Hello" << endl;

    string userInput;


    cout << "Please enter your name?" << endl;
    cin >> userInput;

    for (int i=0; i<=6; i++)
    {
        cout << endl;
    }

    cout << "Hello " << userInput << " how are you today>?" << endl;
    cin >> userInput;


    cout << "Have a nice day!" << endl;


	return 0;
}
