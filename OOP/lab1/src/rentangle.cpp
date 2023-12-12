#include "rentangle.h"

using namespace std;
/**
* @brief ����������� ������
* @param x1 ���������� � ������ ����� ���������
* @param y1 ���������� y ������ ����� ���������
* @param x2 ���������� � ������ ����� ���������
* @param y2 ���������� y ������ ����� ���������
*/
rentangle::rentangle(int x1, int y1, int x2, int y2) {
    x1_ = x1;
    y1_ = y1;
    x2_ = x2;
    y2_ = y2;
}

/**
* @brief ���������� �������������
* @param x ���������� �� ��� x
* @param y ���������� �� ��� y
*/
void  rentangle::increase(int x, int y) {
    y2_ += y / 2;
    y1_ += y / 2;
    x2_ += x / 2;
    x1_ += x / 2;
}
/**
* @brief ����������� ��������������
* @param x ����������� �� ��� x
* @param y ����������� �� ��� y
*/
void  rentangle::move(int x, int y) {
    x1_ += x;
    x2_ += x;
    y1_ += y;
    y2_ += y;
}
/**
* @brief ������ ��������� ����� ��������������
*/
void  rentangle::get() {
    cout << "x1=" << x1_ << " y1=" << y1_ << "x2=" << x1_ << " y2=" << y2_ << "x3=" << x2_ << " y3" << y2_ << "x4=" << x2_ << " y4=" << y1_ << endl;
}
/**
* @brief �������� ���������
* @param other ������ �� ������������� � ������� ����������
* @return true ���� ���������� �����, ����� false
*/
bool  rentangle::operator ==(const rentangle& other) {
    return this->x1_ == other.x1_ && this->x2_ == other.x2_ && this->y1_ == other.y1_ && this->y2_ == other.y2_;//abs(this->x1_ - this->x2_) == abs(other.x1_ - other.x2_) && abs(this->y1_ - this->y2_) == abs(other.y1_ - other.y2_);
}
/**
* @brief �������� ���������
* @param other ������ �� ������������� � ������� ����������
* @return true ���� ���������� �� �����, ����� false
*/
bool  rentangle::operator !=(const rentangle& other) {
    return this->x1_ != other.x1_ || this->x2_ != other.x2_ || this->y1_ != other.y1_ || this->y2_ != other.y2_;//(abs(this->x1_ - this->x2_) != abs(other.x1_ - other.x2_) || abs(this->y1_ - this->y2_) != abs(other.y1_ - other.y2_))|| (abs(this->x1_ - this->x2_) != abs(other.y1_ - other.y2_) || abs(this->y1_ - this->y2_) != abs(other.x1_ - other.x2_));;
}
/**
* @brief �������� ����� � �����������
* @param other ������ �� ������������� � ������� ������ �����������
* @return ��������� �� ������������� ���������� ��� ��������������
*/
rentangle& rentangle::operator +=(const rentangle& other) {
    this->x2_ = abs(this->x2_ - this->x1_) + abs(other.x2_ - other.x1_);
    this->y2_ = abs(this->y2_ - this->y1_) + abs(other.y2_ - other.y1_);
    this->x1_ = 0;
    this->y1_ = 0;
    return *this;
}
/**
* @brief �������� �����
* @param other ������ �� ������������� � ������� ������ �����������
* @return ��������� �� ������������� ���������� ��� ��������������
*/
rentangle  rentangle::operator+(const rentangle& other) {
    rentangle temp(0, 0, 0, 0);
    temp.x2_ = abs(this->x2_ - this->x1_) + abs(other.x2_ - other.x1_);
    temp.y2_ = abs(this->y2_ - this->y1_) + abs(other.y2_ - other.y1_);
    return temp;

}
/**
* @brief �������� ���������
* 
* @return ��������� �� ������������� � ����������� ������������ �� ������� �� ����
*/
rentangle& rentangle::operator++(int) {
    if (this->x2_ > this->x1_) {
        this->x2_++;
    }
    else {
        this->x1_++;
    };
    if (this->y2_ > this->y1_) {
        this->y2_++;
    }
    else {
        this->y1_++;
    }
    return *this;
}
/**
* @brief �������� ���������
*
* @return ��������� �� ������������� � ����������� ������������ �� ������� �� ����
*/
rentangle& rentangle::operator--(int) {
    if (this->x2_ > this->x1_) {
        this->x2_--;
    }
    else {
        this->x1_--;
    }
    if (this->y2_ > this->y1_) {
        this->y2_--;
    }
    else {
        this->y1_--;
    }
    return *this;
}
/**
* @brief �������� ��������
* @param other ������ �� ������������� � ������� ������ �����������
* @return ��������� �� ��������� ����������� ��������������� 
*/
rentangle& rentangle::operator-(const rentangle& other) {
    int newX1 = std::max(x1_, other.x1_);
    int newY1 = std::max(y1_, other.y1_);
    int newX2 = std::min(x2_, other.x2_);
    int newY2 = std::min(y2_, other.y2_);
   
    if (newX1 >= newX2 || newY1 >= newY2) {
        newX1 = 0;
        newY1 = 0;
        newX2 = 0;
        newY2 = 0;
    }
    rentangle ans(newX1, newY1, newX2, newY2);
    return ans;
}
/**
* @brief �������� �������� � �����������
* @param other ������ �� ������������� � ������� ������ �����������
* @return ��������� �� ��������� ����������� ���������������
*/
rentangle& rentangle::operator-=(const rentangle& other) {
    *this = *this - other;
    return *this;
}
/**
* @brief �������� ����������
* @param other ������ �� ������������� ������� ����������� �������
* @return ��������� �� ��������� ������������
*/
rentangle& rentangle::operator=(const rentangle& other) {
    if (&other != this) {
        this->x1_ = other.x1_;
        this->y1_ = other.y1_;
        this->x2_ = other.x2_;
        this->y2_ = other.y2_;
    }
    return *this;
}
/**
* @brief �������� ������ ������
* @param os ������ �� ����� ������
* @param rentangle ������������� ������� ������� 
* @return ����� ������
*/
ostream& operator <<(ostream& os, const rentangle rentangle) {
    return os<< "x1=" << rentangle.x1_ << " y1=" << rentangle.y1_ << " x2=" << rentangle.x1_ << " y2=" << rentangle.y2_ << " x3=" << rentangle.x2_ << " y3=" << rentangle.y2_ << " x4=" << rentangle.x2_ << " y4=" << rentangle.y1_;
}
/**
* @brief �������� ������ �����
* @param in ������ �� ����� �����
* @param input ������ �� ������������� ������� ������
* @return ����� ������
*/
istream& operator >>(istream& in, rentangle& input) {
    int x1, y1, x2, y2;
    in >> x1 >> y1 >> x2 >> y2;
    rentangle copy(x1, y1, x2, y2);
    input = copy;
    return in;
}