#include "rentangle.h"

using namespace std;
/**
* @brief Конструктор класса
* @param x1 координата х первой точки диагонали
* @param y1 координата y первой точки диагонали
* @param x2 координата х второй точки диагонали
* @param y2 координата y второй точки диагонали
*/
rentangle::rentangle(int x1, int y1, int x2, int y2) {
    x1_ = x1;
    y1_ = y1;
    x2_ = x2;
    y2_ = y2;
}

/**
* @brief Увелечение прямоугольник
* @param x Увелечение по оси x
* @param y Увелечение по оси y
*/
void  rentangle::increase(int x, int y) {
    y2_ += y / 2;
    y1_ += y / 2;
    x2_ += x / 2;
    x1_ += x / 2;
}
/**
* @brief Перемещение прямоугольника
* @param x Перемещение по оси x
* @param y Перемещение по оси y
*/
void  rentangle::move(int x, int y) {
    x1_ += x;
    x2_ += x;
    y1_ += y;
    y2_ += y;
}
/**
* @brief Ввывод координат углов прямоугольника
*/
void  rentangle::get() {
    cout << "x1=" << x1_ << " y1=" << y1_ << "x2=" << x1_ << " y2=" << y2_ << "x3=" << x2_ << " y3" << y2_ << "x4=" << x2_ << " y4=" << y1_ << endl;
}
/**
* @brief Оператор равенства
* @param other ссылка на прямоугольник с которым сравнивают
* @return true если координаты равны, иначе false
*/
bool  rentangle::operator ==(const rentangle& other) {
    return this->x1_ == other.x1_ && this->x2_ == other.x2_ && this->y1_ == other.y1_ && this->y2_ == other.y2_;//abs(this->x1_ - this->x2_) == abs(other.x1_ - other.x2_) && abs(this->y1_ - this->y2_) == abs(other.y1_ - other.y2_);
}
/**
* @brief Оператор равенства
* @param other ссылка на прямоугольник с которым сравнивают
* @return true если координаты не равны, иначе false
*/
bool  rentangle::operator !=(const rentangle& other) {
    return this->x1_ != other.x1_ || this->x2_ != other.x2_ || this->y1_ != other.y1_ || this->y2_ != other.y2_;//(abs(this->x1_ - this->x2_) != abs(other.x1_ - other.x2_) || abs(this->y1_ - this->y2_) != abs(other.y1_ - other.y2_))|| (abs(this->x1_ - this->x2_) != abs(other.y1_ - other.y2_) || abs(this->y1_ - this->y2_) != abs(other.x1_ - other.x2_));;
}
/**
* @brief Оператор суммы с присваением
* @param other ссылка на прямоугольник с которым делают объединение
* @return указатель на прямоугольник содержащий два прямоугольника
*/
rentangle& rentangle::operator +=(const rentangle& other) {
    this->x2_ = abs(this->x2_ - this->x1_) + abs(other.x2_ - other.x1_);
    this->y2_ = abs(this->y2_ - this->y1_) + abs(other.y2_ - other.y1_);
    this->x1_ = 0;
    this->y1_ = 0;
    return *this;
}
/**
* @brief Оператор суммы
* @param other ссылка на прямоугольник с которым делают объединение
* @return указатель на прямоугольник содержащий два прямоугольника
*/
rentangle  rentangle::operator+(const rentangle& other) {
    rentangle temp(0, 0, 0, 0);
    temp.x2_ = abs(this->x2_ - this->x1_) + abs(other.x2_ - other.x1_);
    temp.y2_ = abs(this->y2_ - this->y1_) + abs(other.y2_ - other.y1_);
    return temp;

}
/**
* @brief Оператор инкремент
* 
* @return указатель на прямоугольник с увеличиными координатами на единицу по осям
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
* @brief Оператор декремент
*
* @return указатель на прямоугольник с уменьшеными координатами на единицу по осям
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
* @brief Оператор разности
* @param other ссылка на прямоугольник с которым делают пересечение
* @return указатель на результат пересечения прямоугольников 
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
* @brief Оператор разности с присваением
* @param other ссылка на прямоугольник с которым делают пересечение
* @return указатель на результат пересечения прямоугольников
*/
rentangle& rentangle::operator-=(const rentangle& other) {
    *this = *this - other;
    return *this;
}
/**
* @brief Оператор присваения
* @param other ссылка на прямоугольник который присваивают другому
* @return указатель на результат присваевания
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
* @brief Оператор потока вывода
* @param os ссылка на поток вывода
* @param rentangle прямоугольник который выводят 
* @return поток вывода
*/
ostream& operator <<(ostream& os, const rentangle rentangle) {
    return os<< "x1=" << rentangle.x1_ << " y1=" << rentangle.y1_ << " x2=" << rentangle.x1_ << " y2=" << rentangle.y2_ << " x3=" << rentangle.x2_ << " y3=" << rentangle.y2_ << " x4=" << rentangle.x2_ << " y4=" << rentangle.y1_;
}
/**
* @brief Оператор потока ввода
* @param in ссылка на поток ввода
* @param input ссылка на прямоугольник который вводят
* @return поток вввода
*/
istream& operator >>(istream& in, rentangle& input) {
    int x1, y1, x2, y2;
    in >> x1 >> y1 >> x2 >> y2;
    rentangle copy(x1, y1, x2, y2);
    input = copy;
    return in;
}