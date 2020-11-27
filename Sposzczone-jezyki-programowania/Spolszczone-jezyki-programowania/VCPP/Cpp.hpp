#ifndef Cpp_HPP_DOLACZONE
  #define Cpp_HPP_DOLACZONE 1

  // common/base types
  typedef calk      int
  tyedef  maly      short
  typedef duzy      long
  typedef dduzy     long long
  typedef nat       unsigned int
  typedef malynat   unsigned short
  typedef duzynat   unsigned long
  typedef dduzynat  unsigned long long
  typedef rzeczyw   float
  typedef _2rzeczyw double
  typedef d2rzeczyw long double
  typedef ciag      string
  typedef znak      char
  typedef plusznak  unsigned char
  typedef log       bool
  typedef pustka    void
  #define stala     const
  #define stalewyr  constexpr
  //---------------------------------------
  // pointer and reference
  typedef wsk     auto*
  typedef wskwsk  auto**
  typedef ref     auto&
  typedef refref  auto&&
  //---------------------------------------
  // complex types
  typedef klasa     class
  typedef strukt    struct
  typedef wylicz    enum
  typedef unia      union
  //---------------------------------------
  // generic types
  typedef wektor    std::vector
  typedef tablica   std::array
  typedef lista     std::list
  typedef slownik   std::map
  typedef zbior    std::set
  #define szablon   template
  #define nazwatypu typename
  #define deftypu   typedef
  #define idtypu    typeid
  
  //---------------------------------------
  // modifiers
  #define statycz   static
  #define publicz   public
  #define prywat    private
  #define chronione protected
  #define przyjaz   friend
  #define NIC       NULL
  
  
  //---------------------------------------
  // directives
  #define def       define
  #define uzywaj    using
  #define przestrz  namespace
  #define importuj  import
  #define modul     module
#endif
