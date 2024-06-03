// Final Project
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    string publisher;
    int publicationYear;
    string genre;

public:
    string getTitle() {
        return title;
    }

    void setTitle(string t) {
        title = t;
    }

    string getAuthor() {
        return author;
    }

    void setAuthor(string auth) {
        author = auth;
    }

    string getISBN() {
        return ISBN;
    }

    void setISBN(int IS) {
        ISBN = IS;
    }

    string getPublisher() {
        return publisher;
    }

    void setPublisher(string pub) {
        publisher = pub;
    }

    int getPublicationYear() {
        return publicationYear;
    }

    void setPublicationYear(int publyear) {
        publicationYear = publyear;
    }

    string getGenre() {
        return genre;
    }

    void setGenre(string g) {
        genre = g;
    }

    void displayDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        // cout << "ISBN: " << ISBN << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Publication Year: " << publicationYear << endl;
        cout << "Genre: " << genre << endl;
    }
};
// Class 2
class User {
private:
    string name;
    string email;
    string username;
    string password;

public:
    string getName() {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    string getEmail() {
        return email;
    }

    void setEmail(string e) {
        email = e;
    }

    string getUsername() {
        return username;
    }

    void setUsername(string user_name) {
        username = user_name;
    }

    string getPassword() {
        return password;
    }

    void setPassword(string p1) {
        password = p1;
    }

    void borrowBook(Book book) {
        // Code to borrow book
    }

    void reserveBook(Book book) {
        // Code to reserve book
    }

    void payFine(float amount) {
        // Code to pay fine
    }
};
// class 3
class Library {
private:
    string name;
    string address;
    int phoneNumber;

public:
    string getName() {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    string getAddress() {
        return address;
    }

    void setAddress(string ad) {
        address = ad;
    }

    int getPhoneNumber() {
        return phoneNumber;
    }

    void setPhoneNumber(int phone) {
        phoneNumber = phone;
    }

    void addBook(Book book) {
        // Code to add book to inventory
    }

    void removeBook(Book book) {
        // Code to remove book from inventory
    }
};

// class 4
class Inventory {
private:
    vector<Book> books;

public:
    void addBook(Book book) {
        books.push_back(book);
    }

    void removeBook(Book book) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getTitle() == book.getTitle() && books[i].getAuthor() == book.getAuthor() && books[i].getISBN() == book.getISBN()) {
                books.erase(books.begin() + i);
                break;
            }
        }
    }

    void updateBook(Book book) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].getTitle() == book.getTitle() && books[i].getAuthor() == book.getAuthor() && books[i].getISBN() == book.getISBN()) {
                books[i] = book;
                break;
            }
        }
    }
};

// class 5
class Loan {
private:
    User user;
    Book book;
    string dateOfLoan;
    string dueDate;
    float fineAmount;

public:


    User getUser() {
        return user;
    }

    void setUser(User u) {
        user = u;
    }

    Book getBook() {
        return book;
    }

    void setBook(Book b) {
        book = b;
    }

    string getDateOfLoan() {
        return dateOfLoan;
    }

    void setDateOfLoan(string d1) {
        dateOfLoan = d1;
    }

    string getDueDate() {
        return dueDate;
    }

    void setDueDate(string d2) {
        dueDate = d2;
    }

    float getFineAmount() {
        return fineAmount;
    }

    void setFineAmount(float f) {
        fineAmount = f;
    }

    // void calculateFine(string returnDate) {

    // }
};
// class 6
class Reservation {
private:
    User user;
    Book book;
    string dateOfReservation;

public:
    User getUser() {
        return user;
    }

    void setUser(User u) {
        user = u;
    }

    Book getBook() {
        return book;
    }

    void setBook(Book b) {
        book = b;
    }

    string getDateOfReservation() {
        return dateOfReservation;
    }

    void setDateOfReservation(string d) {
        dateOfReservation = d;
    }
};

// class 7
class Fine {
private:
    User user;
    // float amount;
    string dateOfPayment;

public:
    User getUser() {
        return user;
    }

    void setUser(User u) {
        user = u;
    }

    // float getAmount() {
    //     return amount;
    // }

    // void setAmount(float a) {
    //     amount = a;
    // }

    string getDateOfPayment() {
        return dateOfPayment;
    }

    void setDateOfPayment(string d) {
        dateOfPayment = d;
    }
};

// class 8
class BookCopy {
private:
    int copy_id;
    Book book;
    bool is_available;

public:
    int get_copy_id() {
        return copy_id;
    }

    void set_copy_id(int cd) {
        copy_id = copy_id;
    }

    Book get_book() {
        return book;
    }

    void set_book(Book b) {
        book = b;
    }

    bool get_is_available() {
        return is_available;
    }

    void set_is_available(bool ia) {
        is_available = ia;
    }

    bool borrow() {
        if (is_available) {
            is_available = false;
            return true;
        }
        else {
            return false;
        }
    }

    bool reserve() {
        if (is_available) {
            is_available = false;
            return true;
        }
        else {
            return false;
        }
    }

    bool return_copy() {
        if (!is_available) {
            is_available = true;
            return true;
        }
        else {
            return false;
        }
    }
};


// class 9
class Author {
private:
    string name;
    string biography;
    string website;

public:
    // Getter methods
    string getName() {
        return name;
    }

    string getBiography() {
        return biography;
    }

    string getWebsite() {
        return website;
    }

    // Setter methods
    void setName(string newName) {
        name = newName;
    }

    void setBiography(string newBiography) {
        biography = newBiography;
    }

    void setWebsite(string newWebsite) {
        website = newWebsite;
    }

    // Display author's information
    void displayInfo() const {
        cout << "Author Name: " << name << endl;
        cout << "Biography: " << biography << endl;
        // cout << "Website: " << website <<endl;
    }
};

// class 10
class Review {
private:
    User user;
    Book book;
    int rating;
    string reviewText;

public:
    User getUser() {
        return user;
    }

    User setUser(User u) {
        user = u;
    }

    Book getBook() {
        return book;
    }

    Book setBook(Book b) {
        book = b;
    }

    int getRating() {
        return rating;
    }

    void setRating(int r) {
        rating = r;
    }

    string getReviewText() {
        return reviewText;
    }

    void setReviewText(string r) {
        reviewText = r;
    }
};
// class 11
class Genre {
private:
    string name;
    string description;

public:
    string getName() {
        return name;
    }

    string setName(string n) {
        name = n;
    }

    string getDescription() {
        return description;
    }

    void setDescription(string d) {
        description = d;
    }
};

// class 12
class Search {
public:
    vector<Book> searchByTitle(vector<Book>& books, string title) {
        vector<Book> results;
        for (auto book : books) {
            if (book.getTitle() == title) {
                results.push_back(book);
            }
        }
        return results;
    }

    vector<Book> searchByAuthor(vector<Book>& books, string author) {
        vector<Book> results;
        for (auto book : books) {
            if (book.getAuthor() == author) {
                results.push_back(book);
            }
        }
        return results;
    }

    vector<Book> searchByGenre(vector<Book>& books, string genre) {
        vector<Book> results;
        for (auto book : books) {
            if (book.getGenre() == genre) {
                results.push_back(book);
            }
        }
        return results;
    }

    vector<Book> searchByISBN(vector<Book>& books, string ISBN) {
        vector<Book> results;
        for (auto book : books) {
            if (book.getISBN() == ISBN) {
                results.push_back(book);
            }
        }
        return results;
    }

    vector<Book> searchByMultipleCriteria(vector<Book>& books, string title, string author, string genre, string ISBN) {
        vector<Book> results;
        for (auto book : books) {
            if ((title.empty() || book.getTitle() == title) &&
                (author.empty() || book.getAuthor() == author) &&
                (genre.empty() || book.getGenre() == genre) &&
                (ISBN.empty() || book.getISBN() == ISBN)) {
                results.push_back(book);
            }
        }
        return results;
    }
};

// class 13
class Feedback {
private:
    int UserID;
    int rating;
    string comments;
public:
    int getUserID() {
        return UserID;
    }
    void setUserID(int UG) {
        UserID = UG;
    }
    int getRating() {
        return rating;
    }
    string getComments() {
        return comments;
    }
    void setRating(int rate) {
        rating = rate;
    }
    void setComments(string com) {
        comments = com;
    }
};

// class 14
class Publisher {
private:
    string name;
    string address;
    string phoneNumber;

public:
    // Getter methods
    string getName() {
        return name;
    }

    // string getAddress(){
    //     return address;
    // }

    // string getPhoneNumber(){
    //     return phoneNumber;
    // }

    // Setter methods
    void setName(string newName) {
        name = newName;
    }

    // void setAddress(string newAddress){
    //     address = newAddress;
    // }

    // void setPhoneNumber(string newPhoneNumber){
    //     phoneNumber = newPhoneNumber;
    // }

    // Other functionality
    void printDetails() {
        cout << "Publisher Details" << endl;
            cout << "Name: " << name << endl;
        // cout << "Address: " << address << endl;
        // cout << "Phone Number: " << phoneNumber <<endl;
    }
};

int main() {
    // Books
    Book x1;
    x1.setTitle("Rich Dad Poor Dad");
    x1.setAuthor("Robert Kiyosaki");
    // x1.setISBN(9783862486328);
    x1.setPublisher("Warner Books");
    x1.setPublicationYear(1997);
    x1.setGenre("Personal Finance");
    // x1.displayDetails();
    Book x2;
    x2.setTitle("Atomic Habits");
    x2.setAuthor("James Clear");
    // x2.setISBN(8550807567);
    x2.setPublisher("Avery");
    x2.setPublicationYear(2018);
    x2.setGenre("Self-help book");
    // x2.displayDetails();
    Book x3;
    x3.setTitle("Textbook of Information Technology");
    x3.setAuthor("S.k.bansal");
    // x3.setISBN(9788176486057);
    x3.setPublisher("APH Publishing Corporation");
    x3.setPublicationYear(2004);
    x3.setGenre("nonfiction");
    // x3.displayDetails();
    Book x4;
    x4.setTitle("The Subtle Art of Not Giving a F*ck");
    x4.setAuthor("Mark Manson");
    // x4.setISBN(9783961210589);
    x4.setPublisher("HarperOne");
    x4.setPublicationYear(2016);
    x4.setGenre("Self-help book");
    // x4.displayDetails();
    Book x5;
    x5.setTitle("the wings of the dove henry james");
    x5.setAuthor("Henry James");
    // x5.setISBN(9788176486057);
    x5.setPublisher("Archibald Constable & Co., London");
    x5.setPublicationYear(1902);
    x5.setGenre("noval");
    // x5.displayDetails();

// ===================================================================
// El t3refat
    User user;
    string u_name;
    string u_email;
    string u_username;
    string u_password;
    Library l;
    string l_name;
    string l_address;
    string l_phonenumber;
    Book book1;
    Book book2;
    Book bookplus;
    Loan loan;
    int choice1;
    string dateOfloan;
    float month1;
    string DueDate;
    int month2;
    float fineAmount;
    Reservation reservation;
    string dayOfReservation;
    Fine fine;
    Author author1;
    Author author2;
    Author author3;
    Author author4;
    Author author5;
    Review review;
    Genre g1;
    Genre g2;
    Genre g3;
    Genre g4;
    Genre g5;
    int choice4;
    Feedback feedback;
    int id;
    int r;
    string com;
    Inventory inventory;
    Book book_add;
    string bookadd;
    int choice5;
    Book book_remove;
    Book bookremove;
    BookCopy BC1;
    BC1.set_book(x1);
    int copy_numbers1;
    BookCopy BC2;
    BC2.set_book(x2);
    int copy_numbers2;
    BookCopy BC3;
    BC3.set_book(x3);
    int copy_numbers3;
    BookCopy BC4;
    BC4.set_book(x4);
    int copy_numbers4;
    BookCopy BC5;
    BC5.set_book(x5);
    int copy_numbers5;
    int choice6;
    Publisher publisher1;
    Publisher publisher2;
    Publisher publisher3;
    Publisher publisher4;
    Publisher publisher5;
    int choice9;
    int choice8;
    // ==========================================================================
    cout << "How Many Things you want to do" << endl;
    int things1;
    cin >> things1;
    for (int i = 0; i < things1; i++) {
        int option;
        cout << "Please choose an option:\n";
        cout << "1. Option 1 for (Sign In)\n";
        cout << "2. Option 2 for (Making a Library)\n";
        cout << "3. Option 3 for (Loan)\n";
        cout << "4. Option 4 for (Reservation)\n";
        cout << "5. Option 5 for (Fine)\n";
        cout << "6. Option 6 for (Authors)\n";
        cout << "7. Option 7 for (Review)\n";
        cout << "8. Option 8 for (Genre)\n";
        cout << "9. Option 9 for (FeedBack)\n";
        cout << "10. Option 10 for (Inventory)\n";
        cout << "11. Option 11 for (BookCopy)\n";
        cout << "12. Option 12 for (Showing the books)\n";
        cout << "13. Option 13 for (Publisher)\n";
        cout << "Enter your choice (1-11):";
        cin >> option;

        switch (option) {
        case 1:
            //  User
            // User user;
            // string u_name;
            cout << "Enter your name" << endl;
            cin >> u_name;
            user.setName(u_name);

            // string u_email;
            cout << "Enter your email" << endl;
            cin >> u_email;
            user.setEmail(u_email);

            // string u_username;
            cout << "Enter your user name" << endl;
            cin >> u_username;
            user.setUsername(u_username);

            // string u_password;
            cout << "Enter your password" << endl;
            cin >> u_password;
            user.setPassword(u_password);

            cout << "You are singd successfully" << endl;
            break;
        case 2:
            // Library
                // Library l;
                // string l_name;
            cout << "Enter Library Name" << endl;
            cin >> l_name;
            l.setName(l_name);

            // string l_address;
            cout << "Enter Library address" << endl;
            cin >> l_address;
            l.setName(l_address);

            // string l_phonenumber;
            cout << "Enter Library phonenumber" << endl;
            cin >> l_phonenumber;
            l.setName(l_phonenumber);
            break;
            // case 3:
            //     // Book book1;
            //     // Book book2;
            //     // Book bookplus;
            //     cout<<"Name the book you want to add"<<endl;
            //     cin>>bookplus;
            //     book1.setTitle(bookplus);
            //     inventory.addBook(book1);
            //     // // add some books to the inventory
            //     // int choice2;
            //     // cout << "Please choose an option:\n";
            //     // cout << "1. Option 1 for (Adding a book)\n";
            //     // cout << "2. Option 2 for (Removing a book)\n";
            //     // // cout << "3. Option 3 for (U)\n";
            //     // cout << "Enter your choice (1-2): ";
            //     // cin >> choice2;

            //     // switch(choice2) {
            //     //     case 1:
            //     //         Book book1;
            //     //         Book bookadd;
            //     //         cout<<"Name the book you want to add"<<endl;
            //     //         cin>>bookadd;
            //     //         book1.setTitle(bookadd);
            //     //         inventory.addBook(book1);
            //     //         cout<<"The book has been added successfully"<<endl;
            //     //         break;
            //     //     case 2:
            //     //         Book book2;
            //     //         Book bookremove;
            //     //         cout<<"Name the book you want to remove"<<endl;
            //     //         cin>>bookremove;
            //     //         book2.setTitle(bookremove);
            //     //         inventory.removeBook(book2);
            //     //         cout<<"The book has been removed successfully"<<endl;
            //     //         break;
            //     //     default:
            //     //         cout << "Invalid choice!";
            //     //         break;
            //     // }
            //     break;
        case 3:
            // Loan loan;
            // int choice1;
            cout << "Please choose an option:\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";
            cout << "Enter your choice (1-5): ";
            cin >> choice1;

            switch (choice1) {
            case 1:
                x1.displayDetails();
                break;
            case 2:
                x2.displayDetails();
                break;
            case 3:
                x3.displayDetails();
                break;
            case 4:
                x4.displayDetails();
                break;
            case 5:
                x5.displayDetails();
                break;
            default:
                cout << "Invalid choice!";
                break;
            }

            cout << "This user :" << user.getName() << "\n" << "want to borrow a book" << endl;
            loan.setUser(user);

            // 	string dateOfloan;
            cout << "Enter The date of loan" << endl;
            cin >> dateOfloan;
            loan.setDateOfLoan(dateOfloan);
            cout << "Enter month of loan" << endl;
            // float month1;
            cin >> month1;

            // string DueDate;
            cout << "Enter the due date" << endl;
            cin >> DueDate;
            loan.setDueDate(DueDate);
            cout << "Enter month of due date" << endl;
            // int month2;
            cin >> month2;

            // float fineAmount;
            fineAmount = (month1 / month2) + 20;
            loan.setFineAmount(fineAmount);
            cout << "Fine Amount = " << fineAmount << endl;
            break;
        case 4:
            // Reservation reservation;
            // string dayOfReservation;
            int choice2;
            cout << "Please choose an option:\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";
            cout << "Enter your choice (1-5): ";
            cin >> choice2;

            switch (choice2) {
            case 1:
                x1.getTitle();
                break;
            case 2:
                x2.getTitle();
                break;
            case 3:
                x3.getTitle();
                break;
            case 4:
                x4.getTitle();
                break;
            case 5:
                x5.getTitle();
                break;
            default:
                cout << "Invalid choice!";
                break;
            }
            cout << "This user :" << user.getName() << "\n" << "want to Reserve a book" << endl;
            reservation.setUser(user);
            cout << "Please enter the day of Reservation" << endl;
            cin >> dayOfReservation;
            reservation.setDateOfReservation(dayOfReservation);
            reservation.getDateOfReservation();
            cout << "The book Reserved successfully" << endl;

            break;
        case 5:
            // Fine
            // Fine fine;
            cout << "=====================YOUR FINE=======================" << endl;
            cout << "Your Name:" << user.getName() << endl;
            fine.setDateOfPayment(dateOfloan);
            fine.getDateOfPayment();
            cout << "Fine Amount = " << fineAmount << endl;
            break;
        case 6:
            // Author 
            // Author author1;
            author1.setName("Robert Kiyosaki");
            // author1.getBiography("");

            // Author author2;
            author2.setName("James Clear");
            // author2.getBiography("");

            // Author author3;
            author3.setName("S.k.bansal");
            // author3.getBiography("");

            // Author author4;
            author4.setName("Mark Manson");
            // author4.getBiography("");

            // Author author5;
            author5.setName("Henry James");
            // author5.getBiography("");

            break;
        case 7:
            // Review
            // Review review;
            review.setUser(user);
            int choice3;
            cout << "Please choose The book you want to see rate:\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";
            cout << "Enter your choice (1-5): ";
            cin >> choice3;

            switch (choice3) {
            case 1:
                x1.getTitle();
                cout << "4.7" << endl;
                break;
            case 2:
                x2.getTitle();
                cout << "4.8" << endl;
                break;
            case 3:
                x3.getTitle();
                cout << "4.4" << endl;
                break;
            case 4:
                x4.getTitle();
                cout << "4.6" << endl;
                break;
            case 5:
                x5.getTitle();
                cout << "3.8" << endl;
                break;
            default:
                cout << "Invalid choice!";
                break;
            }

            break;
        case 8:
            // Book Genre
            // Genre g1;
            // Genre g2;
            // Genre g3;
            // Genre g4;
            // Genre g5;
            // int choice4;
            cout << "Please choose The Book you want to know its Genre\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";
            cout << "Enter your choice (1-5): ";
            cin >> choice4;

            switch (choice4) {
            case 1:
                x1.getGenre();
                g1.setName("Rich Dad Poor Dad");
                g1.setDescription("Personal Finance");
                break;
            case 2:
                x2.getGenre();
                g2.setName("Atomic Habits");
                g2.setDescription("Self-help book");
                break;
            case 3:
                x3.getGenre();
                g3.setName("Textbook of Information Technology");
                g3.setDescription("nonfiction");
                break;
            case 4:
                x4.getGenre();
                g4.setName("The Subtle Art of Not Giving a F*ck");
                g4.setDescription("Self-help book");
                break;
            case 5:
                x5.getGenre();
                g5.setName("the wings of the dove henry james");
                g5.setDescription("noval");
                break;
            default:
                cout << "Invalid choice!";
                break;
            }
            break;
            // case 9:
            // Search
            // // Search
            // Book book1;
            // Book book_search;
            // cout<<"Name the book you want to add"<<endl;
            // cin>>book_search;
            // Search search;
            // // vector<Book>books;
            // // cout<<"Enter Book You Want To Search"<<endl;
            // // string SearhForBookByName;
            // // cin>>SearhForBookByName;
            // // search the books by title
            // vector<Book> results = search.searchByTitle(books, "Atomic Habits");

            // // print the search results
            // for (auto books : results) {
            //     books.displayDetails();
            // }

            // books.push_back(x1);
            // books.push_back(x2);
            // books.push_back(x3);
            // books.push_back(x4);
            // books.push_back(x5);
            // // books.searchByTitle(books,"moahmeed");
            // break;
        case 9:
            // Feedback feedback;
            cout << "Now Please give us your feedbac for this book" << endl;
            // int id;
            // int r;
            // string com;
            cout << "Please enter your id: ";
            cin >> id;
            feedback.setUserID(id);
            cout << "Please enter your rating from 1 to 5: ";
            cin >> r;
            feedback.setRating(r);
            while (!((r >= 1) && (r <= 5))) {
                cout << "enter true rating" << "\n";
                cin >> r;
            }
            //to take sentences
            cin.ignore(); // to consume the newline character left by cin >>
            cout << "If you have any comments, please write them here: ";
            cin >> com;
            feedback.setComments(com);
            cout << "Thank you for your feedback!" << endl;
            break;
        // case 10:
        //     // Inventory inventory;
        //     // int choice5;
        //     cout << "Please choose an option:\n";
        //     cout << "1. Option 1 for (Adding a book)\n";
        //     cout << "2. Option 2 for (Removing a book)\n";
        //     // cout << "3. Option 3 for (U)\n";
        //     cout << "Enter your choice (1-2): ";
        //     cin >> choice5;

        //     switch (choice5) {
        //         case 1:
        //             // Book book1;
        //             // string bookadd;
        //             cout << "Name the book you want to add" << endl;
        //             cin >> bookadd;
        //             book1.setTitle(bookadd);
        //             inventory.addBook(book1);
        //             cout << "The book has been added successfully" << endl;
        //             break;
        //         case 2:
        //             // Book book2;
        //             string bookremove;
        //             cout << "Name the book you want to remove" << endl;
        //             cin >> bookremove;
        //             book2.setTitle(bookremove);
        //             inventory.removeBook(book2);
        //             cout << "The book has been removed successfully" << endl;
        //             break;
        //         default:
        //             cout << "Invalid choice!";
        //             break;
        //         }
        //         break;
        case 11:
            // int choice6;
            cout << "Please choose The Book you want to know if it is availble or not\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";
            cout << "Enter your choice (1-5): ";

            cin >> choice6;
            // BookCopy BC1;
            // BC1.set_book(x1);
            // int copy_numbers1;
            // BookCopy BC2;
            // BC2.set_book(x2);
            // int copy_numbers2;
            // BookCopy BC3;
            // BC3.set_book(x3);
            // int copy_numbers3;
            // BookCopy BC4;
            // BC4.set_book(x4);
            // int copy_numbers4;
            // BookCopy BC5;
            // BC5.set_book(x5);
            // int copy_numbers5;
            switch (choice6) {
            case 1:
                // BookCopy BC1;
                // BC1.set_book(x1);
                // int copy_numbers1;
                cout << "How many copies do you have" << endl;
                cin >> copy_numbers1;
                BC1.set_copy_id(copy_numbers1);
                // for (int q=0 ; q<copy_numbers1;q++)
                if (copy_numbers1 > 0) {
                    BC1.set_is_available(true);
                    BC1.borrow();
                    cout << "is available" << endl;
                }
                else {
                    BC1.set_is_available(false);
                    BC1.borrow();
                    cout << "is not available" << endl;
                }
                break;
            case 2:
                // BookCopy BC2;
                // BC2.set_book(x2);
                // int copy_numbers2;
                cout << "How many copies do you have" << endl;
                cin >> copy_numbers2;
                BC2.set_copy_id(copy_numbers2);
                // for (int q=0 ; q<copy_numbers2;q++)
                if (copy_numbers2 > 0) {
                    BC2.set_is_available(true);
                    BC2.borrow();
                    cout << "is available" << endl;
                }
                else {
                    BC2.set_is_available(false);
                    BC2.borrow();
                    cout << "is not available" << endl;
                }
                break;
            case 3:
                // BookCopy BC3;
                // BC3.set_book(x3);
                // int copy_numbers3;
                cout << "How many copies do you have" << endl;
                cin >> copy_numbers3;
                BC3.set_copy_id(copy_numbers3);
                // for (int q=0 ; q<copy_numbers3;q++)
                if (copy_numbers3 > 0) {
                    BC3.set_is_available(true);
                    BC3.borrow();
                    cout << "is available" << endl;
                }
                else {
                    BC3.set_is_available(false);
                    BC3.borrow();
                    cout << "is not available" << endl;
                }
                break;
            case 4:
                // BookCopy BC4;
                // BC4.set_book(x4);
                // int copy_numbers4;
                cout << "How many copies do you have" << endl;
                cin >> copy_numbers4;
                BC4.set_copy_id(copy_numbers4);
                // for (int q=0 ; q<copy_numbers4;q++)
                if (copy_numbers4 > 0) {
                    BC4.set_is_available(true);
                    BC4.borrow();
                    cout << "is available" << endl;
                }
                else {
                    BC4.set_is_available(false);
                    BC4.borrow();
                    cout << "is not available" << endl;
                }
                break;
            case 5:
                // BookCopy BC5;
                // BC5.set_book(x5);
                // int copy_numbers5;
                cout << "How many copies do you have" << endl;
                cin >> copy_numbers5;
                BC5.set_copy_id(copy_numbers5);
                // for (int q=0 ; q<copy_numbers5;q++)
                if (copy_numbers5 > 0) {
                    BC5.set_is_available(true);
                    BC5.borrow();
                    cout << "is available" << endl;
                }
                else {
                    BC5.set_is_available(false);
                    BC5.borrow();
                    cout << "is not available" << endl;
                }
                break;
            default:
                cout << "Invalid choice!";
                break;
            }
            break;
        case 12:
            //int choice8;
            cout << "Please choose The Book you want to read\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";
            cout << "Enter your choice (1-5): ";
            cin >> choice8;
            switch (choice8) {
            case 1:
                x1.displayDetails();
                break;
            case 2:
                x2.displayDetails();
                break;
            case 3:
                x3.displayDetails();
                break;
            case 4:
                x4.displayDetails();
                break;
            case 5:
                 x5.displayDetails();
                break;
            default:
                cout << "Invalid choice!";
                break;
            //default:
              //  cout << "Invalid choice!";
                //break;
            }
        case 13:
          //  int choice9;
            cout << "Please choose The Book you want to know its publisher\n";
            cout << "1. Option 1 for (Rich Dad Poor Dad)\n";
            cout << "2. Option 2 for (Atomic Habits)\n";
            cout << "3. Option 3 for (Textbook of Information Technology)\n";
            cout << "4. Option 4 for (The Subtle Art of Not Giving a F*ck)\n";
            cout << "5. Option 5 for (the wings of the dove henry james)\n";                cout << "Enter your choice (1-5): ";
            cin >> choice9;
            switch (choice9) {
            case 1:
                publisher1.setName("Warner Books");
                break;
            case 2:
                publisher2.setName("Avery");
                break;
            case 3:
                publisher3.setName("APH Publishing Corporation");
                break;
            case 4:
                publisher4.setName("HarperOne");
                break;
            case 5:
                publisher5.setName("Archibald Constable & Co., London");
                break;
            default:
                cout << "Invalid choice!";
                break;
            }
            default:
                cout << "Invalid choice!";
                break;
            }
        }
}
