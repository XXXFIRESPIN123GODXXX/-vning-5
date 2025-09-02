#include <iostream>

void fourToNine() {
   
   int a{ 1 };
   int b{ 2 };
   int c{ 3 };
   int d{ 4 };
   int e{ 5 };
   int f{ 6 };

   int* pointa = &a;

   int* pointb = &b;
   int* pointc = &c;
   int* pointd = &d;
   int* pointe = &e;
   int* pointf = &f;

   std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << "\n\n";

   std::cout << pointa << '\n' << pointb << '\n' << pointc << '\n' << pointd << '\n' << pointe << '\n' << pointf << "\n\n";

   *pointa = 6;
   *pointb = 5;
   *pointc = 4;
   *pointd = 3;
   *pointe = 2;
   *pointf = 1;
   std::cout << pointa << '\n' << pointb << '\n' << pointc << '\n' << pointd << '\n' << pointe << '\n' << pointf << "\n\n";
   std::cout << a << '\n' << b << '\n' << c << '\n' << d << '\n' << e << '\n' << f << "\n\n";


   std::cout << sizeof a;
   system("pause");
}

void tenToThirtn() {
    int die[6]{ 11,22,33,44,55,66 };

    for (int i{ 0 }; i <= 5; i++)
    {
        std::cout << die[i] << '\n';
    }
}
void fourtnToFiftn() {

    int ad{ 3 };
    char chr{'d'};
    short efa{ 71 };
    long gad{ 23 };
    bool playing{ true };
    float bomba{ 3.3 };
    double bombo{ 3.32 };

    int* pntAD{ &ad };
    char* pntCHAR{ &chr };
    short* pntSHORT{ &efa };
    long* pntLONG{ &gad };
    bool* pntBOOL{ &playing };
    float* pntFLOAT{ &bomba };
    double* pntDBL{ &bombo };




    std::cout << "Type:\t\tSize:\tPointer Size:\n\n";
    std::cout << "int\t\t" << sizeof ad << '\t' << sizeof pntAD  << '\n';
    std::cout << "char\t\t" << sizeof chr << '\t' << sizeof pntCHAR << '\n';
    std::cout << "short\t\t" << sizeof efa << '\t' << sizeof pntSHORT << '\n';
    std::cout << "long\t\t" << sizeof gad << '\t' << sizeof pntLONG << '\n';
    std::cout << "bool\t\t" << sizeof playing << '\t' << sizeof pntBOOL << '\n';
    std::cout << "float\t\t" << sizeof bomba << '\t' << sizeof pntFLOAT << '\n';
    std::cout << "double\t\t" << sizeof bombo << '\t' << sizeof pntDBL << '\n';


}
void sixtnToNintn() {
    int x{ 4 };

    int* pointX{ &x };
    int* pointXtwo{ &x };

    std::cout << pointX << '\n' << pointXtwo;
}

void Increment(int* pointer) {
    
     pointer+=1;
}
int main()
{
    //fourToNine();
    //tenToThirtn();
    //fourtnToFiftn();

    //sixtnToNintn();

    int x{ 4 };

    int* pointX{ &x };
    int* pointXtwo{ &x };


   /* std::cout << pointX << '\n' << pointXtwo << '\n\n';*/


    std::cout << x << '\n';
    Increment(pointX);
    std::cout << x << '\n';










    return 0;
}