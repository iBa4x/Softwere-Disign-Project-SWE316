#include<iostream>
using namespace std;

/**
 * @brief this function do num1+num2
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
 * @brief this function do num1-num2
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
 * @brief this function do num1*num2
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
 * @brief this function do num1/num2
 * 
 * @param num1 number 1
 * @param num2 number 2
 * @return long double 
 */
long double div(long long num1, long long num2){ // O(1)
    long double res = num1/num2;
    return res;
}

/**
 * @brief this function do num1%num2
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
 * @brief this function do num1^num2
 * 
 * @param num1 number 1 
 * @param num2 number 2
 * @return long long 
 */
long long power(long long num1, long long num2){ // O(logn2)
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
 * @brief this function ask the user to chose in opration to do between two number.
 * 
 */
void Cal(){
    long long num1, num2, op;
    string s;

    // ask the user for number 1 & number 2.
    cout << " -First enter number 1 & number 2: ";
    cin >> num1 >> num2;

    // ask the user for the opreation he/she want to preform on the number 1 & number 2
    cout << " -Second select an opreation:" << endl;
    cout << "  1 : +    (addion)" << endl;
    cout << "  2 : -    (subtrction)" << endl;
    cout << "  3 : ×    (multply)" << endl;
    cout << "  4 : ÷    (divid)" << endl;
    cout << "  5 : %    (mod)" << endl;
    cout << "  6 : ^    (power)" << endl;
    cout << "\nEnter your choice: ";

    cin >> op;

    if(op == 1){
        cout << "  "<<num1 << " + " << num2 << " = " << sum(num1, num2);
    }else if(op == 2){
        cout << "  "<< num1 << " - " << num2 << " = " << num1-num2 << endl;
    }else if(op == 3){
        cout << "  "<<num1 << " × " << num2 << " = " << mul(num1, num2);
    }else if(op == 4){
        cout << "  "<<num1 << " ÷ " << num2 << " = " << (long double)num1/num2 << endl;
    }else if(op == 5){
        cout << "  "<<num1 << " % " << num2 << " = " << num1%num2 << endl;
    }else if(op == 6){ 
        long long res = power(num1, num2);
        cout << "  "<<num1 << " ^ " << num2 << " = ";
        if(res>>63 && num2 > 1){
            cout << "error" << endl;
        }else{
            cout << res << endl;
        }
    }

    // ask user if he want to start the function over.
    cout << "Do you want to start over? y/n : ";
    cin >> s;
    if(tolower(s[0]) == 'y'){
        Cal();
    }
}


int main(){
    cout << "This is a Simple Calcultor.\n" << endl;
    Cal();
    return 0;
}
