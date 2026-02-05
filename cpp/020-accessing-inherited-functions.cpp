#include <iostream>   // Provides cin and cout for input/output

using namespace std;

/*
    Class A
    Multiplies value by 2 and counts how many times it is called
*/
class A {
public:
    A() {
        callA = 0;    // Initialize call counter
    }

private:
    int callA;        // Counts how many times func() is called

    // Increments call counter
    void inc() {
        callA++;
    }

protected:
    // Multiplies the value by 2 and increments counter
    void func(int &a) {
        a = a * 2;
        inc();
    }

public:
    // Returns how many times A::func was called
    int getA() {
        return callA;
    }
};

/*
    Class B
    Multiplies value by 3 and counts how many times it is called
*/
class B {
public:
    B() {
        callB = 0;    // Initialize call counter
    }

private:
    int callB;        // Counts how many times func() is called

    // Increments call counter
    void inc() {
        callB++;
    }

protected:
    // Multiplies the value by 3 and increments counter
    void func(int &a) {
        a = a * 3;
        inc();
    }

public:
    // Returns how many times B::func was called
    int getB() {
        return callB;
    }
};

/*
    Class C
    Multiplies value by 5 and counts how many times it is called
*/
class C {
public:
    C() {
        callC = 0;    // Initialize call counter
    }

private:
    int callC;        // Counts how many times func() is called

    // Increments call counter
    void inc() {
        callC++;
    }

protected:
    // Multiplies the value by 5 and increments counter
    void func(int &a) {
        a = a * 5;
        inc();
    }

public:
    // Returns how many times C::func was called
    int getC() {
        return callC;
    }
};

/*
    Class D
    Inherits from A, B, and C
    Updates val based on prime factors 2, 3, and 5
*/
class D : public A, public B, public C {
    int val;   // Stores the current value

public:
    // Constructor initializes val to 1
    D() {
        val = 1;
    }

    // Updates val by factoring new_val into 2, 3, and 5
    void update_val(int new_val) {
        // Apply A::func for each factor of 2
        while (new_val % 2 == 0) {
            A::func(val);
            new_val /= 2;
        }

        // Apply B::func for each factor of 3
        while (new_val % 3 == 0) {
            B::func(val);
            new_val /= 3;
        }

        // Apply C::func for each factor of 5
        while (new_val % 5 == 0) {
            C::func(val);
            new_val /= 5;
        }
    }

    // Helper function to test update_val and print results
    void check(int); // Do not delete this line
};

/*
    Calls update_val and prints final value and function call counts
*/
void D::check(int new_val) {
    update_val(new_val);

    // Print final value and number of times each function was called
    cout << "Value = " << val << endl
         << "A's func called " << getA() << " times " << endl
         << "B's func called " << getB() << " times" << endl
         << "C's func called " << getC() << " times" << endl;
}

int main() {
    D d;              // Create object of class D
    int new_val;
    cin >> new_val;   // Read input value
    d.check(new_val); // Perform update and display results
}
