#include <iostream>
#include <string>

using namespace std;

int Count(const string s, char c) // кількість символів c у рядку
{
    int k = 0;
    size_t pos = 0; // size_t - ціле число без знака
    while ((pos = s.find(c, pos)) != -1) // шукаєм с в рядку s перевіряючи чи шось знайшли
    {
        pos++;
        k++;
    }

    return k;
}

string Change(string& s) // заміна кожного слова "BASIC" на "Delphi"
{
    size_t pos = 0;
    while ((pos = s.find("BASIC", pos)) != -1) // шукаєм слово в рядку s перевіряючи чи шось знайшли
    {
        s.replace(pos, 5, "Delphi"); // заміна
        pos += 6;
    }

    return s;
}

int main()
{
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "B : " << Count(str, 'B') << endl;
    cout << "A : " << Count(str, 'A') << endl;
    cout << "S : " << Count(str, 'S') << endl;
    cout << "I : " << Count(str, 'I') << endl;
    cout << "C : " << Count(str, 'C') << endl;

    string dest = Change(str);

    cout << "Modified string: " << dest << endl;

    return 0;
}
