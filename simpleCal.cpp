#include<iostream>
using namespace std;

string s; // used to ask for yes.

/**
 * @brief this function do addition between two numbers.
 * 
 * @param num1 number 1
 * @param num2 number 2
 * @return long long 
 */
long long sum(long long num1, long long num2){ // O(1)
    long long res = num1+num2;
    return res;
}

/**
 * @brief this function subtraction between two numbers.
 * 
 * @param num1 number 1
 * @param num2 number 2
 * @return long long 
 */
long long sub(long long num1, long long num2){ // O(1)
    long long res = num1-num2;
    return res;
}

/**
 * @brief this function do multiplication between two numbers.
 * 
 * @param num1 number 1
 * @param num2 number 2
 * @return long double 
 */
long long mul(long long num1, long long num2){ // O(1)
    long long res = num1*num2;
    return res;
}

/**
 * @brief this function do division between two numbers.
 * 
 * @param num1 number 1
 * @param num2 number 2
 * @return long double 
 */
long double divi(long long num1, long long num2){ // O(1)
    long double res = num1/(long double)num2;
    return res;
}

/**
 * @brief this function do mod of two numbers.
 * 
 * @param num1 number 1
 * @param num2 number 2
 * @return long long 
 */
long long mod(long long num1, long long num2){ // O(1)
    long long res = num1%num2;
    return res;
}

/**
 * @brief this function do power of two numbers.
 * 
 * @param num1 number 1 
 * @param num2 number 2
 * @return long long 
 */
long long power(long long num1, long long num2){ // O(lognum2)
    long long res = 1;
    while (num2 > 0) { 
        if (num2 & 1) // if odd
            res *= num1;
        num1 *= num1;
        num2 >>= 1; // divid by 2
    }
    // while(num2--){ // O(num2)
    //     res *= num1;
    // }
    return res;
}
/**
 * @brief this function do operation between two numbers.
 * 
 * @param op operator
 * @param num1 number 1
 * @param num2 number 2
 */
void operation(long long op, long long num1, long long num2){
    if(op == 1){
        cout << "  "<<num1 << " + " << num2 << " = " << sum(num1, num2) << endl;
    }else if(op == 2){
        cout << "  "<< num1 << " - " << num2 << " = " << sub(num1, num2) << endl;
    }else if(op == 3){
        cout << "  "<<num1 << " × " << num2 << " = " << mul(num1, num2) << endl;
    }else if(op == 4){
        cout << "  "<<num1 << " ÷ " << num2 << " = " << divi(num1, num2) << endl;
    }else if(op == 5){
        cout << "  "<<num1 << " % " << num2 << " = " << mod(num1, num2) << endl;
    }else if(op == 6){ 
        long long res = power(num1, num2);
        cout << "  "<<num1 << " ^ " << num2 << " = ";
        if(res>>63 && num2 > 1){
            cout << "error" << endl;
        }else{
            cout << res << endl;
        }
    }else{
        cout << "invalid input" << endl;
    }
    cout << "Do you want to do another operation? y/n: ";
    cin >> s;
    if(tolower(s[0]) == 'y'){
        cout << "\nEnter your choice: ";
        cin >> op;
        operation(op, num1, num2);
    }
    return;
}

/**
 * @brief ask the user for two numbers & ask for operator to do between two numbers & perform the operation and print result.
 * 
 */
void Cal(){
    long long num1, num2, op;
    
    // ask the user for number 1 & number 2.
    cout << " -First enter number 1 & number 2: ";
    cin >> num1 >> num2;

    // ask the user for the operator he/she want to preform on the number 1 & number 2.
    cout << " -Second select an operator:" << endl;
    cout << "  1 : +    (addition)" << endl;
    cout << "  2 : -    (subtraction)" << endl;
    cout << "  3 : ×    (multiplication)" << endl;
    cout << "  4 : ÷    (division)" << endl;
    cout << "  5 : %    (mod)" << endl;
    cout << "  6 : ^    (power)" << endl;
    cout << "\nEnter your choice: ";
    cin >> op;
    operation(op, num1, num2);

    // ask user if he want to start the function over.
    cout << "Do you want to start over? y/n : ";
    cin >> s;
    if(tolower(s[0]) == 'y'){
        cout << endl;
        Cal();
    }
}


int main(){
    cout << "This is a Simple Calculator.\n" << endl;
    Cal();
    return 0;
}
