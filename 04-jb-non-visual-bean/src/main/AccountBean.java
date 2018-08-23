package main;

public class AccountBean {
//    variables in java bean class
    private String name;
    private String account_number;
    private  double balance;
    private double last_withdraw;
    private String dateStamp;


    public String getDateStamp() {
        return dateStamp;
    }

    public void setDateStamp(String dateStamp) {
        this.dateStamp = dateStamp;
    }



    //    getter and setters for the variables
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAccount_number() {
        return account_number;
    }

    public void setAccount_number(String account_number) {
        this.account_number = account_number;
    }

    public double getBalance() {
        return balance;
    }

    public void setBalance(double balance) {

        this.balance = balance;
    }

    public double getLast_withdraw() {
        return last_withdraw;
    }

    public void setLast_withdraw(double last_withdraw) {
        this.last_withdraw = last_withdraw;
    }

    public double withdrawMoney(){
        return this.balance-this.last_withdraw;
    }
}
