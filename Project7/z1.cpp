//ƒано целое число N и набор из N положительных вещественных чисел.¬ывести в том же пор€дке дробные части всех чисел из данного
//набора(как вещественные числа с нулевой целой частью), а также произведение всех дробных частей

#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int N;
    float *a;
    cout << "¬ведите количество чисел: ";
    cin >> N;

    a = new  float[N];
    cout << "¬ведите " << N << " чисел: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i] ;
    }

    double product = 1.0;
    cout << "ƒробные части чисел: ";
    for (int i = 0; i < N; i++) {
        double fractional = a[i] - static_cast<int>(a[i]);
        cout << fractional << " ";
        product *= fractional;
    }

    cout << "\nѕроизведение дробных частей: " << product << endl;
    return 0;
}
