class Solution {
    public boolean canBeValid(String s, String locked) {
         int stringLength = s.length();
        if (stringLength % 2 == 1) {
            return false;
        }
        Stack<Integer> open = new Stack();
        Stack<Integer> ul = new Stack();
        for(int i=0; i<locked.length(); i++){
            if(locked.charAt(i)=='0') ul.push(i);
            else if(s.charAt(i)=='(') open.push(i);
            
            else{
                if(!open.isEmpty()) open.pop();
                else if(!ul.isEmpty()) ul.pop();
                else return false;
            }
        }

        while(!open.isEmpty() && !ul.isEmpty() && open.peek()<ul.peek()){
            open.pop();
            ul.pop();
        }
        if(open.isEmpty() && !ul.isEmpty()) return ul.size()%2==0;
        return open.isEmpty();
    }
}