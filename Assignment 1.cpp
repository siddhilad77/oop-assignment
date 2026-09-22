#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int price;

    void show()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;

    b.title = "The Alchemist";
    b.author = "Paulo Coelho";
    b.price = 350;

    b.show();

    return 0;
}
