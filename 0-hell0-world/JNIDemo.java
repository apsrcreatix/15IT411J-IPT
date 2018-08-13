public class JNIDemo
{
public native void display();
static
{
System.loadLibrary("JNIDemo");
}
public static void main(String args[])
{
try
{
JNIDemo jdo = new JNIDemo();
jdo.display();
}catch(Exception e)
{
System.out.println("Alertt Alert: " + e.getMessage());
}
}
}