#include <iostream>

template <typename T>
class Array {
private:
    T* data;
    int n;

public:
    // Constructor with input
    Array(int size) : n(size) {
        data = new T[n];
        std::cout << "Enter " << n << " elements:" << std::endl;
        for (int i = 0; i < n; ++i) {
            std::cin >> data[i];
        }
    }

    // Constructor from existing data
    Array(T* src, int size) : n(size) {
        data = new T[n];
        for (int i = 0; i < n; ++i) {
            data[i] = src[i];
        }
    }

    // Copy constructor
    Array(const Array& other) : n(other.n) {
        data = new T[n];
        for (int i = 0; i < n; ++i) {
            data[i] = other.data[i];
        }
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Method to view the array
    void view() {
        std::cout << "Array elements: ";
        for (int i = 0; i < n; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Method to form cumulative sum array
    Array<T> formCumulative() {
        T* cum = new T[n];
        T sum = T();  // Default initialization (assumes T can be zero-initialized)
        for (int i = 0; i < n; ++i) {
            sum += data[i];
            cum[i] = sum;
        }
        Array<T> newArray(cum, n);
        delete[] cum;
        return newArray;
    }
};

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    // Example with int
    Array<int> arrInt(N);
    arrInt.view();
    Array<int> cumInt = arrInt.formCumulative();
    std::cout << "Cumulative sums (int): ";
    cumInt.view();

    // Example with double
    Array<double> arrDouble(N);
    arrDouble.view();
    Array<double> cumDouble = arrDouble.formCumulative();
    std::cout << "Cumulative sums (double): ";
    cumDouble.view();

    return 0;
}
