/* Comsc 210 | Lab #16 | Martha Stephanie Villalta
    IDE Used: VSCode
    Color Class With Constructors.
*/
#include <iostream>
#include <iomanip>
using namespace std;

const int w15 = 15;

class Color {
    private:
        int red;
        int green;
        int blue;

        public:
        //Constructors----------------
        //Default Constructor:
        Color() {
            red = 0;
            green = 0;
            blue = 0;
        }

        //Partial Construtor:
        Color(int r) {
            red = r;
        }

        //Parameter Constructor:
        Color(int r, int g, int b) {
            red = r;
            green = g;
            blue = b;
        }

            //Getters
            int getRed() const {
                 return red;
            }
            
            int getGreen() const { 
                return green;
             }

            int getBlue() const { 
                return blue; 
            }

            //Setters
            void setRed(int r) { 
                red = r;
            }

            void setGreen(int g) { 
                green = g;
            }

            void setBlue(int b) { 
                blue = b;
            }

            //Print method
            void print() const {
                cout << setw(w15) << "Red: " << red << endl;
                cout << setw(w15) << "Green: " << green << endl;
                cout << setw(w15) << "Blue: " << blue << endl;
            }
};

void print(Color c) {
    cout << "(" << c.getRed()
         << ", " << c.getGreen()
         << ", " << c.getBlue() << ")" << endl;
}

int main() {
    //Several color objects
    Color skyBlue;
    skyBlue.setRed(135);
    skyBlue.setGreen(206);
    skyBlue.setBlue(235);

    Color lime;
    lime.setRed(50);
    lime.setGreen(205);
    lime.setBlue(50);

    Color violet;
    violet.setRed(238);
    violet.setGreen(130);
    violet.setBlue(238);

    //Prints to console
    cout << "Sky Blue:\n";
    skyBlue.print();
    print(skyBlue);
    cout << endl;

    cout << "Lime:\n";
    lime.print();
    print(lime);
    cout << endl;

    cout << "Violet:\n";
    violet.print();
    print(violet );
    cout << endl;


    return 0;
}