#include <iostream>

using namespace std;

// ������������ �����, �� �������� ���������� �����
int number; 

// ������� ��� ����������� ������� ������� ������ �����
int divisors(int n) {
    
  int count = 0; // �����, �� ������ ������� �������
  
  // ����, �� ����� ����� �����, ��� ������ ��� ������� n
  for (int i = 1; i <= n; i++) {
    // �������� ������ ������ �� i ����� n
    if (n % i == 0) {
      count++; // ���� ����� �������, �� ������ 1 �� ������� �������
    }
  }
  return count; // ������� ������� ������� � �������
}

int main() {

  cout << "������ ���������� �����" << endl; // ��������� � ������� �������
  cin >> number; // �������� ������������ ����� � ������
  if (cin.fail()) { // �������� ��������� ��������
      cout << "�������! ������������ �������� �� ������ ���������� �����" << endl; // ����������� ��� ����������� ��������
      exit(0); // ��������� ��������� ��������
  }
  int count = divisors(number); // ������ ������� divisors()

  cout << "ʳ������ ������� ����� - " << count << endl; // ��������� ������� �������

  return 0;
}