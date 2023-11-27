//Sliding window approach for Finding len of longest non-repeating Sub String 
int max(int a, int b){
  int max_val = (a>b) ? a:b;
  return max_val;
}

int lengthOfLongestSubstring(char* s) {
  char chars[256] = {0};

  int right = 0;
  int left = 0;
  int len = strlen(s);
  char r;
  char l;
  int res =0;
  while(right<len){
    r = s[right];
    chars[r]++;
    while(chars[r]>1){
      l = s[left];
      chars[l]--;
      left++;
    }
    res = max(res, right-left+1);
    right++;
  }
return res;
}
