import java.util.Scanner;

/**
 * @author yufeng
 *
 */
public class Solution {

	/**
	 * 只包含质因子2、3和5的数称作丑数（Ugly Number）。
	 * @param index
	 * @return
	 */
	public static int GetUglyNumber_Solution(int index) {
		if(index <= 0) {
			return 0;
		}
		int[] res = new int[index];
		res[0] = 1;
		int M2 = 0, M3 = 0, M5 = 0;
		for(int i=1; i<index; i++) {
			int min = min3(res[M2]*2, res[M3]*3, res[M5]*5);
			res[i] = min;
			if(res[M2] * 2 <= min) {
				M2++;
			}
			if(res[M3] * 3 <= min) {
				M3++;
			}
			if(res[M5] * 5 <= min) {
				M5++;
			}
		}
		return res[index - 1];
	}
	public static int min3(int a,int b, int c) {
		int min = a < b ? a : b;
		return min<c ? min : c;
	}
	
	@SuppressWarnings("resource")
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println(GetUglyNumber_Solution(n));
	}
}
