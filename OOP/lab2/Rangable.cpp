#include "rangable.h"

Rangable::Rangable(string rang_)
{
	this->rang_ = rang_;
}
string Rangable::get_rang() {
	return rang_;
}