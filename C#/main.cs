using System;

class Main
{
    static void Main(string[] args)
    {
        Person person = new Person("John Doe", 30, "123 Main St", "john@example.com", "123-456-789", "Software Engineer", false, true);
        Car car = new Car("Toyota", "Camry", 2022, "Silver", 25000.0, true, false);
        Book book = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Classic", 9.99, true, 180);

        person.DisplayInfo();
        person.IsAdult();
        person.UpdateContactInfo("john2@example.com", "600-100-100");
        Console.WriteLine();

        car.DisplayInfo();
        car.IsExpensive();
        car.Paint("Red");
        Console.WriteLine();

        book.DisplayInfo();
        book.IsClassic();
        book.IncreasePageCount(10);
    }
}

class Person
{
    private string name;
    private int age;
    private string address;
    private string email;
    private string phoneNumber;
    private string occupation;
    private bool isStudent;
    private bool isEmployed;

    public Person(string name, int age, string address, string email, string phoneNumber, string occupation, bool isStudent, bool isEmployed)
    {
        this.name = name;
        this.age = age;
        this.address = address;
        this.email = email;
        this.phoneNumber = phoneNumber;
        this.occupation = occupation;
        this.isStudent = isStudent;
        this.isEmployed = isEmployed;
    }

    public void DisplayInfo()
    {
        Console.WriteLine("Name: " + name);
        Console.WriteLine("Age: " + age);
        Console.WriteLine("Address: " + address);
        Console.WriteLine("Email: " + email);
        Console.WriteLine("Phone Number: " + phoneNumber);
        Console.WriteLine("Occupation: " + occupation);
        Console.WriteLine("Student: " + (isStudent ? "Yes" : "No"));
        Console.WriteLine("Employed: " + (isEmployed ? "Yes" : "No"));
    }

    public bool IsAdult()
    {
        return age >= 18;
    }

    public void UpdateContactInfo(string newEmail, string newPhoneNumber)
    {
        this.email = newEmail;
        this.phoneNumber = newPhoneNumber;
    }
}

class Car
{
    private string make;
    private string model;
    private int year;
    private string color;
    private double price;
    private bool isAutomatic;
    private bool isFourWheelDrive;

    public Car(string make, string model, int year, string color, double price, bool isAutomatic, bool isFourWheelDrive)
    {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
        this.price = price;
        this.isAutomatic = isAutomatic;
        this.isFourWheelDrive = isFourWheelDrive;
    }

    public void DisplayInfo()
    {
        Console.WriteLine("Make: " + make);
        Console.WriteLine("Model: " + model);
        Console.WriteLine("Year: " + year);
        Console.WriteLine("Color: " + color);
        Console.WriteLine("Price: " + price);
        Console.WriteLine("Is Automatic: " + (isAutomatic ? "Yes" : "No"));
        Console.WriteLine("Is Four Wheel Drive: " + (isFourWheelDrive ? "Yes" : "No"));
    }

    public bool IsExpensive()
    {
        return price > 30000.0;
    }

    public void Paint(string newColor)
    {
        color = newColor;
        Console.WriteLine("The car is now painted " + newColor);
    }
}

class Book
{
    private string title;
    private string author;
    private int publicationYear;
    private string genre;
    private double price;
    private bool isFiction;
    private int pageCount;

    public Book(string title, string author, int publicationYear, string genre, double price, bool isFiction, int pageCount)
    {
        this.title = title;
        this.author = author;
        this.publicationYear = publicationYear;
        this.genre = genre;
        this.price = price;
        this.isFiction = isFiction;
        this.pageCount = pageCount;
    }

    public void DisplayInfo()
    {
        Console.WriteLine("Title: " + title);
        Console.WriteLine("Author: " + author);
        Console.WriteLine("Publication Year: " + publicationYear);
        Console.WriteLine("Genre: " + genre);
        Console.WriteLine("Price: " + price);
        Console.WriteLine("Is Fiction: " + (isFiction ? "Yes" : "No"));
        Console.WriteLine("Page Count: " + pageCount);
    }

    public bool IsClassic()
    {
        return genre.Equals("Classic", StringComparison.OrdinalIgnoreCase);
    }

    public void IncreasePageCount(int pagesToAdd)
    {
        pageCount += pagesToAdd;
        Console.WriteLine(pagesToAdd + " pages added to the book.");
    }
}
