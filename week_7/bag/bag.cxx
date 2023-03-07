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

        bag::size_type bag::erase(const value_type& target)
        {
                size_type n_removed = 0;
                size_type i = 0;
                while (i < used) {
                        if (data[i] == target){
                                data[i] = data[used - 1];
                                --used;
                                ++n_removed;
                        } else
                                ++i;
                }
                return n_removed;
        }

        void bag::operator +=(const bag& b)
        {
                assert(used+b.size() <= CAPACITY);
                /*
                size_type b_size = b.size();

                for (size_type i=0; i<b_size; ++i) {
                        data[used] = b.data[i];
                        ++used;
                }
                */


                std::copy(b.data, b.data+b.used, data+used);
                used += b.used;
        }
};
