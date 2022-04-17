#include <iostream>
using namespace std;

//template <typename T>
//T Bubble(T ar[],const int size)
//{
//    
//    int temp = 0;
//    for (int i = 0; i < size; i++)
//    {
//        for (int k = size - 1; k > 0 ; k--)
//        {
//            if (ar[k - 1] > ar[k])
//            {
//                temp = ar[k];
//                ar[k] = ar[k - 1];
//                ar[k - 1] = temp;
//            }
//        }
//    }
//
//    for (int i = 0; i < size; i++)
//    {
//        cout << ar[i] << "\n";
//    }
//    
//    return size;
//}

//T Insertion(T ar[], int size)
//{
//    for (int br = 0; br < size; br++)
//    {
//        int value = ar[br];
//        int number;
//        for (number = br - 1; number >= 0 && ar[number] > value; number--)
//        {
//            ar[number + 1] = ar[number];
//        }
//        ar[number + 1] = value;
//    }
//
//    return size;
//}

//T Selection(T ar[], int size)
//{
//    for (int i = 0; i < size; i++)
//    {
//        int MinIndex = i;
//        int MinValue = ar[i];
//        for (int q = i + 1; q < size; q++)
//        {
//            if (ar[q] < MinValue)
//            {
//                MinIndex = q;
//                MinValue = ar[q];
//            }
//        }
//        ar[MinIndex] = ar[i];
//        ar[i] = MinValue;
//    }
//    return size;
//}

int main()
{

    // TASK 1  Пузырьком
    /*const int size = 10;
    int ar[size] = {2,3,1,5,6,9,7,10,5,4};

    Bubble(ar, size);*/

    // TASK 2 Вставками

    /*const int size = 10;
    int ar[size] = { 12,5,8,2,7,1,32,15,14,9 };
    
    Insertion(ar, size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << "\n";
    }*/

    // TASK 3 Выбором

    /*const int size = 10;
    int ar[size] = { 15,25,4,6,1,2,3,8,9,11 };

    Selection(ar, size);

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << "\n";
    }*/
}


