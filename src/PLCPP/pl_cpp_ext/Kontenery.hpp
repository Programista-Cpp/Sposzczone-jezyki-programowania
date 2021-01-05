#pragma once
#include<vector>
#include<concepts>
#include<array>
namespace plCppExt
{
    namespace Kontenery
    {
        using alfabet = std::array<char, 52>;
        constexpr alfabet Alfabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'w', 'v', 'x', 'y', 'z',
                                     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'W', 'V', 'X', 'Y', 'Z'};
        using cyfry = std::array<unsigned short, 10>;
        constexpr cyfry Cyfry = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        
        using operatory = std::array<std::string, 39>;
        constexpr operatory Operatory = {"++", "--", "+", "-", "*", "/", "%", "!", "&&", "||", "~", "&", "|", "^", "<<", ">>", "[]", "()", "?:",
                                         "+=", "-=", "*=", "/=", "%=", "==", "=", "!=", ">", "<", ">=", "<=", "<=>", ",", "~=", "&=", "|=", "^=", "<<=", ">>="};
        struct wieloTypowyKontener
        {
            std::vector<auto> dedukcyjne;
            std::vector<int> calkowite;
            std::vector<unsigned> naturalne;
            std::vector<short> male;
            std::vector<unsigned short> naturalne_male;
            std::vector<long> duze;
            std::vector<unsigned long> naturalne_duze;
            std::vector<long long> dduze;
            std::vector<unsigned long long> naturalne_dduze;
            std::vector<float> rzeczywiiste;
            std::vector<double> _2rzeczywiste;
            std::vector<long double> d2rzeczyw;
            std::vector<char> znaki;
            std::vector<unsigned char> dodatnie_znaki;
            std::vector<bool> logiczne;
            std::vector<void> pustki;
            std::vector<concept> koncepty;
            std::vector<std::string> ciagi_znakow;
        } demo;
        for(auto elem : Cyfry) demo.naturalne_male.push_back(elem);
        for(auto elem : Alfabet) demo.znaki.push_back(elem);
        for(auto elem : Operatory) demo.ciagi_znakow.push_back(elem);
    }
}
