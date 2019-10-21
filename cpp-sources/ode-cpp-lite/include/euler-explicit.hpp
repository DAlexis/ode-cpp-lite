/*
 * euler-explicit.hpp
 *
 *  Created on: 6 сент. 2016 г.
 *      Author: dalexies
 */

#ifndef EULER_EXPLICI_HPP_INCLUDED
#define EULER_EXPLICI_HPP_INCLUDED

#include "include/time-iter.hpp"


class EulerExplicitIterator : public ContinuousTimeIteratorBase
{
public:
	double iterate(double dt) override final;
};


#endif // EULER_EXPLICI_HPP_INCLUDED
