public class SortingArray{
static {
	System.loadLibrary("SortingArray");
}
public native int[] sorting(int[] numbers);
public static void main(String args[]){
	int[] numbers = {22,33,1,2,32};
	System.out.println("In Java,Calling function");
	int[] newArray  =  new SortingArray().sorting(numbers);
	for(int value=0;value<newArray.length;value++)
	{
		System.out.println(newArray[value]);
	}
}
}