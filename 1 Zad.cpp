#include <iostream>  
using namespace std; 
#define PI 3.14 // число PI  
 
int main() { 
    setlocale(LC_ALL, "Rus"); 
 
    cout << "Введите радиус: "; 
    int rad; //радиус окружности  
    cin >> rad; // ввод радиуса  
 
    while (rad <= 0) { 
        cout << "Число должен быть положительным: введите радиус"; 
        cin >> rad; // повтороный ввод если была ошибка    
    }  
        cout << "Введите угол:"; 
 
        int ugol; // угол, для вычисления  
        cin >> ugol; // ввод угла   
 
        int ugol1; // сохраняет в себе значение ugol  
        ugol1 = ugol; 
 
        if (ugol < 0) ugol -= ugol * 2; // если угол отрицатьельный перевод его в положительный  
 
        float len = 2 * PI * rad; // формула длины  
        float sqr = PI * rad * rad; // формула площади   
        float sector = (PI * rad * rad) / 360 * ugol; // формула площади сектора  
 
        cout << "Длина окружности: " << len << "\n" << "Площадь окружности: " << sqr << "\n" << "Площадь сектора " << ugol1 << " o: " << sector << endl; 
 
        return 0; 
    }
