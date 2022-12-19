/*
 * Human.h
 *
 *  Created on: Dec 19, 2022
 *      Author: tommy
 */

#ifndef HUMAN_H_
#define HUMAN_H_

#include <stdint.h>
#include <string>

class Human
{
  public:
	enum class EYECOLOR
	{
	  GREEN, BLUE, BROWN, GREY
	};

	enum class HAIRCOLOR
	{
	  BLOND, GREY, WHITE, BROWN, RED, BLACK
	};

	enum class GENDER
	{
	  FEMALE, MALE, BOTH, DIVERSE
	};

	Human ()
		: age_ (20), height_ (175), weight_ (75), ecolor_ (EYECOLOR::BLUE), gender_ (GENDER::MALE), name_ ("defautl-name"), hcolor_ (HAIRCOLOR::BROWN)
	{
	}

	Human (uint8_t age, uint8_t height, uint16_t weight, EYECOLOR ecolor, GENDER gender)
		: age_ (20), height_ (175), weight_ (75), ecolor_ (EYECOLOR::BLUE), gender_ (GENDER::MALE), name_ ("default-name"), hcolor_ (HAIRCOLOR::BROWN)
	{
	}

	virtual ~Human ();

	void setAge (uint8_t age){age_ = age;}
	void setHeight (uint8_t height){height_ = height;}
	void setWeight (uint8_t weight){weight_ = weight;}
	void setEyeColor (EYECOLOR ecolor){ecolor_ = ecolor;}
	void setGender (GENDER gender){gender_ = gender;}
	void setName (std::string name){name_ = name;}
	void setHairColor (HAIRCOLOR hcolor){hcolor_ = hcolor;}

	uint8_t getAge (){return age_;}
	uint8_t getHeight (){return height_;}
	uint16_t getWeight (){return weight_;}
	EYECOLOR getEyeColor (){return ecolor_;}
	GENDER getGender (){return gender_ ;}
	std::string getName (){return name_;}
	HAIRCOLOR getHairColor (){return hcolor_;}

  private:
	uint8_t age_;
	uint8_t height_;
	uint16_t weight_;
	EYECOLOR ecolor_;
	GENDER gender_;
	std::string name_;
	HAIRCOLOR hcolor_;
};

#endif /* HUMAN_H_ */
