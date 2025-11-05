#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

std::string int_to_hex(int num) {
    std::stringstream ss;
    unsigned int abs_val = (num < 0) ? -num : num;
    ss << std::hex << abs_val;
    return ss.str();
}

int main() {
    // Ввод символа и вывод в символьном виде и в виде кода
    char ch;
    std::cout << "Введите символ: ";
    std::cin >> ch;
    std::cout << "Символ: " << ch << " Код: " << static_cast<int>(ch) << std::endl;

    // Игнорируем оставшийся символ новой строки после ввода символа для корректного чтения строки
    std::cin.ignore();

    // Ввод строки символов (длина не менее 15, минимум два слова), определение длины и вывод с длиной
    std::string str;
    std::cout << "Введите строку (не менее 15 символов, минимум два слова): ";
    std::getline(std::cin, str);
    std::cout << "Строка: " << str << " Длина: " << str.length() << std::endl;

    // Ввод двух целых десятичных чисел (положительного и отрицательного)
    int pos_int, neg_int;
    std::cout << "Введите положительное целое число: ";
    std::cin >> pos_int;
    std::cout << "Введите отрицательное целое число: ";
    std::cin >> neg_int;

    // Вывод в десятичном виде с различными форматированиями
    std::cout << "Десятичный вид (положительное):" << std::endl;
    std::cout << std::left << std::setw(10) << pos_int << " (вывод с левой позиции поля, ширина 10)" << std::endl;
    std::cout << std::setw(5) << pos_int << " (вывод с заданной минимальной шириной поля 5)" << std::endl;
    std::cout << std::right << std::setw(10) << pos_int << " (вывод со смещением числа вправо, ширина 10)" << std::endl;
    std::cout << pos_int << " (без форматирования)" << std::endl;

    std::cout << "Десятичный вид (отрицательное):" << std::endl;
    std::cout << std::left << std::setw(10) << neg_int << " (вывод с левой позиции поля, ширина 10)" << std::endl;
    std::cout << std::setw(5) << neg_int << " (вывод с заданной минимальной шириной поля 5)" << std::endl;
    std::cout << std::right << std::setw(10) << neg_int << " (вывод со смещением числа вправо, ширина 10)" << std::endl;
    std::cout << neg_int << " (без форматирования)" << std::endl;

    // Вывод в шестнадцатеричном виде с различными форматированиями (с читаемым знаком для отрицательного)
    std::cout << "Шестнадцатеричный вид (положительное):" << std::endl;
    std::string pos_hex = int_to_hex(pos_int);
    std::cout << std::left << std::setw(10) << pos_hex << " (вывод с левой позиции поля, ширина 10)" << std::endl;
    std::cout << std::setw(5) << pos_hex << " (вывод с заданной минимальной шириной поля 5)" << std::endl;
    std::cout << std::right << std::setw(10) << pos_hex << " (вывод со смещением числа вправо, ширина 10)" << std::endl;
    std::cout << pos_hex << " (без форматирования)" << std::endl;

    std::cout << "Шестнадцатеричный вид (отрицательное):" << std::endl;
    std::string neg_hex = (neg_int < 0 ? "-" : "") + int_to_hex(neg_int);
    std::cout << std::left << std::setw(10) << neg_hex << " (вывод с левой позиции поля, ширина 10)" << std::endl;
    std::cout << std::setw(5) << neg_hex << " (вывод с заданной минимальной шириной поля 5)" << std::endl;
    std::cout << std::right << std::setw(10) << neg_hex << " (вывод со смещением числа вправо, ширина 10)" << std::endl;
    std::cout << neg_hex << " (без форматирования)" << std::endl;

    // Возвращаем к десятичному формату (не нужно, так как hex не применялся к cout)
    std::cout << std::dec;

    // Ввод двух чисел с плавающей точкой (положительного и отрицательного)
    double pos_double, neg_double;
    std::cout << "Введите положительное число с плавающей точкой: ";
    std::cin >> pos_double;
    std::cout << "Введите отрицательное число с плавающей точкой: ";
    std::cin >> neg_double;

    // Вывод в десятичной форме с точностью 3 знака после точки
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Десятичная форма (положительное): " << pos_double << std::endl;
    std::cout << "Десятичная форма (отрицательное): " << neg_double << std::endl;

    // Вывод в экспоненциальной форме с точностью 3 знака после точки
    std::cout << std::scientific << std::setprecision(3);
    std::cout << "Экспоненциальная форма (положительное): " << pos_double << std::endl;
    std::cout << "Экспоненциальная форма (отрицательное): " << neg_double << std::endl;

    // Ввод целого беззнакового числа
    unsigned int uns_int;
    std::cout << "Введите беззнаковое целое число: ";
    std::cin >> uns_int;

    // Вывод в виде десятичного целого без знака
    std::cout << "Десятичное без знака: " << uns_int << std::endl;

    // Вывод в виде восьмеричного целого без знака
    std::cout << std::oct << "Восьмеричное без знака: " << uns_int << std::endl;

    // Вывод в виде шестнадцатеричного целого без знака
    std::cout << std::hex << "Шестнадцатеричное без знака: " << uns_int << std::endl;

    return 0;
}