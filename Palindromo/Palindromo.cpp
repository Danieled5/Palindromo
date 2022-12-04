//Eduardo Daniel Perez Roman
//Palabra Palindroma


#include <iostream>
using namespace std;

int main() {
    char string1[20];
    int i, length;
    int flag = 0;

    cout << "Escribe una palabra para ver si es palindroma "; cin >> string1;

    length = strlen(string1);

    for (i = 0; i < length; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        cout << string1 << " No es palindroma" << endl;
    }
    else {
        cout << string1 << " Es Palindroma" << endl;
    }
    system("pause");

}

