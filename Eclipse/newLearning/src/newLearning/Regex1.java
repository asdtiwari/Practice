package newLearning;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Regex1 {
	
	public static void main(String[] args) {
		String reg = ".*t*";
		String str = "akhilesh";
		Pattern pt = Pattern.compile(reg);
		Matcher mt = pt.matcher(str);
		System.out.println(mt.matches());
	}
}
