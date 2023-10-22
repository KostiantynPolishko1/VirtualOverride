#include "Material.h"

short Material::getKindMaterial(const short kindSword) const
{
	switch (kindSword)
	{
	case SINGLE_HANDED:
		return WOOD;
	case TWO_and_HALF:
		return BRASS;
	case DOUBLE_EDGED:
		return STEEL;
	};
}
;
short Material::getQualityMaterial(const short kindSword) const
{
	switch (kindSword)
	{
	case SINGLE_HANDED:
		return LOW;
	case TWO_and_HALF:
		return MIDDLE;
	case DOUBLE_EDGED:
		return HIGH;
	}
}
;
char* Material::getMaterial() const {
    return this->_material;
}
;
char* Material::getQuality() const {
    return this->_quality;
}
;
