#include <iostream>

using namespace std;

void exponent(double num, int P) {
    int i = 0;
    int sum = 1;
    int sub = 1;
    for(i; i < P; i++){
        int multi = num*sum;
        sum = 0;
        sum += multi;
       
    }
    cout << sum;
}

void summation(int final, double sumterm, int initial){
    int base = 0;
    double summation;
    for(initial; initial <= final; initial++){
        int sum = sumterm + base;
        summation += sum;
    }
    cout << summation;
}

void transpose(float *src, float *dst, const int N, const int M) {
    int n,i,j;
    for(n = 0; n < N*M; n++) {
        i = n / N;
        j = n % N;
        dst[n] = src[M*j + i];
    }
}

void permutation(double num, int P) {
    int i = 0;
    double sum = num;
    int reduct = 1;
    bool looped = false;
    double perm_sum;
    for(i; i < P; i++){
        cout << "Initial sum: " << sum << endl;
        double multi = sum*(num-reduct);
        cout << "Added to sum: " << multi << endl;
        sum = multi;
        reduct += 1;
        perm_sum += multi;
        cout << "Sum total: " << sum << endl;
    }
    cout << "Answer: ";
    cout << sum;
}