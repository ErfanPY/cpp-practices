#include <iostream>

using namespace std;

int main()
{
    char character;
    
    cout << "Enter your character: ";
    cin >> character;
    character = tolower(character);

    if (character == 'a' || character == 'e' || character == 'u' || character == 'i' || character == 'o')
        cout << "This character is a vowel";

    else if ('a' < character && character <= 'z')
        cout << "This character is a consonant";

    else if ('0' <= character && character <= '9' )
        cout << "This character is a number";

    else
        cout << "This character is unkown";
    
    return 0;
}






