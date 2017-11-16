//
// Created by ���� on 16.11.2017.
//

#include "Utils.h"

int Utils::getNumber(int from, int to) {
    int result(0);
    std::cout << "ENTER NUMBER: ";
    while (true) {
        while (!(std::cin >> result)) {    //���� ���� ��㤠��
            std::cin.clear();            //��頥� ��⮪ �����
            //������㥬 ᫥���騥 (std::numeric_limits<std::streamsize>::max()) ᨬ����
            //�㭪�� std::numeric_limits<std::streamsize>::max() �����頥� 楫�� �᫮, ࠢ��� ࠧ���� ᨬ����� ��⮪�
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "WRONG INPUT. ENTER NUMBER: ";
        }
        if (result < from || result > to) {
            std::cout << "WRONG INPUT. ENTER NUMBER: ";
            continue;
        }
        else
            break;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return result;
}
