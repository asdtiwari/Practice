package newLearning;

import java.util.Scanner;

public class StringToChar {

	public static void main(String[] args) {


		@SuppressWarnings("resource")
		Scanner scan = new Scanner(System.in);

		String string = new String();

		string = scan.next();
		System.out.println(string);

		char [] ch = new char[string.length()];

		for(int i = 0; i < string.length(); i++) {
			ch[i] = string.charAt(i);
		}
		char temp;
		for(int i = 0, j = ch.length-1; i < ch.length/2; i++, j--) {
			
			temp = ch[j];
			ch[j] = ch[i];
			ch[i] = temp;
		}
		string = new String(ch);
		System.out.println(string);
		
		for(int i = ch.length -1 , j = (ch.length)/2 + 1 ; i>j; j++, i--) {
			temp = ch[j];
			ch[j] = ch[i];
			ch[i] = temp;
		}
		
		string = new String(ch);
		
		System.out.println(string);
	}
}
