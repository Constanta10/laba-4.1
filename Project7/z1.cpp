//���� ����� ����� N � ����� �� N ������������� ������������ �����.������� � ��� �� ������� ������� ����� ���� ����� �� �������
//������(��� ������������ ����� � ������� ����� ������), � ����� ������������ ���� ������� ������

#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int N;
    float *a;
    cout << "������� ���������� �����: ";
    cin >> N;

    a = new  float[N];
    cout << "������� " << N << " �����: ";
    for (int i = 0; i < N; i++) {
        cin >> a[i] ;
    }

    double product = 1.0;
    cout << "������� ����� �����: ";
    for (int i = 0; i < N; i++) {
        double fractional = a[i] - static_cast<int>(a[i]);
        cout << fractional << " ";
        product *= fractional;
    }

    cout << "\n������������ ������� ������: " << product << endl;
    return 0;
}
