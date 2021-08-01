#include<bits/stdc++.h>

using namespace std;

class Functions {

    public:

    // function to generate nth power of a number (base ^ exp)
    int power(int base, int exp) {
        int ans = 1;

        // Find the result of base ^ exp
        while(exp > 0) {
            ans *= base;
            exp -= 1;
        }

        return ans;
    }

    // prints whether the provided integer is armstrong or not
    void isArmstrong(int n) {

        int temp = n, rem, digits = 0, sum = 0;

        // extract the total number of digits in the integer
        while(temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        // calculate the sum of each digit ^ no_of_digits
        while(temp > 0) {
            rem = temp % 10;
            sum += power(rem, digits);
            temp /= 10;
        }

        // print if armstrong or not
        if(n == sum)
            cout<<n<<" is an Armstrong number"<<endl;
        else
            cout<<n<<" is an not Armstrong number"<<endl;
    }

    // prints whether the provided integer is palindrome or not
    void isPalindrome(int n) {

        int rev = 0, rem, temp = n;

        // reverse the number
        while(temp > 0) {
            rem = temp % 10;
            rev = (rev * 10) + rem;
            temp /= 10;
        }

        // print whether the number is palindrome or not
        if(rev == n)
            cout<<n<<" is a palindrome"<<endl;
        else
            cout<<n<<" is not a palindrome"<<endl;

    }

    // prints whether the provided string is pallindrome or not
    void isPalindrome(string str) {

        string org = str;
        int start = 0, end = str.length() - 1;

        // reverse the string
        while(start <= end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        // prints whether the string is palindrome or not
        if(org == str)
            cout<<org<<" is a palindrome"<<endl;
        else
            cout<<org<<" is not a palindrome"<<endl;

    }

};

int main() {

    // create an object of class Functions
    Functions f;
    int choice;

    bool check = true;
    string terminate_check;

    while(check) {

        cout<<"----------------------- Functions -----------------------"<<endl;
        cout<<"\nEnter your choice:"<<endl;
        cout<<"1. Check your number is armstrong or not"<<endl;
        cout<<"2. Check your number is palindrome or not"<<endl;
        cout<<"3. Check your string is palindrome or not"<<endl;

        cout<<endl;

        cout<<"Enter the choice number as per your requirement -> ";
        cin>>choice;

        cout<<endl;

        int number;
        string str;

        switch (choice)
        {

        case 1:

            cout<<"Enter the number -> ";
            cin>>number;
            cout<<endl;

            f.isArmstrong(number);

            break;

        case 2:

            cout<<"Enter the number -> ";
            cin>>number;
            cout<<endl;

            f.isPalindrome(number);

            break;

        case 3:

            cout<<"Enter the string -> ";
            cin>>str;
            cout<<endl;

            f.isPalindrome(str);

            break;

        default:
            break;
        }

        cout<<"\nDo you want to continue? Enter yer or no -> ";
        cin>>terminate_check;

        if(terminate_check == "yes" || terminate_check == "Yes" || terminate_check == "YES")
            check = true;
        else
            check = false;

        cout<<endl;
    }

    return 0;
}