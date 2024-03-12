// LestaInternTest.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <chrono>
#include <ctime>

//проверка младшего бита
//
bool isEven2(int value) { return !(value & 1); }  


bool isEven(int value) { return value % 2 == 0; }

int main()
{
    unsigned int start_time = clock(); // начальное время
    // здесь должен быть фрагмент кода, время выполнения которого нужно измерить
    
    for (int i = 1; i < 10000000; ++i) {
        
        isEven2(rand());
    }
    
    
    unsigned int end_time = clock(); // конечное время
    unsigned int search_time = end_time - start_time; // искомое время
    std::cout << search_time;
    std::cout << isEven(124);
}

