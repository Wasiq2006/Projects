/*A company that wants to send data over the Internet has asked you to write a
 program that will encrypt it so that it may be transmitted more securely. All
 the data is transmitted as four-digit integers. Your application should read a
 four-digit integer entered by the user and encrypt it as follows: Replace each
 digit with the result of adding 7 to the digit and getting the remainder after
 dividing the new value by 10. Then swap the first digit with the third, and
 swap the second digit with the fourth. Then print the encrypted integer. Write
 a separate application that inputs an encrypted four-digit integer and decrypts
 it (by reversing the encryption scheme) to form the original number. [Optional
 reading project: Research "public key cryptography" in general and the PGP
 (Pretty Good Privacy) specific public key scheme. You may also want to
 investigate the RSA scheme, which is widely used in industrial-strength
 applications.*/
// encryption
#include <iostream>
using namespace std;
int main() {
  int num;
  // Encryption
  cout << "Enter a 4-digit integer to encrypt: ";
  cin >> num;
  int d1 = num / 1000;
  int d2 = (num / 100) % 10;
  int d3 = (num / 10) % 10;
  int d4 = num % 10;
  d1 = (d1 + 7) % 10;
  d2 = (d2 + 7) % 10;
  d3 = (d3 + 7) % 10;
  d4 = (d4 + 7) % 10;
  int encrypted = d3 * 1000 + d4 * 100 + d1 * 10 + d2;
  cout << "Encrypted number: " << encrypted << endl;
  // Decryption
  int enc;
  cout << "Enter a 4-digit integer to decrypt: ";
  cin >> enc;
  int e1 = enc / 1000;
  int e2 = (enc / 100) % 10;
  int e3 = (enc / 10) % 10;
  int e4 = enc % 10;
  int original_d1 = e3;
  int original_d2 = e4;
  int original_d3 = e1;
  int original_d4 = e2;
  original_d1 = (original_d1 + 3) % 10;
  original_d2 = (original_d2 + 3) % 10;
  original_d3 = (original_d3 + 3) % 10;
  original_d4 = (original_d4 + 3) % 10;
  int decrypted =
      original_d1 * 1000 + original_d2 * 100 + original_d3 * 10 + original_d4;
  cout << "Decrypted number: " << decrypted << endl;
  return 0;
}
