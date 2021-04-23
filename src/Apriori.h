#ifndef APRIORI_H
#define APRIORI_H

#include <cmath>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <algorithm>

#include "DataMining_Defs.h"

class Apriori {

    private:
        uint32 m_currentStep;
        uint32 m_subsetCounter;
        uint32 m_minAbsSupport;
        uint32 m_nTransactions;
        double m_minRelSupport;
        Matrix m_transactions;

        Nodes *m_root; 
        
        Frequents *m_allFrequentSets;
        Rules m_rules;
        List m_frequentSetsNumber;

        void traverseTree(Nodes *&root, const List *items, int depth);
        void getFrequentSets(Nodes *&root, const List *seen, int k);
        // NOTE: First method initializes rules generation
        // Second is used to traverse tree
        void generateRules();
        void generateRules(Nodes*&, int, const List*, const List&, const List*);

    public:
        Apriori(const Matrix &inputData, double minSupport, uint32 maxItems);
        void run();
        void printRules(uint32 nRules, Order order);
};

#endif