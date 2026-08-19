class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            while (!isalnum(s[left]) || isspace(s[left])) {
                if (left >= right) {
                    break;
                } else { left++; }
            }

            while (!isalnum(s[right]) || isspace(s[right])) {
                if (right <= left) {
                    break;
                } else { right--; }
            }

            if (tolower(s[left]) == tolower(s[right])) {
                left++;
                right--;
            } else { return false;}
        }
        return true;
    }
};
