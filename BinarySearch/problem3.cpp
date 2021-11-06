//Find smallest letter greater than the target

#include <iostream>

using namespace std;


int find_ceiling_character(char letters[], char target, int size)
{
    int start = 0,end = size-1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(letters[mid] < target)
        start = mid + 1;
        else
        end = mid - 1;
    }

    return letters[start % size];

}
int main()
{
    char letters[] = {'c', 'f', 'h', 'l'};
    int size = sizeof(letters)/sizeof(letters[0]);

    char ans = find_ceiling_character(letters, 'd', size);

    std::cout<<"Ceiling of given character in array is :"<<ans<<std::endl;
   

    return 0;
}