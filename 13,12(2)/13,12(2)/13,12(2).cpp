#include <iostream>
#include <cstring>

class MyString {
private:
    char* str;
    int size;
    static int count;

public:
    MyString() : str(new char[80]), size(80) {
        count++;
    }

    MyString(int length) : str(new char[length]), size(length) {
        count++;
    }

    MyString(const char* s) : str(new char[strlen(s) + 1]), size(strlen(s)) {
        strcpy(str, s);
        count++;
    }

    void inputString() {
        std::cout << "Enter a string: ";
        std::cin.getline(str, size);
    }

    void displayString() const {
        std::cout << "String: " << str << std::endl;
    }

    ~MyString() {
        delete[] str;
        count--;
    }

    static int getCount() {
        return count;
    }
};

int MyString::count = 0;

int main() {
    MyString defaultString;
    defaultString.displayString();

    MyString customSizeString(50);
    customSizeString.inputString();
    customSizeString.displayString();

    MyString initializedString("Hello, World!");
    initializedString.displayString();

    std::cout << "Number of MyString objects created: " << MyString::getCount() << std::endl;

    return 0;
}
