#include <iostream>

using namespace std;

const int MAX = 20;

int main()
{
    long smallestMultiple = 0;
    bool finish = false;
    cout << "Smallest multiple!" << endl;
    while(!finish){
        ++smallestMultiple;
        for(int i = 1; i < MAX; ++i)
        {
            if((smallestMultiple % i) == 0)
            {
                finish = true;
            }
            else
            {
                finish = false;
                break;
            }
        }
    }
    cout << smallestMultiple << endl;
    return 0;
}

