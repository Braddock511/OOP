class Book implements Methods {
    private String title;
    private String author;
    private int publicationYear;
    private String genre;
    private double price;
    private boolean isFiction;
    private int pageCount;

    public Book(String title, String author, int publicationYear, String genre, double price, boolean isFiction, int pageCount) {
        this.title = title;
        this.author = author;
        this.publicationYear = publicationYear;
        this.genre = genre;
        this.price = price;
        this.isFiction = isFiction;
        this.pageCount = pageCount;
    }

    @Override
    public void displayInfo() {
        System.out.println("title: " + title);
        System.out.println("author: " + author);
        System.out.println("publicationYear: " + publicationYear);
        System.out.println("genre: " + genre);
        System.out.println("price: " + price);
        System.out.println("isFiction: " + isFiction);
        System.out.println("pageCount: " + pageCount);
    }

    public boolean isClassic() {
        return genre.equalsIgnoreCase("Classic");
    }

    public void increasePageCount(int pagesToAdd) {
        this.pageCount += pagesToAdd;
        System.out.println(pagesToAdd + " pages added to the book.");
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public int getPublicationYear() {
        return publicationYear;
    }

    public void setPublicationYear(int publicationYear) {
        this.publicationYear = publicationYear;
    }

    public String getGenre() {
        return genre;
    }

    public void setGenre(String genre) {
        this.genre = genre;
    }

    public double getPrice() {
        return price;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public boolean isFiction() {
        return isFiction;
    }

    public void setFiction(boolean fiction) {
        isFiction = fiction;
    }

    public int getPageCount() {
        return pageCount;
    }

    public void setPageCount(int pageCount) {
        this.pageCount = pageCount;
    }
}