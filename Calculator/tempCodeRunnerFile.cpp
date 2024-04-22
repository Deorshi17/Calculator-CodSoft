#include <iostream>
#include <vector>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int a = digits.size();
        for (int i=a-1; i>=0; i--)
        {
            digits[i]++;
            if (digits[i]==10)
            {
                digits[i]=0;
            }
            else
            {
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{   Solution obj;
    obj.plusOne([9,9]);
}