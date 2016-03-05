#include <iostream>
//#include <string>
//#include <locale>
//#include <clocale>
using namespace std;
int main()
    {
          int age,agetwo;
          setlocale(LC_ALL,"Russian");
          // Вывводится сообщение
          cout <<"Write your age..."<<endl;
          cin >> age;
          cout << "Your age:" << age<<endl;
          cout << "Write your brother age..."<<endl;
          cin >> agetwo;
          cout << "Your brother age: "<<age<<endl;
          int summa=0;
          summa=age+agetwo;
          cout <<"Sum of yours births: "<<summa<<endl;
          system("pause");
          return 0;
}
          
