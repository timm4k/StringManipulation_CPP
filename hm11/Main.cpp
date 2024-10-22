#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//task 1
void task1() {
    cout << "task1" << endl;
    string str;
    int index;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the index of the character to remove (0-" << str.length() - 1 << "): ";
    cin >> index;
    cin.ignore();

    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
        cout << "Result: " << str << endl;
    }
    else {
        cout << "Invalid index" << endl;
    }
}

//task 2
void task2() {
    cout << "task2" << endl;
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to remove: ";
    cin >> ch;
    cin.ignore();

    str.erase(remove(str.begin(), str.end(), ch), str.end());
    cout << "Result: " << str << endl;
}

//task 3
void task3() {
    cout << "task3" << endl;
    string str;
    char ch;
    int position;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to insert: ";
    cin >> ch;
    cout << "Enter the position to insert (0-" << str.length() << "): ";
    cin >> position;
    cin.ignore();

    if (position >= 0 && position <= str.length()) {
        str.insert(position, 1, ch);
        cout << "Result: " << str << endl;
    }
    else {
        cout << "Invalid position" << endl;
    }
}

//task 4
void task4() {
    cout << "task4" << endl;
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    replace(str.begin(), str.end(), '.', '!');
    cout << "Result: " << str << endl;
}

//task 5
void task5() {
    cout << "task5" << endl;
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter the character to search for: ";
    cin >> ch;
    cin.ignore();

    count = count_if(str.begin(), str.end(), [ch](char c) { return c == ch; });
    cout << "The character '" << ch << "' appears " << count << " times." << endl;
}

//task 6
void task6() {
    cout << "task6" << endl;
    string str;
    int letters = 0, digits = 0, others = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else {
            others++;
        }
    }

    cout << "Num of letters: " << letters << endl;
    cout << "Num of digits: " << digits << endl;
    cout << "Num of other characters: " << others << endl;
}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();

    return 0;
}
