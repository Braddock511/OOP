public class Main {
    public static void main(String[] args) {
        Person person = new Person("John Doe", 30, "123 Main St", "john@example.com", "123-456-789", "Software Engineer", false, true);
        Car car = new Car("Toyota", "Camry", 2022, "Silver", 25000.0, true, false);
        Book book = new Book("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Classic", 9.99, true, 180);

        person.displayInfo();
        person.isAdult();
        person.updateContactInfo("john2@example.com", "600-100-100");
        System.out.println();

        car.displayInfo();
        car.isExpensive();
        car.paint("Red");
        System.out.println();
        
        book.displayInfo();
        book.isClassic();
        book.increasePageCount(10);
    }
}