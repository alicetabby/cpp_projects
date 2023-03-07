#include <iostream>
#include "bag.h"
using namespace std;
using namespace cs2337_23sp_bag;

int main()
{
        bag b;
        b.insert(11);
        b.insert(12);
        b.insert(11);

        b += b;
        int n = b.size();

        cout << "n = " << n << endl;


        return 0;
}
