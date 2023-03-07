#ifndef BAG_H
#define BAG_H

#include <cstdlib>
#include <cassert>
#include <algorithm>

namespace cs2337_23sp_bag {
        class bag {
                public:
                        typedef int value_type;
                        typedef size_t size_type;
                        static const size_type CAPACITY=30;
                        
                        bag() { used = 0; }
                        
                        size_type size() const { return used; }
                        void insert(const value_type& entry);
                        size_type count(const value_type& target) const;
                        bool erase_one(const value_type& target);
                        size_type erase(const value_type& target);
                        void operator +=(const bag& b);

                private:
                        value_type data[CAPACITY];
                        size_type used;
        };
}
#endif
