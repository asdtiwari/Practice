package newLearning;

public class Recursion {
	static int i = 1;
	public static void main(String[] args) {
		Recursion.recurse();
	}
	
	public static void recurse() {
		try {
			i++;
			recurse();
		}
		catch(Error ex) {
			System.out.println(i);
		}
	}
}
