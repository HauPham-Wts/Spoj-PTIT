import java.util.*;
import java.lang.*;
import java.math.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input = new Scanner(System.in);
		BigInteger a = new BigInteger(input.next());
		BigInteger b = new BigInteger(input.next());
		System.out.println(a.add(b));
		System.out.println(a.subtract(b));
		System.out.println(a.multiply(b));
	}
}
