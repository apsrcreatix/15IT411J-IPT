package main;

import javafx.scene.control.Alert;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

import java.util.Date;

public class SampleController {
//used in javaFX UI
    public TextField nameField;
    public TextField accountNumberField;
    public TextField balanceField;
    public Label dateLabel;
    public Label currentBalanceLabel;
    public TextField withdrawAmountField;

    AccountBean user = new AccountBean();
// after summiting request by user;
    public void updateData(){

        user.setAccount_number(accountNumberField.getText());
        user.setName(nameField.getText());
        user.setBalance(Double.parseDouble(balanceField.getText()));
        user.setLast_withdraw(Double.parseDouble(withdrawAmountField.getText()));
        dateLabel.setText("Date : "+String.valueOf(new Date()));
        user.setDateStamp(String.valueOf(new Date()));
        currentBalanceLabel.setText("Current $"+Double.toString(user.withdrawMoney()));
    }
//for window message
    public void messageWindow() {
        Alert alert = new Alert(Alert.AlertType.INFORMATION);
        alert.setTitle("Inquiry Statement");
        alert.setHeaderText("Information about your last transaction");
        alert.setContentText("$"+user.getLast_withdraw()+" at "+ user.getDateStamp());
        alert.showAndWait();
    }
}
