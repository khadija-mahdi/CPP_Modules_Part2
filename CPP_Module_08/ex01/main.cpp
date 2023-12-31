#include "Span.hpp"

int main()
{
    /*
    {   
        std::vector<long int> v;
        for (size_t i = 0; i < 11; i++)
            v.push_back(i);
        Span cpy = Span(10);

        try
        {
            cpy.addNumbers(v.begin(), v.end());
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        cpy.printSpan();
    }
    */

   /*

    Span sp = Span(10);
    try
    {
      for (int i = 0 ; i< 10 ; i++)
            sp.addNumber(i);
    }
    catch (std::exception const &e)
    {
        std::cout << e.what() << std::endl;
    }
    sp.printSpan();
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cout << e.what() << std::endl;
    }

    */
   //    subject example :
        Span sp = Span(5);
        try
        {
            /* code */
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
}
