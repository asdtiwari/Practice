package newLearning;

public class StringLearning {
	public static void main(String[] args) {
		System.out.println("Let's Learn Some String Functions ");
		
		String str = new String("Akhilesh Tiwari");
		
		String array[] = str.split(" ");
		
		for(String element : array) {
			System.out.println(element); // two elements "Akhilesh" & "Tiwari"
		}
		
		System.out.println(str.charAt(5)); // e at index 5
		
		System.out.println(str.codePointAt(8)); // 32 for space
		
		System.out.println(str.codePointCount(0, 14));
	}		
}
