// Singleton class for the centralized submission system

class QuestionSubmissionSystem {

    private static QuestionSubmissionSystem instance;

    // Private constructor to prevent direct object creation
    private QuestionSubmissionSystem() {
        System.out.println("Centralized Question Submission System Initialized.");
    }

    // Static method to get the single instance
    public static synchronized QuestionSubmissionSystem getInstance() {
        if (instance == null) {
            instance = new QuestionSubmissionSystem();
        }
        return instance;
    }

    // Method for submission
    public void submitQuestion(String department) {
        System.out.println(department + " department submitted questions successfully.");
    }
}

// Test class
class UniversityPortal {

    public static void main(String[] args) {
        // All departments try to access the same system
        QuestionSubmissionSystem cseDept = QuestionSubmissionSystem.getInstance();
        cseDept.submitQuestion("CSE");

        QuestionSubmissionSystem sweDept = QuestionSubmissionSystem.getInstance();
        sweDept.submitQuestion("SWE");

        // Check if both instances are same
        System.out.println("Both departments using same system? " + (cseDept == sweDept));
    }
}
