#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle
{
    private:
        double width;
        double height;

    public:
        Rectangle() : width(1.0), height(1.0) {}

        Rectangle(double w, double h) : width(1.0), height(1.0)
        {
            setWidth(w);
            setHeight(h);
        }

        void setWidth(double w)
        {
            if (w > 0)
            {
                width = w;
            }
            else
            {
                cout << "Warning: Invalid width value " << w << " rejected. Width remains " << width << "." << endl;
            }
        }

        void setHeight(double h)
        {
            if (h > 0)
            {
                height = h;
            }
            else
            {
                cout << "Warning: Invalid height value " << h << " rejected. Height remains " << height << "." << endl;
            }
        }

        double calculateArea() const
        {
            return width * height;
        }
};

int main()
{
    Rectangle rects[3] =
    {
        Rectangle(),
        Rectangle(3.0, 4.0),
        Rectangle(5.5, 2.0)
    };

    cout << fixed << setprecision(2);
    for (int i = 0; i < 3; i++)
    {
        cout << "Rectangle " << i + 1 << " area: "
             << rects[i].calculateArea() << endl;
    }

    return 0;
}