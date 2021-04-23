#include "DataMining_Defs.h"

using Item = std::string;
using Transaction = std::vector<Item>;
using TransformedPrefixPath = std::pair<std::vector<Item>, uint64_t>;
using Pattern = std::pair<std::set<Item>, uint64_t>;

void show_Item(Item v) {
    std::cout << "Item: " << v << std::endl << std::endl;
}

void show_Transaction(Transaction v) {
    std::cout << "Transaction size: " << v.size() << std::endl;
    for (int i = 0; i < v.size(); i++) {
        std::cout << "\tItem: " << v[i] << std::endl;
    }
    std::cout << std::endl;
}

void show_TransformedPrefixPath(TransformedPrefixPath v) {
    std::cout << "TransformedPrefixPath" << std::endl;
    std::cout << "Item List size: " << v.first.size() << std::endl;
    for (int i = 0; i < v.first.size(); i++) {
        std::cout << "\tItem: " << v.first[i] << std::endl;
    }
    std::cout << v.second << std::endl << std::endl;
}

void show_Pattern(Pattern v) {
    std::cout << "Itemset: {";
    std::set<Item>::iterator it;
    for (it= v.first.begin() ; it != v.first.end(); it++ )
        std::cout << *it << ", ";
    std::cout << "} Support: " << v.second << std::endl << std::endl;
    // std::cout << v.second << std::endl << std::endl;
}
