#include<iostream>
#include<string>
using namespace std;

int main(){

    char msg[100], ch;

    int i, key, choice;
    cout<<"enter a message to encrypt: ";
    cin.getline(msg,100);

    cout<<"enter key: ";
    cin>>key;

    cout <<"enter your choice: \n1. Encryption \n2. Decryption \n";
    cin>>choice;

    if (choice == 1){
        char ch;
        for (i = 0; msg[i] != '\0'; ++i){
            ch = msg[i];

            if (ch >= 'a' && ch <= 'z'){
                ch = ch + key;
                if(ch>'z'){
                ch = ch - 'z' + 'a' -1;
            }
            msg[i] = ch;
            }

            else if (ch >= 'A' && ch <= 'Z'){
                ch = ch +key;
                if(ch >'Z'){
                    ch = ch - 'Z' + 'A' -1;
                }
                msg[i] = ch;
            }
        }

        cout << ("Encrypted message is : %s",msg);

    }

    else if (choice == 2){
        char ch;
        for (int i = 0; msg[i] != '\0'; ++i){
            ch = msg[i];
            if(ch >= 'a' && ch <= 'z'){
                ch = ch - key;
                if (ch <'a'){
                    ch = ch + 'z' - 'a' +1;
                }
                msg[i]=ch;
            }

            else if (ch >= 'A' && ch <= 'Z'){
                ch = ch - key;
                if (ch <'a'){
                    ch = ch + 'Z' - 'A' +1;
                }
                msg[i]=ch;
            }
        }

        cout << "Decrypted message is: "<<msg;
    }

}