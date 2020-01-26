import java.util.*;

public class Uncommon
{
	public static void main(String[] args)
	{
		String str1,str2;
		Scanner in = new Scanner(System.in);
		str1 = in.nextLine();
		str2 = in.nextLine();
		if(str1.length() == str2.length())
		{
			if(str1.equals(str2))
				System.out.println(-1);
			else
				System.out.println(str1.length());
		}
		else
		{
			System.out.println((str1.length() > str2.length() ? str1.length() : str2.length())
		}
	}
}