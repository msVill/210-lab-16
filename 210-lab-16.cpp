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
            green = 0;
            blue = 0;
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

    //Default Constructor:
    Color black;

    //Partial Constructor:
    Color darkRed(139);

    //Full Constructor:
    Color skyBlue(135, 206, 235);
    Color lime(50, 205, 50);
    Color violet(238, 130, 238);

    //Prints to console
    cout << "Black (default):\n" ;
    black.print();
    print(black);
    cout << endl;

    cout << "Dark Red (partial):\n";
    darkRed.print();
    print(darkRed);
    cout << endl;

    cout << "Sky Blue (full):\n";
    skyBlue.print();
    print(skyBlue);
    cout << endl;

    cout << "Lime (full):\n";
    lime.print();
    print(lime);
    cout << endl;

    cout << "Violet (full):\n";
    violet.print();
    print(violet );
    cout << endl;


    return 0;
}