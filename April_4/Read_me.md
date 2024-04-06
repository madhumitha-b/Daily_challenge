***DAILY CHALLENGE DAY 4***
<br><br><br>
**1614. Maximum Nesting Depth of the Parentheses**
<br><br><br>
Question:<br>
https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/?envType=daily-question&envId=2024-04-04
<br><br>
**TIME COMPLEXITY**<br>
O(N)<br><br>
**SPACE COMPLEXITY**<br>
O(N)<br><br>

*Approach:*

1. **Stack Implementation:**
   Use a stack data structure to keep track of open parentheses encountered in the string.

2. **Count Parentheses:**
   Iterate through the characters of the string. Whenever an open parenthesis '(' is encountered, push it onto the stack. When a close parenthesis ')' is encountered, pop an element from the stack.

3. **Calculate Depth:**
   While pushing '(', update a counter variable to keep track of the current depth of the nested parentheses. Update a variable 'max_depth' whenever the current depth exceeds the previous maximum.

4. **Check Validity:**
   After iterating through the string, if the stack is not empty, it means there are unmatched parentheses, indicating an invalid string. Return -1 in this case.

5. **Return Depth or Zero:**
   If the string doesn't contain any parentheses (stack is empty), return 0, indicating no nesting. 

6. **Return Maximum Depth:**
   Otherwise, return the maximum depth of nested parentheses.
