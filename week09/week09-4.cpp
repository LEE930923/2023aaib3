class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0,b20=0;
        for(int b : bills){
            if(b==5) b5++;//�ȤH��5���r,�������_��
            else if(b==10){//�ȤH��10���r,�ݯण����
                if(b5==0) return false;//�S�����i�H��,���V�F
                b5--;//�֤F�@�i5��
                b10++;//�h�F�@�i10��
            }else{
                if(b10>0 && b5>0){
                    b20++;
                    b10--;
                    b5--;
                }else if(b5>=3){
                    b20++;
                    b5-=3;
                }else return false;
            }
        }
        return true;
    }
};
