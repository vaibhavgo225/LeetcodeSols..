class Solution {
public:

    int romanToInt(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int current= value(s[i]);
            int next = value(s[i+1]);
            if(current<next)
            sum -=current;
            else
            sum +=current;
        }
        return sum;
    }
private :
int value(char c){
    switch(c)
        {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' :  return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default : return 0;
        }
}
};