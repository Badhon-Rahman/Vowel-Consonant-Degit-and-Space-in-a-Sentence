#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int vowel = 0;
    int consonent = 0;
    int digit = 0;
    int space = 0;
    int i = 0;

    cout << "Enter the String:";
    gets(str);

    for(i = 0; i < str[i] != '\0'; ++i){
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
           ++vowel;
        }
        else if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            ++consonent;
        }
        else if(str[i] == ' '){
            ++space;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            ++digit;
        }
    }
    cout << "Vowel:" << vowel << ", " << "Consonant:" << consonent << ", " << " Space:" << space << ", " << " Digit:" << digit << endl;
    return 0;
}
