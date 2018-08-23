    class JniExceptions{
    static {
        System.loadLibrary("JniExceptions");
    	}

    public native int intMethod(int n1,int n2);
    public native boolean booleanMethod(boolean b);
    public native String stringMethod(String str);
    public native void doIt() throws IllegalArgumentException;
    public void callback() throws NullPointerException {
        throw new NullPointerException("CatchThrow.Callback");
    }

    public static void main(String[] args) {
        JniExceptions e = new JniExceptions();
        System.out.println(e.intMethod(4,3));
        System.out.println(e.booleanMethod(false));
        System.out.println(e.stringMethod("Hello World"));

        try {
            e.doIt();
        }catch(Exception ex) {
            System.out.println("Caught : " + ex.getMessage());
        }

        try {
            e.callback();
        }catch(Exception ex) {
            System.out.println("Caught in Java :" + ex.getMessage());
        }
    }
}