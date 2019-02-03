import java.util.Scanner;

/**
 * @author yufeng
 *
 */
public class Solution {

	public static int GetNumberOfK(int [] array , int k) {
		return biSearch(array, k+0.5) - biSearch(array, k-0.5);    
	}
	
	public static int biSearch(int[] array, double x) {
		int l = 0, r = array.length - 1;
		while(l <= r) {
			int mid = (r + l) >> 1;
			if(array[mid] > x) {
				r = mid - 1;
			} else if(array[mid] < x) {
				l = mid + 1;
			}
		}
		return l;
	}
	
	@SuppressWarnings("resource")
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] array = {1,2,3,3,4};
		System.out.println(GetNumberOfK(array, 3));
	}
}
