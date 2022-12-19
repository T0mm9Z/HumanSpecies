/*
 * Person.h
 *
 *  Created on: Dec 19, 2022
 *      Author: tommy
 */

#ifndef PERSON_H_
#define PERSON_H_

#include "Human.h"

class Person : public Human
{
  public:
	using Human::Human; //Inherits the Construtors of Human to Person

	Person ();
	virtual ~Person ();
	void makeAbstract();


	void setAge (uint8_t age){age_ = age;}
	void setHeight (uint8_t height){height_ = height;}
	void setWeight (uint8_t weight){weight_ = weight;}
	void setEyeColor (EYECOLOR ecolor){ecolor_ = ecolor;}
	void setGender (GENDER gender){gender_ = gender;}
	void setHairColor (HAIRCOLOR hcolor){hcolor_ = hcolor;}
	void setAncestry (ANCESTRY ancestry){ancestry_ = ancestry;}


	uint8_t getAge (){return age_;}
	uint8_t getHeight (){return height_;}
	uint16_t getWeight (){return weight_;}
	EYECOLOR getEyeColor (){return ecolor_;}
	GENDER getGender (){return gender_ ;}
	HAIRCOLOR getHairColor (){return hcolor_;}
	ANCESTRY getAncestry (){return ancestry_;}
};

#endif /* PERSON_H_ */
