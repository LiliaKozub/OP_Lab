#include "functions.h"

int main() {
    Point P1;
    Point P2;
    Point P3;
    float delta;
    input_points(P2, P3);
    output_points(P1, P2, P3);

    //інкрементування азимутального кута
    ++P1;
    interface_1();
    output_points(P1, P2, P3);

    //збільшення радіальної відстані
    delta = input_delta();
    P2 += delta;
    interface_2();
    output_points(P1, P2, P3);

    //порівняння координат двох точок
    bool result = P1==P2;
    equality_points(result);

    //обчислення відстані від точки до початку координат
    calculate_distance(P3);

    return 0;
}
