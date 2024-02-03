// PracticalWork (tema16).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <time.h>
#include <stdio.h> 



int main()
{
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    int sum=0;

    const int size = 10;
    int array[size][size];
    for (int i = 0; i < size; i++)

    {
        for (int j = 0; j < size; j++)

        {
            std::cout.width(3);
            array[i][j] = i + j;
            std::cout << array[i][j];

            if (i == buf.tm_mday % size)
            {
                sum += array[i][j];
            }

        }
        std::cout << "\n";
    }

    std::cout << "Sum of all elements in line " << buf.tm_mday % size << " = " << sum;
    
} 

