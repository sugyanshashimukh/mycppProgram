#include <iostream>
#include <algorithm>
void display(int a)
{
    std::cout<<a<<" ";
}
int main() {
    int arr[] = { 1, 2, 3, 4, 5,6 , 7 ,8, 9, 10 };
    std::for_each(arr, arr + sizeof(arr) / sizeof(int), &display);
    std::cout << std::endl;
    return 0;

}

