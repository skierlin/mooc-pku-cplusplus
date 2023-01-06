//
// Created by lance on 23-1-6.
//

#include <iostream>
class Solution {
public:
    static void ReferenceTest() {
        int number = 20;
        int &r = number;
        number = 30;
        std::cout << "r = " << r << std::endl;
        std::cout << "n = " << number << std::endl;
        r = 40;
        std::cout << "r = " << r << std::endl;
        std::cout << "n = " << number << std::endl;
    }
    
};

int main() {
    Solution::ReferenceTest();
    return 0;
}