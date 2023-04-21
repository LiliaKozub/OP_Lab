#include "Point.h"

//виведення допоміжного тексту для зрозумілості роботи програми
void interface_1();
void interface_2();
//функція для введення з клавіатури координат точок
void input_points(Point &B, Point &C);
//функція для виведення координат точок
void output_points(Point A, Point B, Point C);
//функція для введення з клавіатури величини для збільшення радіальної відстані
float input_delta();
//фуекція для перевірки рівності відповідних координат двох точок
void equality_points(bool res);
//функція для знаходження вфдстані від точки до початку координат
void calculate_distance(Point A);
