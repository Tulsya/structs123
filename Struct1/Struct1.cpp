#include <iostream>

enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December

};


int main()
{
    setlocale(LC_ALL, "Russian");
    Month month;
    int number;

    do {
        std::cout << "������� ����� ������:" << " ";
        std::cin >> number;
        if (number >= 1 || number <= 12) {
            month = Month(number);
            switch (month) {
            case Month::January: {
                std::cout << "������" << std::endl;
                break;
            }
            case Month::February: {
                std::cout << "�������" << std::endl;
                break;
            }
            case Month::March: {
                std::cout << "����" << std::endl;
                break;
            }

            case Month::April: {
                std::cout << "������" << std::endl;
                break;
            }
            case Month::May: {
                std::cout << "���" << std::endl;
                break;
            }
            case Month::June: {
                std::cout << "����" << std::endl;
                break;
            }
            case Month::July: {
                std::cout << "����" << std::endl;
                break;
            }
            case Month::August: {
                std::cout << "������" << std::endl;
                break;
            }
            case Month::September: {
                std::cout << "��������" << std::endl;
                break;
            }
            case Month::October: {
                std::cout << "�������" << std::endl;
                break;
            }
            case Month::November: {
                std::cout << "������" << std::endl;
                break;
            }
            case Month::December: {
                std::cout << "�������" << std::endl;
                break;
            }
            default: {
                std::cout << "������������ �����" << std::endl;
                break;
            }
            }
        }
        else if (number == 0) {
            std::cout << "�� ��������";
        }
    } while (number != 0);
}
