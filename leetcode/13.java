//https://leetcode.com/problems/roman-to-integer/

class Solution {
    public int romanToInt(String s) {
        
         if (s == null || s.length() == 0) {
            return 0;
        }
        //assuming correct roman numbers
        Map<Character, Integer> map = new HashMap();
        map.put('I', 1);
        map.put('V', 5);
        map.put('X', 10);
        map.put('L', 50);
        map.put('C', 100);
        map.put('D', 500);
        map.put('M', 1000);

        int sum = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (map.get(s.charAt(i)) < map.get(s.charAt(i + 1))) {
                sum -= map.get(s.charAt(i));
            } else {
                sum += map.get(s.charAt(i));
            }
        }
        return sum + map.get(s.charAt(s.length() - 1));
    }
}

// Time/Space Complexity

//     Time Complexity: O(n)
//     Space Complexity: O(1)
