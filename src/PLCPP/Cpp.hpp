#ifndef Cpp_HPP_DOLACZONE
  #define Cpp_HPP_DOLACZONE 1

  /// typy zwykle/podstawowe
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
  #define znak      char
  #define plusznak  unsigned char
  #define log       bool
  #define pustka    void
  #define stala     const
  #define stalewyr  constexpr
  #define koncept   concept
  //---------------------------------------
  /// wskaznik i referencja
  template<typename T>
  struct Wsk
  {
    T* wsk;
  } nicwsk;
  nicwsk.wsk = nullptr;

  template<typename T>
  struct Uniwsk
  {
    T** uniwsk;
  };
  template<typename T>
  struct Ref
  {
    T& ref;
  };
  template<typename T>
  struct Uniref
  {
    T&& uniref;
  };
  //---------------------------------------
  /// typy zlozone
  #define klasa     class
  #define struktura struct
  #define wylicz    enum
  #define unia      union
  //---------------------------------------
  /// kontenery
  #define ciag      std::string
  #ifdef _GLIBCXX_VECTOR
    #define wektor    std::vector
  #endif
  #ifdef _GLIBCXX_ARRAY
    #define tablica   std::array
  #endif
  #ifdef _GLIBCXX_LIST
    #define lista     std::list
  #endif
  #ifdef _GLIBCXX_MAP
    #define slownik   std::map
  #endif
  #ifdef _GLIBCXX_SET
    #define zbior     std::set
  #endif
  #ifdef _GLIBCXX_TUPLE
    #define krotka    std::tuple
  #endif
  #define para      std::pair
  #ifdef _GLIBCXX_QUEUE
    #define kolejka   std::queue
  #endif
  #ifdef _GLIBCXX_DEQUE
    #define podw_kol  std::deque
  #endif
  #ifdef _GLIBCXX_STACK
    #define stos      std::stack
  #endif
  /// Przyszle
  #ifdef __CPP_2b /// Musisz to zdefiniowac jak na razie, aby przed dodaniem do jezyka sie skompilowalo
  /// Kontenery
    #define kolonia   std::colony
    #ifdef _GLIBCXX_RANGES  /// Dla przyszlego std::ranges::accumulate
      #define akumuluj(x, y, z) std::ranges::accumulate(x, y, z) /// Dla std::accumulate patrz: inne slowa kluczowe -> algorytmy
    #endif
  #endif
  //---------------------------------------
  /// rzeczy na "t"
  #define szablon   template
  #define nazwatypu typename
  #define deftypu   typedef
  #define idtypu    typeid
  
  //---------------------------------------
  // modyfikatory
  #define statyczne   static
  #define publiczne   public
  #define prywatne    private
  #define chronione   protected
  #define przyjazne   friend
  //---------------------------------------
  #define NIC         NULL
  //---------------------------------------
  // directives
  #define def       define
  #define uzywaj    using
  #define przestrz  namespace
  #define importuj  import
  #define modul     module
  //----------------------------------------
  // inne slowa kluczowe
  #define wymaga requires
  #define probuj      try
  #define lap         catch
  #define ostatecznie finally
  #define jesli       if
  #define inacz_jesli else if
  #define inaczej     else
  #define przelacz    switch
  #define mozliwosc   case
  #define dopoki      while
  #define rob         do
  #define dla         for
  #define wyjatek     std::exception
  /// I/O
  #define drukuj      std::cout<<
  #define czytaj      std::cin>>
  #define drukuj_blad std::cerr<<
  #define zapis       std::clog<<
  /// przeplyw kontroli
  #define zwroc       return
  #define kontynuuj   continue
  #define break       przerwij
#endif
