package Encapsulation;
class BankAccount {
    private String accountHolderName;
    private String accountNumber;
    private double balance;

    public String getaccountHolderName() {
        return accountHolderName;
    }

    public void setaccountHolderName(String accountHolderName) {
        this.accountHolderName = accountHolderName;
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public void displayAccountDetails() {
        System.out.println("Account Holder Name: " + accountHolderName);
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Balance: $" + balance);
    }
}

public class ATMSystem_Task_1 {
    public static void main(String[] args) {
        BankAccount account = new BankAccount();
        account.setaccountHolderName("Faysal");
        account.setAccountNumber("1234567890");
        account.setBalance(1000.0);
        //account.displayAccountDetails();
        System.out.println("Account Balance: $" + account.getBalance());
    }
}
