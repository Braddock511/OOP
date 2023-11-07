class Car implements Methods {
    private String make;
    private String model;
    private int year;
    private String color;
    private double price;
    private boolean isAutomatic;
    private boolean isFourWheelDrive;

    public Car(String make, String model, int year, String color, double price, boolean isAutomatic, boolean isFourWheelDrive) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
        this.price = price;
        this.isAutomatic = isAutomatic;
        this.isFourWheelDrive = isFourWheelDrive;
    }
    
    @Override
    public void displayInfo() {
        System.out.println("make: " + make);
        System.out.println("model: " + model);
        System.out.println("year: " + year);
        System.out.println("color: " + color);
        System.out.println("price: " + price);
        System.out.println("isAutomatic: " + isAutomatic);
        System.out.println("isFourWheelDrive: " + isFourWheelDrive);
    }

    public boolean isExpensive() {
        return price > 30000.0;
    }

    public void paint(String newColor) {
        this.color = newColor;
        System.out.println("The car is now painted " + newColor);
    }

    public String getMake() {
        return make;
    }

    public void setMake(String make) {
        this.make = make;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public boolean isAutomatic() {
        return isAutomatic;
    }

    public void setAutomatic(boolean automatic) {
        isAutomatic = automatic;
    }

    public boolean isFourWheelDrive() {
        return isFourWheelDrive;
    }

    public void setFourWheelDrive(boolean fourWheelDrive) {
        isFourWheelDrive = fourWheelDrive;
    }
}