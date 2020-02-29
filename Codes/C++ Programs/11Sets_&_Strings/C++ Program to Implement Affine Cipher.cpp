/*This is a C++ Program to implement Affine Cipher. The affine cipher is a type of monoalphabetic substitution cipher, wherein each letter in an alphabet is mapped to its numeric equivalent, encrypted using a simple mathematical function, and converted back to a letter. The formula used means that each letter encrypts to one other letter, and back again, meaning the cipher is essentially a standard substitution cipher with a rule governing which letter goes to which. As such, it has the weaknesses of all substitution ciphers. Each letter is enciphered with the function (ax+b)mod(26), where b is the magnitude of the shift.*/

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
string encryptionMessage(string Msg)
{
    string CTxt = "";
    int a = 3;
    int b = 6;
    for (int i = 0; i < Msg.length(); i++)
        {
            CTxt = CTxt + (char) ((((a * Msg[i]) + b) % 26) + 65);
        }
    return CTxt;
}

string decryptionMessage(string CTxt)
{
    string Msg = "";
    int a = 3;
    int b = 6;
    int a_inv = 0;
    int flag = 0;
    for (int i = 0; i < 26; i++)
        {
            flag = (a * i) % 26;
            if (flag == 1)
                {
                    a_inv = i;
                }
        }
    for (int i = 0; i < CTxt.length(); i++)
        {
            Msg = Msg + (char) (((a_inv * ((CTxt[i] - b)) % 26)) + 65);
        }
    return Msg;
}
int main(int argc, char **argv)
{
    cout << "Enter the message: ";
    string message;
    cin >> message;
    cout << "Message is :" << message;
    cout << "\nEncrypted Message is : " << encryptionMessage(message);
    cout << "\nDecrypted Message is: " << decryptionMessage(
             encryptionMessage(message));
}


/*

Enter the message: SANFOUNDRY
Message is :SANFOUNDRY
Encrypted Message is : VTGIJBGCSN
Decrypted Message is: SANFOUNDRY