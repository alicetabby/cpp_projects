#include <iostream>
#include "bag.h"
using namespace std;
using namespace cs2337_23sp_bag;

int main()
{
        bag b;
        
        b.insert(8);
        b.insert(4);
        b.insert(8);

        cout << "b.size() = " << b.size() << endl;

        bool check = b.erase_one(10);
        cout << "check = " << check << endl;

        check = b.erase_one(8);
        cout << "check = " << check << endl;
        
        cout << "b.size() = " << b.size() << endl;

        return 0;
}
