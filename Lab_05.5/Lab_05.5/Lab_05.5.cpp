#include <iostream>
#include <cmath>
#include <iomanip> 


using namespace std;


double recursive_sequence(int n) {
    if (n == 1) {
        return 1.0; 
    }
    else {
        double prev = recursive_sequence(n - 1);
        return (1.0 / 3.0) * (2 * prev + 8 / pow(prev, 2));
    }
}


double find_limit(int max_iterations, double tolerance) {
    double prev = 1.0; 
    double current;

    for (int n = 2; n <= max_iterations; n++) {
        current = (1.0 / 3.0) * (2 * prev + 8 / pow(prev, 2));
        if (fabs(current - prev) < tolerance) { 
            cout << "The sequence coincides with n = " << n << " To the value: " << current << endl;
            return current;
        }
        prev = current; 
    }

    cout << "No agreeement was reached for " << max_iterations << " irearions:" << endl;
    return current;
}

int main() {
    int n;
    cout << "n: ";
    cin >> n;

    
    double result = recursive_sequence(n);
    cout << "a " << n << " = " << fixed << setprecision(6) << result << endl;


    int max_iterations = 1000; 
    double tolerance = 1e-6; 
    double limit = find_limit(max_iterations, tolerance);

    cout << "limit: " << fixed << setprecision(6) << limit << endl;

    return 0;
}
