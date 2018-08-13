public class JniObjectPassing{
	static {
		System.loadLibrary("JniObjectPassing");
	}
	// native function
	private native double sum(int a,int b);
	public static void main(String args[]){
		System.out.println("In java, the sum is "+ new JniObjectPassing().sum(5,5));
		
	}
}