#ifndef TypyDyrektywy_HPP_DOLACZONE
  #define TypyDyrektywy_HPP_DOLACZONE 1

  //typy zwykle
  #define calk      int
  #define maly      short
  #define duzy      long
  #define dduzy     long long
  #define nat       unsigned int
  #define malynat   unsigned short
  #define duzynat   unsigned long
  #define dduzynat  unsigned long long
  #define rzeczyw   float
  #define _2rzeczyw double
  #define d2rzeczyw long double
  #define ciag      string
  #define znak      char
  #define plusznak  unsigned char
  #define log       bool
  #define pustka    void
  #define stala     const
  #define stalewyr  constexpr
  //---------------------------------------
  //wskaznik
  #define wsk auto*
  //---------------------------------------
  //typy zlozone
  #define klasa     class
  #define strukt    struct
  #define wylicz    enum
  #define unia      union
  //---------------------------------------
  //typy generyczne
  #define wektor    std::vector
  #define tablica   std::array
  #define lista     std::list
  #define slownik   std::map
  #define zestaw    std::set
  #define szablon   template
  #define nazwatypu typename
  #define deftypu   typedef
  #define idtypu    typeid
  
  //---------------------------------------
  //modyfikatory
  #define statycz   static
  #define publicz   public
  #define prywat    private
  #define chronione protected
  #define przyjaz   friend
  #define NIC       NULL
  
  
  //---------------------------------------
  //dyrektywy
  #define def       define
  #define uzywaj    using
  #define przestrz  namespace
  #define importuj  import
  #define modul     module
#endif
