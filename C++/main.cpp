#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;
    std::string genre;
    double price;
    bool isFiction;
    int pageCount;

public:
    Book(std::string title, std::string author, int publicationYear, std::string genre, double price, bool isFiction, int pageCount)
        : title(title), author(author), publicationYear(publicationYear), genre(genre), price(price), isFiction(isFiction), pageCount(pageCount) {}

    void displayInfo() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publication Year: " << publicationYear << std::endl;
        std::cout << "Genre: " << genre << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Is Fiction: " << (isFiction ? "Yes" : "No") << std::endl;
        std::cout << "Page Count: " << pageCount << std::endl;
    }

    bool isClassic() {
        return genre.compare("Classic") == 0;
    }

    void increasePageCount(int pagesToAdd) {
        pageCount += pagesToAdd;
        std::cout << pagesToAdd << " pages added to the book." << std::endl;
    }

    std::string getTitle() {
        return title;
    }

    void setTitle(std::string newTitle) {
        title = newTitle;
    }

    std::string getAuthor() {
        return author;
    }

    void setAuthor(std::string newAuthor) {
        author = newAuthor;
    }

    int getPublicationYear() {
        return publicationYear;
    }

    void setPublicationYear(int newPublicationYear) {
        publicationYear = newPublicationYear;
    }

    std::string getGenre() {
        return genre;
    }

    void setGenre(std::string newGenre) {
        genre = newGenre;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }

    bool isFictionStatus() {
        return isFiction;
    }

    void setFictionStatus(bool fictionStatus) {
        isFiction = fictionStatus;
    }

    int getPageCount() {
        return pageCount;
    }

    void setPageCount(int newPageCount) {
        pageCount = newPageCount;
    }
}; 

class Car {
private:
    std::string make;
    std::string model;
    int year;
    std::string color;
    double price;
    bool isAutomatic;
    bool isFourWheelDrive;

public:
    Car(std::string make, std::string model, int year, std::string color, double price, bool isAutomatic, bool isFourWheelDrive)
        : make(make), model(model), year(year), color(color), price(price), isAutomatic(isAutomatic), isFourWheelDrive(isFourWheelDrive) {}

    void displayInfo() {
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Color: " << color << std::endl;
        std::cout << "Price: " << price << std::endl;
        std::cout << "Is Automatic: " << (isAutomatic ? "Yes" : "No") << std::endl;
        std::cout << "Is Four Wheel Drive: " << (isFourWheelDrive ? "Yes" : "No") << std::endl;
    }

    bool isExpensive() {
        return price > 30000.0;
    }

    void paint(std::string newColor) {
        color = newColor;
        std::cout << "The car is now painted " << newColor << std::endl;
    }

    std::string getMake() {
        return make;
    }

    void setMake(std::string newMake) {
        make = newMake;
    }

    std::string getModel() {
        return model;
    }

    void setModel(std::string newModel) {
        model = newModel;
    }

    int getYear() {
        return year;
    }

    void setYear(int newYear) {
        year = newYear;
    }

    std::string getColor() {
        return color;
    }

    void setColor(std::string newColor) {
        color = newColor;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }

    bool isAutomaticTransmission() {
        return isAutomatic;
    }

    void setAutomaticTransmission(bool automatic) {
        isAutomatic = automatic;
    }

    bool isFourWheelDriveEnabled() {
        return isFourWheelDrive;
    }

    void setFourWheelDrive(bool fourWheelDrive) {
        isFourWheelDrive = fourWheelDrive;
    }
};

class Person {
private:
    std::string name;
    int age;
    std::string address;
    std::string email;
    std::string phoneNumber;
    std::string occupation;
    bool isStudent;
    bool isEmployed;

public:
    Person(std::string name, int age, std::string address, std::string email, std::string phoneNumber, std::string occupation, bool isStudent, bool isEmployed)
        : name(name), age(age), address(address), email(email), phoneNumber(phoneNumber), occupation(occupation), isStudent(isStudent), isEmployed(isEmployed) {}

    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Address: " << address << std::endl;
        std::cout << "Email: " << email << std::endl;
        std::cout << "Phone Number: " << phoneNumber << std::endl;
        std::cout << "Occupation: " << occupation << std::endl;
        std::cout << "Student: " << (isStudent ? "Yes" : "No") << std::endl;
        std::cout << "Employed: " << (isEmployed ? "Yes" : "No") << std::endl;
    }

    bool isAdult() {
        return age >= 18;
    }

    void updateContactInfo(std::string newEmail, std::string newPhoneNumber) {
        email = newEmail;
        phoneNumber = newPhoneNumber;
    }

    std::string getName() {
        return name;
    }

    void setName(std::string newName) {
        name = newName;
    }

    int getAge() {
        return age;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    std::string getAddress() {
        return address;
    }

    void setAddress(std::string newAddress) {
        address = newAddress;
    }

    std::string getEmail() {
        return email;
    }

    void setEmail(std::string newEmail) {
        email = newEmail;
    }

    std::string getPhoneNumber() {
        return phoneNumber;
    }

    void setPhoneNumber(std::string newPhoneNumber) {
        phoneNumber = newPhoneNumber;
    }

    std::string getOccupation() {
        return occupation;
    }

    void setOccupation(std::string newOccupation) {
        occupation = newOccupation;
    }

    bool isStudentStatus() {
        return isStudent;
    }

    void setStudentStatus(bool studentStatus) {
        isStudent = studentStatus;
    }

    bool isEmployedStatus() {
        return isEmployed;
    }

    void setEmployedStatus(bool employedStatus) {
        isEmployed = employedStatus;
    }
};


int main() {
    Person person("John Doe", 30, "123 Main St", "john@example.com", "123-456-789", "Software Engineer", false, true);
    Car car("Toyota", "Camry", 2022, "Silver", 25000.0, true, false);
    Book book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Classic", 9.99, true, 180);

    person.displayInfo();
    person.isAdult();
    person.updateContactInfo("john2@example.com", "600-100-100");
    std::cout << std::endl;

    car.displayInfo();
    car.isExpensive();
    car.paint("Red");
    std::cout << std::endl;

    book.displayInfo();
    book.isClassic();
    book.increasePageCount(10);

    return 0;
}
