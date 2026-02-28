#ifndef Question3
#define Question3
#include<string>
namespace prc2{

    class String_Numbers{
        public :
            String_Numbers();
            virtual ~String_Numbers();

            int subtract(std::string str1, std::string str2);
            int divide(std::string str1, std::string str2);

    };
    
        void do_long_devision(std::string divident,std::string divisor);
}
#endif