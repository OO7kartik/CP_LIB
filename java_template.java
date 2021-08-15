import java.io.*;
import java.util.*;

public class java_template {
	public static void main(String[] args) {
		FastScanner read = new FastScanner();

		if (System.getProperty("ONLINE_JUDGE") == null) {
			try {
				System.setOut(new PrintStream(new FileOutputStream("out.txt")));
				read = new FastScanner("in.txt");
			}
			catch (Exception e) {
			}
		}
	
		// START 
		
		

		// END
	}

	static void sort(int[] a) {
		ArrayList<Integer> l=new ArrayList<>();
		for (int i:a) l.add(i);
			Collections.sort(l);
		for (int i=0; i<a.length; i++) a[i]=l.get(i);
	}

	static class FastScanner {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		FastScanner(){}
		FastScanner(String file_name) throws Exception {
			br = new BufferedReader(new FileReader(file_name));
		}

		StringTokenizer st=new StringTokenizer("");
		String next() {
			while (!st.hasMoreTokens())
				try {
					st=new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			return st.nextToken();
		}
		
		int nextInt() {
			return Integer.parseInt(next());
		}
		int[] readArray(int n) {
			int[] a=new int[n];
			for (int i=0; i<n; i++) a[i]=nextInt();
			return a;
		}
		long nextLong() {
			return Long.parseLong(next());
		}
	}
}
