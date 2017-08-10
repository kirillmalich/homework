
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

/* //Заполнить массив: 9 8 7 6 5 4 3 2 1;

    const int N = 9;

    int mass[N];

    for(int i = 0; i < N; ++i)
    {
        mass[i] = N -i;
    }

    for(int i =0;i<N; ++i )
    {
        std::cout<<mass[i]<<" ";
    }


*/


/*  Заполнить массив случайными числами и найти минимальный в нем;


    int arr[] = {103, 30, 22, 17, 23, 67};
    N=sizeof(arr) / sizeof(arr[0]);


    int min = arr[0];
    for(size_t i = 0; i < N; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
std::cout<<min<<std::endl;

*/
    //Найти позицию минимального и максимального элемента;

/*    int N;
    int maxPosition = 0, minPosition = 0;


    int arr[] = {103, 30, 22, 17, 23, 67};
    N=sizeof(arr) / sizeof(arr[0]);


    int min = arr[0]; int max = arr [0];
    for(size_t i = 0; i < N; ++i)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            minPosition = i;
        }
        if(arr[i]>max)
        {
            max = arr[i];
            maxPosition = i;
        }
    }
    std::cout<< "max position: " <<maxPosition <<" "<< "min position: " <<minPosition <<std::endl;



*/ //Распечатать массив случайных чисел в обратном порядке;
/*    int N;
    std::cin>>N;

    std::srand(std::time(0));

    int *mass = new int[N];

    for(int i=0; i<N; i++)
    {
        mass[i] = std::rand()%100;
        std::cout<<mass[i]<<" ";
    }
std::cout<<std::endl;

   for(int i = N - 1; i>=0; i--)
    {
        mass[i];
        std::cout<<mass[i]<<" ";
    }
delete []mass;

 */
    //Найти среднее арифметическое всех элементов в массиве;

/*    int N;
    std::cin>>N;
    int sum = 0;
    float avg;

    std::srand(std::time(0));

    int *mass = new int[N];

    for(int i=0; i<N; i++)
    {
        mass[i] = std::rand()%100;
        std::cout<<mass[i]<<" ";
        sum+=mass[i];
    }
    std::cout<<std::endl;

    avg = sum/N;

    std::cout<<avg;

    delete []mass;

*/


/*    //Найти в массиве два элемента, которые в сумме дают наибольшее значение среди всех других пар;

    int N;
    int maxPosition = 0, minPosition = 0;


    int arr[] = {103, 30, 73, 17, 23, 54};
    N=sizeof(arr) / sizeof(arr[0]);

    int maxSum = arr [0];
    int sum = 0;
    int max1 = 0;
    int max2 = 0;
    int maxPos1 = 0;
    int maxPos2 = 0;

    for(size_t i = 0; i < N; ++i)
    {
       arr[i];
        for(size_t j = N - 1; j > 0; --j)
        {
            sum = arr[i] + arr[j];
            if(sum>maxSum && arr[j] != arr[i])
            {
                maxSum = sum;
                max1=arr[i];
                max2=arr[j];
                maxPos1 = i;
                maxPos2 = j;
            }
        }
    }

    std::cout<<"Max sum is "<<maxSum<<std::endl;
    std::cout<<"With number "<<max1<<", position "<<maxPos1<<" and number "<<max2<<", position "<<maxPos2<<std::endl;


*/


/*    //Перевернуть массив. Вход: 4 3 9 8 1 . Выход: 1 8 9 3 4
    int N;

    int arr[] = {4, 3, 9, 8, 1, 3, 92, 17, 23};
    N=sizeof(arr) / sizeof(arr[0]);


    for(int i = 0, j = N -1; i < j; ++i, --j)
    {
        int holder = arr[i];
        arr[i] = arr[j];
        arr[j] = holder;
    }

    for(int i=0;i<N;++i)
    {
        std::cout<<arr[i]<<std::endl;
    }

*/

    return 0;
}