﻿// integrirovanie.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include "intTrap.h"

int main()
{
    string x;
    int a = 0, b = 0, N = 0;
    intTrap f1;
    cout << "Vvedite formulu f(x): ";
    cin >> x;
    cout << endl;
    cout << "Vvedite nijneeu granizu integrirovaniya (a): ";
    cin >> a;
    cout << endl;
    cout << "Vvedite verxnieu granizu integrirovaniya (b): ";
    cin >> b;
    cout << endl;
    cout << "Vvedite kol-vo otrezkov (N): ";
    cin >> N;
    cout << endl;
    f1.f1(a, b, N, x);
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
