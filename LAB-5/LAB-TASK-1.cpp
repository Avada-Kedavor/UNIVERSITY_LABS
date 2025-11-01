#include <iostream>
#include <stdexcept>
using namespace std;

class Equation {
private:
    int k;
    int b;
    int y;

public:
    // Конструктор для установки y
    Equation(int yVal) {
        y = yVal;
    }

    // Ввод коэффициентов
    void InputCoefficients() {
        cout << "Введите k = ";
        cin >> k;

        cout << "Введите b = ";
        cin >> b;
    }

    // Вычисление x: y = kx + b => x = (y - b) / k
    double Root() {
        if (k == 0) {
            throw invalid_argument("Коэффициент k не может быть равен нулю.");
        }
        return static_cast<double>(y - b) / k;
    }
};

int main() {
    int y;
    cout << "Введите y = ";
    cin >> y;

    Equation eq(y);
    eq.InputCoefficients();

    try {
        double x = eq.Root();
        cout << "Значение x = " << x << endl;
    } catch (const exception &e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
