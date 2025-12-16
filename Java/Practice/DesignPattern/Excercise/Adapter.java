interface BookFile {
    void openBook();
}

class PDFBook implements BookFile {
    @Override
    public void openBook() {
        System.out.println("Opening PDF Book");
    }
}

class EBook implements BookFile {
    @Override
    public void openBook() {
        System.out.println("Opening E-Book");
    }
}

class EAdapter1 implements BookFile {
    private PDFBook pfd = new PDFBook();

    @Override
    public void openBook() {
        pfd.openBook();
    }

}

class EAdapter2 implements BookFile {
    private EBook eb = new EBook();

    @Override
    public void openBook() {
        eb.openBook();
    }

}

public class Adapter {
    public static void main(String[] args) {
        BookFile book1 = new EAdapter1();
        book1.openBook();

        BookFile book2 = new EAdapter2();
        book2.openBook();
    }
}