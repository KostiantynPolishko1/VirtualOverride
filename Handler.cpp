#include "Handler.h"

char* Handler::getHandlerShape() const {
	return this->_shape;
}
;
float Handler::getHandlerLength() const
{
	return this->_length;
}
;
float Handler::getHandlerWeight() const
{
	return this->_weight;
}
;
