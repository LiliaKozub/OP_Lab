class Point{
private:
   float r, theta, z;
public:
    //конструктор за замовчуванням
    Point ();
    //конструктор, що приймає 3 параметри
    Point(float r, float theta, float z);
    /*конструктор для переведення координат з прямокутною системи
     у цидіндричну (приймає 2 параметри, встановлює одне значення за замовчунням)*/
    Point(float x, float y);
    //встановлює значення z
    void Set_z(float z);
    //отримати значення радіальної відстані
    float Get_r();
    //отримати значення азимутального кута
    float Get_theta();
    //отримати значення висоти
    float Get_z();
    //обчислення відстані від точки до початку координат
    float Get_distance();
    //перевантаження операторів
    Point & operator ++();
    Point & operator +=(float delta);
    bool operator ==(const Point & other);
};