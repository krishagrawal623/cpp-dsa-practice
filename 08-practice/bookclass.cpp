#include <iostream>
using namespace std;



class Book {
private:
    string title;
    string author;
    int bookID;
    bool isIssued;
    float price;

public:
    
    Book(string t, string a, int id,float p) {
        title = t;
        author = a;
        bookID = id;
        price = p;
        isIssued = false;
    }

   
    void issueBook() {
        if (!isIssued) {
            isIssued = true;
            cout << "Book issued successfully\n";
        } else {
            cout << "Book is already issued\n";
        }
    }

    
    void returnBook() {
        if (isIssued) {
            isIssued = false;
            cout << "Book returned successfully\n";
        } else {
            cout << "Book was not issued\n";
        }
    }

    
    void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Status: " << (isIssued ? "Issued" : "Available") << endl;
        cout << "Price: " << price << endl;
    }

    float getPrice() {
    return price;
}

static Book maxPriceBook(Book books[], int n) {
    Book maxBook = books[0];

    for (int i = 1; i < n; i++) {
        if (books[i].price > maxBook.price) {
            maxBook = books[i];
        }
    }

    return maxBook;
}
};

int main() {
    Book b1("Harry Potter", "J.K. Rowling", 101,850);
    Book b2("Atomic Habits", "James Clear", 102, 900);
    Book b3("subconcious mind", "Joseph morphy", 103, 950);

    b1.display();
    cout << "\n";

    b2.display();
    cout << "\n";

    b3.display();
    cout << "\n";

    b1.issueBook();
    b1.display();
    cout << "\n";


    b1.returnBook();
    b1.display();
    cout << "\n";

    Book books[] = {b1, b2, b3};

   Book maxBook = Book::maxPriceBook(books, 3);
   cout << "\nMaximum price book:\n";
   maxBook.display();

    return 0;
}