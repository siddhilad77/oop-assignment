#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string bookName;
    string bookAuthor;
    int bookPrice;

    // Default constructor
    Book()
    {
        bookName = "Unknown";
        bookAuthor = "Unknown";
        bookPrice = 0;
    }

    // Parameterized constructor
    Book(string n, string a, int p)
    {
        bookName = n;
        bookAuthor = a;
        bookPrice = p;
    }

    void display()
    {
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << bookAuthor << endl;
        cout << "Price: " << bookPrice << endl;
    }
};

int main()
{
    Book b1;

    Book b2("Rich Dad Poor Dad", "Robert Kiyosaki", 450);

    cout << "Book 1 Details:" << endl;
    b1.display();

    cout << "\nBook 2 Details:" << endl;
    b2.display();

    return 0;
}
