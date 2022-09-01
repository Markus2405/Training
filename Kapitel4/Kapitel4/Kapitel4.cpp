#include <iostream>

int enterInteger() {
    std::cout << "enter an integer between 0 and 9: ";
    int x{};
    std::cin >> x;

    return x;
}


int main() {
    
    int x{ enterInteger() };

    if (x == 2)
        std::cout << "The digit is prime";
    else if (x == 3)
        std::cout << "The digit is prime";
    else if (x == 5)
        std::cout << "The digit is prime";
    else if (x == 7)
        std::cout << "The digit is prime";
    else
        std::cout << "The digit is not prime";


    return 0;

}



















/*
int enterInteger() {
    std::cout << "enter an integer: ";
    int x{};
    std::cin >> x;

    return x;
}

bool isEqual(int x, int y) {
    return x == y;
}


int main() {

    int x{ enterInteger() };
    int y{ enterInteger() };


    std::cout << std::boolalpha;

    
    if (isEqual(x,y)) {
        std::cout << x << " and " << y << " are equal\n";
    }
    else
    {

        std::cout << x << " and " << y << " aren't equal\n";
    }
    
}

*/

/*
int main() {

    std::cout << 5.0 << '\n';
    std::cout << 6.002f << '\n';
    std::cout << 6525145.241 << '\n';
    std::cout << 5.0f << '\n';

    return 0;
}
*/



/*        chapter 4.1
int main()
{
    std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
    std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
    std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
    std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
    std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
    std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
    std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
    std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
    std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
    std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
    std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
    std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

    return 0;
}*/