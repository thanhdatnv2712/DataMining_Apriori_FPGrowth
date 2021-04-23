#ifndef DATAMINING_DEFS_H
#define DATAMINING_DEFS_H

#include <set>
#include <string>
#include <vector>
#include <cstdint>
#include <iostream>
#include <unordered_map>

/** FP GROWTH DEFS **/

using Item = std::string;
using Transaction = std::vector<Item>;
using TransformedPrefixPath = std::pair<std::vector<Item>, uint64_t>;
using Pattern = std::pair<std::set<Item>, uint64_t>;

void show_Item(Item v);
void show_Transaction(Transaction v);
void show_TransformedPrefixPath(TransformedPrefixPath v);
void show_Pattern(Pattern v);

/** END FP GROWTH DEFS **/

// #define int8  int8_t
// #define int16 int16_t
// #define int32 int32_t
// #define int64 int64_t

// #define uint8  uint8_t
// #define uint16 uint16_t
// #define uint32 uint32_t
// #define uint64 uint64_t

// /** APRIORI **/
// struct matrixDimension {
// 	uint32 rows;
// 	uint32 columns;
// };

// enum Order {
// 	NONE = 0,
// 	ASC,
// 	DESC
// };

// struct Frequent {
// 		List items;
// 		uint32 support;
// };

// struct AssociationRule {
//     List x;
//     List y;
    
//     double setSupport;
//     double relSupport;
//     double confidence;
// };

// struct Node {
//     uint32 support;
//     std::unordered_map<uint32, Node*> *children;
// }

// typedef std::vector<uint32> List;
// typedef std::vector<List> Matrix;
// typedef std::vector<std::vector<Frequent*>> Frequents;
// typedef std::vector<AssociationRule> Rules;
// typedef std::unordered_map<uint32, Node*> Nodes;

// // utils function
// std::string vecToStr(std::vector<uint32> vec);

// /** END APRIORI **/
#endif //