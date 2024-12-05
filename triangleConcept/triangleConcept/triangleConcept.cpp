// triangleConcept.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include "triangle.h"

int main()
{
    /* cout << "please enter the sides(a-b-c)" << endl;
     cin >> a >> b >> c;
     triangle triangle1(a, b, c);
     triangle triangle2 = triangle1;
     triangle triangle3(triangle1);
     triangle triangle4{ a,b,c };
     triangle triangle5(a, b, c);*/

    float a, b, c;
    cout << "please enter the sides(a-b-c)" << endl;
    cin >> a >> b >> c;
    cout << "-triangle1-" << endl;
    triangle triangle1(a, b, c);
    cout << "sideA:" << triangle1.getSideA() << endl;
    cout << "sideB:" << triangle1.getSideB() << endl;
    cout << "sideC:" << triangle1.getSideC() << endl;
    cout << "area:" << triangle1.calculateArea() << endl;
    triangle1.triangleType();


    cout << "-triangle2-" << endl;
    triangle triangle2(a, b, c);
    triangle2.setValue(5, 5, 5);
    cout << "sideA:" << triangle2.getSideA() << endl;
    cout << "sideB:" << triangle2.getSideB() << endl;
    cout << "sideC:" << triangle2.getSideC() << endl;
    cout << "area:" << triangle2.calculateArea() << endl;
    triangle2.triangleType();


    
    


}

