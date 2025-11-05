#include <iostream>
#include <string>

template <typename T>
class DynamicArray {
private:
    T* data;
    int size;

public:
    // Конструктор по умолчанию
    DynamicArray(int n = 0) : size(n), data(n > 0 ? new T[n] : nullptr) {}

    // Конструктор: принимает размер N и указатель на массив для копирования
    DynamicArray(int n, const T* arr) : size(n), data(n > 0 ? new T[n] : nullptr) {
        for (int i = 0; i < size; ++i) {
            data[i] = arr[i];
        }
    }

    // Копирующий конструктор
    DynamicArray(const DynamicArray& other) : size(other.size), data(other.size > 0 ? new T[other.size] : nullptr) {
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
    }

    // Оператор присваивания
    DynamicArray& operator=(const DynamicArray& other) {
        if (this == &other) return *this;
        delete[] data;
        size = other.size;
        data = size > 0 ? new T[size] : nullptr;
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
        return *this;
    }

    // Деструктор
    ~DynamicArray() {
        delete[] data;
    }

    // Оператор доступа
    T& operator[](int i) { return data[i]; }
    const T& operator[](int i) const { return data[i]; }

    // Метод просмотра значений массива
    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    // Метод для формирования нового массива с кумулятивными суммами
    template <typename R = T>
    DynamicArray<R> cumulativeSum() const {
        DynamicArray<R> result(size);
        R sum = R();
        for (int i = 0; i < size; ++i) {
            sum += data[i];
            result[i] = sum;
        }
        return result;
    }
};

int main() {
    // Пример использования с целыми числами
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    DynamicArray<int> original(n, arr);
    
    std::cout << "Исходный массив: ";
    original.print();
    
    DynamicArray<int> cumSum = original.cumulativeSum();
    std::cout << "Массив кумулятивных сумм: ";
    cumSum.print();

    // Пример с вещественными числами
    double darr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    DynamicArray<double> doriginal(n, darr);
    
    std::cout << "Исходный массив вещественных чисел: ";
    doriginal.print();
    
    DynamicArray<double> dcumSum = doriginal.cumulativeSum();
    std::cout << "Массив кумулятивных сумм вещественных чисел: ";
    dcumSum.print();

    // Пример с символами (char), где + будет конкатенацией в строки
    char carr[] = {'a', 'b', 'c', 'd', 'e'};
    DynamicArray<char> coriginal(n, carr);
    
    std::cout << "Исходный массив символов: ";
    coriginal.print();
    
    DynamicArray<std::string> ccumSum = coriginal.cumulativeSum<std::string>();
    std::cout << "Массив кумулятивных сумм символов: ";
    ccumSum.print();

    return 0;
}
