#include <iostream>

using namespace std;

class point {
	private:
		int x = 5;
		int y = 8;
	public:
		point() { cout << "(" << x << ", " << y << ")constructed\n"; };
		point(int x, int y) {
			this->x = x;
			this->y = y;
			cout << "(" << x << ", " << y << ")constructed\n";
		}
		~point() {
			cout << "(" << x << ", " << y << ")destroyed\n";
		};
		int getX() { return x; }
		int getY() { return y; }
		void setX(int x) { this->x = x; }
		void setY(int y) { this->y = y; }
		void toStr() {
			cout << "(" << x << ", " << y << ")\n";
		}
};

int main() {
	point a;
	a.toStr();
	cout << a.getX() << endl;
	cout << a.getY() << endl;
	a.setY(20);
	a.setX(10);
}