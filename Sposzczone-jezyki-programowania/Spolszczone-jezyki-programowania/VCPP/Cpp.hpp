#ifndef Cpp_HPP_DOLACZONE
  #define Cpp_HPP_DOLACZONE 1

  /// typy zwykle/podstawowe
  typedef calk      int
  typedef maly      short
  typedef duzy      long
  typedef dduzy     long long
  typedef nat       unsigned int
  typedef malynat   unsigned short
  typedef duzynat   unsigned long
  typedef dduzynat  unsigned long long
  typedef rzeczyw   float
  typedef _2rzeczyw double
  typedef d2rzeczyw long double
  typedef znak      char
  typedef plusznak  unsigned char
  typedef log       bool
  typedef pustka    void
  #define stala     const
  #define stalewyr  constexpr
  //---------------------------------------
  /// wskaznik i referencja
  typedef wsk     auto*
  typedef wskwsk  auto**
  typedef ref     auto&
  typedef refref  auto&&
  //---------------------------------------
  /// typy zlozone
  typedef klasa     class
  typedef struktura struct
  typedef wylicz    enum
  typedef unia      union
  //---------------------------------------
  /// kontenery
  typedef ciag      std::string
  typedef wektor    std::vector
  typedef tablica   std::array
  typedef lista     std::list
  typedef slownik   std::map
  typedef zbior     std::set
  typedef krotka    std::tuple
  typedef para      std::pair
  typedef kolonia   std::colony /// To dopiero BEDZIE w C++!
  typedef kolejka   std::queue
  typedef podw_kol  std::deque
  typedef stos      std::stack
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
  #define nicwsk      nullptr
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
