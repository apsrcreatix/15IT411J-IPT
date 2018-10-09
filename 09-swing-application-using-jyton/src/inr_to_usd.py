#This program converts INR to USD
from javax.swing import *

string1 = JOptionPane.showInputDialog("Enter INR")
string2 = JOptionPane.showInputDialog("Enter Current USD")
number1 = float(string1)
number2 = float(string2)
JOptionPane.showMessageDialog(None,"The conversion in INR is "+str(number1*number2)+".","Conversion",JOptionPane.INFORMATION_MESSAGE)

