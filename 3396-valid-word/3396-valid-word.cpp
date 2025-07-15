class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;

        bool v = 0;
        bool c =0;
        for(auto it: word){
            if((it-'a'>=0 && it-'a'<=25) || (it-'A'>=0 && it-'A'<=25) || (it-'0'>=0 && it-'0'<=9)){
                if((it=='a' || it=='e' || it== 'i' || it=='o'||it=='u') || (it=='A' || it=='E' || it== 'I' || it=='O'||it=='U')){
                    v=1;
                } else if(it-'0'<=0 || it-'0'>=9) c=1;
            }
            else return false;
        }
        return v && c;

    }
};