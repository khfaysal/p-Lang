class Book {
    String title;

    public Book(String title) {
        this.title = title;
    }

    public void read() {
        System.out.println("Reading the book: " + title);
    }

    public void displayDetails() {
        System.out.println("Book Title: " + title);
    }
}

class FictionBook extends Book {
    String genre;

    public FictionBook(String title, String genre) {
        super(title);
        this.genre = genre;
    }

    @Override
    public void read() {
        System.out.println("Getting lost in the world of fiction.");
    }

    public void borrow() {
        System.out.println("Borrowing the fiction book: " + title);
    }

    public void returnBook() {
        System.out.println("Returning the fiction book: " + title);
    }
}

class NonFictionBook extends Book {
    String topic;

    public NonFictionBook(String title, String topic) {
        super(title);
        this.topic = topic;
    }

    @Override
    public void read() {
        System.out.println("Exploring the realm of non-fiction.");
    }

    public void borrow() {
        System.out.println("Borrowing the non-fiction book: " + title);
    }

    public void returnBook() {
        System.out.println("Returning the non-fiction book: " + title);
    }
}

public class F_Ques_Library {
    public static void main(String[] args) {
        Book myBook = new Book("Java Programming");
        myBook.read();

        FictionBook mysteryBook = new FictionBook("The Da Vinci Code", "Mystery");
        mysteryBook.read();
        mysteryBook.borrow();

        NonFictionBook historyBook = new NonFictionBook("Sapiens: A Brief History of Humankind", "History");
        historyBook.read();
        historyBook.returnBook();
    }
}