#include <iostream>
using namespace std;
class Zurt
{
public:
	Zurt() { m_health = m_row = m_col = 0; }
	Zurt(int health, int r,int c) {
		m_health = health;
		m_row = r;  m_col = c;
	}
	int health() const { return m_health; }
	int row() const { return m_row; }
	int col() const { return m_col; }
	void setHealth(int health) { m_health = health; }
	void setRow(int r) { m_row = r; }
	void setCol(int c) { m_col = c; }
private:
	int m_health, m_row, m_col;
};

int main()
{
	Zurt z(100,1,1);
	const Zurt* zp = &z;

	//<BLANK>

	return 0;
}
