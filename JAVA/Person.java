class Person implements Methods {
    private String name;
    private int age;
    private String address;
    private String email;
    private String phoneNumber;
    private String occupation;
    private boolean isStudent;
    private boolean isEmployed;

    public Person(String name, int age, String address, String email, String phoneNumber, String occupation, boolean isStudent, boolean isEmployed) {
        this.name = name;
        this.age = age;
        this.address = address;
        this.email = email;
        this.phoneNumber = phoneNumber;
        this.occupation = occupation;
        this.isStudent = isStudent;
        this.isEmployed = isEmployed;
    }

    @Override
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Address: " + address);
        System.out.println("Email: " + email);
        System.out.println("Phone Number: " + phoneNumber);
        System.out.println("Occupation: " + occupation);
        System.out.println("Student: " + (isStudent ? "Yes" : "No"));
        System.out.println("Employed: " + (isEmployed ? "Yes" : "No"));
    }

    public boolean isAdult() {
        return age >= 18;
    }

    public void updateContactInfo(String newEmail, String newPhoneNumber) {
        this.email = newEmail;
        this.phoneNumber = newPhoneNumber;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getPhoneNumber() {
        return phoneNumber;
    }

    public void setPhoneNumber(String phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    public String getOccupation() {
        return occupation;
    }

    public void setOccupation(String occupation) {
        this.occupation = occupation;
    }

    public boolean isStudent() {
        return isStudent;
    }

    public void setStudent(boolean student) {
        isStudent = student;
    }

    public boolean isEmployed() {
        return isEmployed;
    }

    public void setEmployed(boolean employed) {
        isEmployed = employed;
    }
}