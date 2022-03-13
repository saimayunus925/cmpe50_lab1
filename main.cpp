
#include <iostream>

void part1(); // function for Part 1 of the lab
void part2(); // function for Part 2 of the lab
void part3(); // function for Part 3 of the lab

int main() {
    part1();
    part2();
    part3();
    return 0;
}

void part1() {
    std::cout << "A fool thinks himself to be wise, but a wise man knows himself to be a fool." << std::endl;
}

void part2() {
    // part 2
    int n = 0; // an int variable
    std::cout << "Enter an integer: " << std::endl;
    std::cin >> n; // read in the variable
    std::cout << n << " squared == " << n * n << std::endl; // print out square of variable's value
}

void part3() {
    // part 3
    bool is_prime = true; // note: use an 'is_prime' flag for if a number is prime or not
    // set it to true so that it can be marked false for non-prime numbers
    int k = 0; // we'll check if this int is prime or not, assume k > 2
    // we must find and print all the prime #s b/w 3 and k
    for (int counter = 3; counter <= k; counter++) {
        // this outer loop iterates thru all whole numbers b/w 3 and k
        for (int num = 2; num <= counter-1; num++) {
            // this inner loop checks if each number 'counter' from the outer loop is prime
            // find out if a number 'counter' is prime: check if any #s from 2 to (counter-1) divide it evenly.
            // If so, 'counter' isn't prime. A prime #'s divisors are only itself and 1.
            if (counter % num == 0) { is_prime = false; break; } // if any # 'num' from 2 to (counter-1) divides 'counter' evenly, clear our flag
        }
        // now we're out of the inner loop and so we've checked each number b/w 2 and 'counter-1'
        if (is_prime) std::cout << counter << " is a prime number." << std::endl; // if 'is_prime' flag is set for 'counter', print 'counter'
    }
}

