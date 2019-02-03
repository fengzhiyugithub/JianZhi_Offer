class Solution {
public:
    void replaceSpace(char *str,int length) {
        int cnt=0;
        for(int i=0; i<length; i++) {
            if(str[i]==' ') {
                cnt++;
            }
        }
        int new_length=cnt*2+length;
        int i=new_length-1;
        for(; length>0; length--)
            if(str[length-1]==' ') {
                str[i--]='0';
                str[i--]='2';
                str[i--]='%';
            } else {
                str[i--]=str[length-1];
            }
    }
};