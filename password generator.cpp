#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
  // Get the length of the password from the user.
  int length;
  cout << "Enter the length of the password: ";
  cin >> length;

  // Create a string to store the password.
  string password;

  // Generate a random password.
  for (int i = 0; i < length; i++) {
    // Generate a random character.
    int character = rand() % 26 + 'a';

    // Add the character to the password.
    password += character;
  }

  // Print the password.
  cout << "Your password is: " << password << endl;

  return 0;
}