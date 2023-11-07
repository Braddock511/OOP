class Person {
    private name: string;
    private age: number;
    private address: string;
    private email: string;
    private phoneNumber: string;
    private occupation: string;
    private isStudent: boolean;
    private isEmployed: boolean;

    constructor(name: string, age: number, address: string, email: string, phoneNumber: string, occupation: string, isStudent: boolean, isEmployed: boolean) {
        this.name = name;
        this.age = age;
        this.address = address;
        this.email = email;
        this.phoneNumber = phoneNumber;
        this.occupation = occupation;
        this.isStudent = isStudent;
        this.isEmployed = isEmployed;
    }

    displayInfo(): void {
        console.log("Name: " + this.name);
        console.log("Age: " + this.age);
        console.log("Address: " + this.address);
        console.log("Email: " + this.email);
        console.log("Phone Number: " + this.phoneNumber);
        console.log("Occupation: " + this.occupation);
        console.log("Student: " + (this.isStudent ? "Yes" : "No"));
        console.log("Employed: " + (this.isEmployed ? "Yes" : "No"));
    }

    isAdult(): boolean {
        return this.age >= 18;
    }

    updateContactInfo(newEmail: string, newPhoneNumber: string): void {
        this.email = newEmail;
        this.phoneNumber = newPhoneNumber;
    }
}

class Car {
    private make: string;
    private model: string;
    private year: number;
    private color: string;
    private price: number;
    private isAutomatic: boolean;
    private isFourWheelDrive: boolean;

    constructor(make: string, model: string, year: number, color: string, price: number, isAutomatic: boolean, isFourWheelDrive: boolean) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
        this.price = price;
        this.isAutomatic = isAutomatic;
        this.isFourWheelDrive = isFourWheelDrive;
    }

    displayInfo(): void {
        console.log("Make: " + this.make);
        console.log("Model: " + this.model);
        console.log("Year: " + this.year);
        console.log("Color: " + this.color);
        console.log("Price: " + this.price);
        console.log("Is Automatic: " + (this.isAutomatic ? "Yes" : "No"));
        console.log("Is Four Wheel Drive: " + (this.isFourWheelDrive ? "Yes" : "No"));
    }

    isExpensive(): boolean {
        return this.price > 30000.0;
    }

    paint(newColor: string): void {
        this.color = newColor;
        console.log("The car is now painted " + newColor);
    }
}

class Book {
    private title: string;
    private author: string;
    private publicationYear: number;
    private genre: string;
    private price: number;
    private isFiction: boolean;
    private pageCount: number;

    constructor(title: string, author: string, publicationYear: number, genre: string, price: number, isFiction: boolean, pageCount: number) {
        this.title = title;
        this.author = author;
        this.publicationYear = publicationYear;
        this.genre = genre;
        this.price = price;
        this.isFiction = isFiction;
        this.pageCount = pageCount;
    }

    displayInfo(): void {
        console.log("Title: " + this.title);
        console.log("Author: " + this.author);
        console.log("Publication Year: " + this.publicationYear);
        console.log("Genre: " + this.genre);
        console.log("Price: " + this.price);
        console.log("Is Fiction: " + (this.isFiction ? "Yes" : "No"));
        console.log("Page Count: " + this.pageCount);
    }

    isClassic(): boolean {
        return this.genre.toLowerCase() === "classic";
    }

    increasePageCount(pagesToAdd: number): void {
        this.pageCount += pagesToAdd;
        console.log(pagesToAdd + " pages added to the book.");
    }
}

const person = new Person("John Doe", 30, "123 Main St", "john@example.com", "123-456-789", "Software Engineer", false, true);
const car = new Car("Toyota", "Camry", 2022, "Silver", 25000.0, true, false);
const book = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Classic", 9.99, true, 180);

person.displayInfo();
person.isAdult();
person.updateContactInfo("john2@example.com", "600-100-100");
console.log();

car.displayInfo();
car.isExpensive();
car.paint("Red");
console.log();

book.displayInfo();
book.isClassic();
book.increasePageCount(10);
