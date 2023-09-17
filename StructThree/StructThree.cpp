#include <iostream>
#include <string>
#include <locale>

struct adress
{
    std::string city;
    std::string street;
    std::string home;
    std::string apartment;
    std::string index;
};

void console(adress* adress_ptr)
{
    std::cout << "Город: " << (*adress_ptr).city << std::endl;
    std::cout << "Улица: " << (*adress_ptr).street << std::endl;
    std::cout << "Номер дома: " << (*adress_ptr).home << std::endl;
    std::cout << "Номер квартиры: " << (*adress_ptr).apartment << std::endl;
    std::cout << "Индекс: " << (*adress_ptr).index << std::endl;
    std::cout << std::endl;
}

int main()
{
        setlocale(LC_ALL, "Russian");
        std::system("chcp 1251");

        adress a1, a2;
        a1.city = "Москва";
        a1.street = "Арбат";
        a1.home = "12";
        a1.apartment = "8";
        a1.index = "123456";

        a2.city = "Ижевск";
        a2.street = "Пушкина";
        a2.home = "59";
        a2.apartment = "143";
        a2.index = "953769";

        console(&a1);
        console(&a2);
   
}


