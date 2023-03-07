#include "bag.h"

namespace cs2337_23sp_bag {
        void bag::insert(const value_type& entry) 
        {
                assert(used < CAPACITY);
                data[used] = entry;
                ++used;
        }

        bag::size_type bag::count(const value_type& target) const
        {
                size_type answer = 0;
                for (size_type i = 0; i < used; ++i) {
                       if (data[i] == target)
                               ++answer;
                }
                return answer;
        }

        bool bag::erase_one(const value_type& target)
        {
                size_type i;
                i = 0;

                while ((i < used) && (data[i] != target))
                        i++;

                if (i == used)
                        return 0;

                data[i] = data[used - 1];
                --used;
                return 1;
        }
};
