#include <cassert>
#include <cstdlib>
#include <iostream>
#include <set>
#include <vector>

#include "src/FPTree.h"
#include "src/DataMining_Defs.h"

void test_1()
{
    const Item a{ "A" };
    const Item b{ "B" };
    const Item c{ "C" };
    const Item d{ "D" };
    const Item e{ "E" };

    const std::vector<Transaction> transactions{
        { a, b },
        { b, c, d },
        { a, c, d, e },
        { a, d, e },
        { a, b, c },
        { a, b, c, d },
        { b, c },
        { a, b, c },
        { a, b, d },
        { b, c, e }
    };

    const uint64_t minimum_support_threshold = 2;

    const FPTree fptree{ transactions, minimum_support_threshold };

    const std::set<Pattern> patterns = FPTree_growth( fptree );
    std::cout << "Set Patterns" << std::endl;
    std::set<Pattern>::iterator it;
    for (it= patterns.begin() ; it != patterns.end(); it++ )
        show_Pattern(*it); 
}

void test_2()
{
    const Item a{ "A" };
    const Item b{ "B" };
    const Item c{ "C" };
    const Item d{ "D" };
    const Item e{ "E" };
    const Item h{ "H" };
    const Item p{ "P" };
    const Item g{ "G" };
    const Item u{ "U" };
    const Item r{ "R" };
    const Item n{ "N" };
    const Item i{ "I" };

    const std::vector<Transaction> transactions{
        { a, b, c, d, e },
        { b, e, a, c, h },
        { p, a, g, e },
        { u, r, b, a, n, a },
        { g, a, u, d, i }
    };

    const uint64_t minimum_support_threshold = 3;

    const FPTree fptree{ transactions, minimum_support_threshold };

    const std::set<Pattern> patterns = FPTree_growth( fptree );
    std::cout << "Set Patterns" << std::endl;
    std::set<Pattern>::iterator it;
    for (it= patterns.begin() ; it != patterns.end(); it++ )
        show_Pattern(*it); 
}

int main(int argc, const char *argv[])
{
    test_1();
    test_2();
    std::cout << "All tests passed!" << std::endl;

    return EXIT_SUCCESS;
}
