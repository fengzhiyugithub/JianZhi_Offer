import java.util.ArrayList;
import java.util.Collections;

/**
* abc 打印字典序。 固定第一个字母对后两个字母排序，然后加上第一个字母即为所求。
*	类似，每次都固定当前状态的第一个字母，对后面的字母求全排列，即可以使用递归。
*  进一步，终止状态判断是否因字母重复而有重复的全排列。
*/
public class Solution {
    	public ArrayList<String> Permutation(String str) {
	       ArrayList<String> res = new ArrayList<>();
	       char[] strArr = str.toCharArray();
	       Permutation(strArr, 0, res);
	       Collections.sort(res);
	       return res;
    }
	
	public void Permutation(char[] str, int pos, ArrayList<String> arrayList) {
		if(str == null) {
			return ;
		}
		if(pos == str.length-1) {
			if(arrayList.contains(String.valueOf(str))) {
				return ;
			}else {
				arrayList.add(String.valueOf(str));
			}
		}else {
			for(int i=pos; i<str.length; i++) {
				char tmp = str[i];
				str[i] = str[pos];
				str[pos] = tmp;
				Permutation(str, pos+1, arrayList);
				tmp = str[i];
				str[i] = str[pos];
				str[pos] = tmp;
			}
		}
	}
}