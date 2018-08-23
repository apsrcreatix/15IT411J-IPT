public class JniObjectPassing{
	static {
		System.loadLibrary("JniObjectPassing");
	}
private int value1 = 2;
private int value2 = 1;
private int sum ;

 
   // Declare a native method that modifies the instance variables
   private native void modifyInstanceVariable();
 
   // Test Driver   
   public static void main(String args[]) {
      JniObjectPassing test = new JniObjectPassing();
      test.modifyInstanceVariable();
      System.out.println("Sum Passed from C language : " + test.sum);
     
   }
}