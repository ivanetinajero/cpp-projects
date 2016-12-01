#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter expression (we can handle +, –, *, and /)\n";
    cout << "add an x to end expression (e.g., 1+2*3x): ";
    double lval = 0;
    double rval;
    cin>>lval; // read leftmost operand
    if (!cin) 
        error("no first operand");
    cout << "Tenemos el primero\n";
    for (char op; cin>>op; ) { // read operator and right-hand operand
        cout << "Tenemos el operador\n";
        // repeatedly
        if (op!='x') 
            cin>>rval;
        cout << "Tenemps el segundo\n";
        if (!cin) 
            error("no second operand");
        switch(op) {
            case '+':
                lval += rval; // add: lval = lval + rval
                break;
            case '-':
                lval -= rval; // subtract: lval = lval – rval
                break;
            case '*':
                lval *= rval; // multiply: lval = lval * rval
                break;
            case '/':
                lval /= rval; // divide: lval = lval / rval
                break;
            default: // not another operator: print result
                cout << "Result: " << lval << '\n';
                keep_window_open();
            return 0;
        }
        cout << "al momento: " << lval << "\n";
    }
    error("bad expression");
}