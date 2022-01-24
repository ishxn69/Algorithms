import java.io.*;
import java.util.*;

class euclidAlgo {

	
	static int gcd(int a, int b)
	{
		while(a!=b)
		{
			if(a > b)
				a = a - b;
			else
				b = b - a; 
		}

		return a;
	}

	public static void main (String[] args) {
		
		int a = 12, b = 15;

		System.out.println(gcd(a, b));

	}
}
