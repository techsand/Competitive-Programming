package codes;

import java.io.IOException;
import java.io.InputStreamReader;

public class A_1 {

	/**
	 * @param args
	 * @throws IOException 
	 */
	public static void main(String[] args) throws IOException {
		java.io.BufferedReader stdin=new java.io.BufferedReader(new InputStreamReader(System.in));
		
		String input=stdin.readLine();
		String[] tokens= input.trim().split(" ");
		long n= Long.parseLong(tokens[0]);
		long m= Long.parseLong(tokens[1]);
		long a= Long.parseLong(tokens[2]);
		
		long b= (long)Math.ceil((double)n/(double)a);
		long c= (long)Math.ceil((double)m/(double)a);
		
		System.out.println(b*c);
		
		stdin.close();
	}

}
