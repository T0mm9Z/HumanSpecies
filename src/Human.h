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

	enum class ANCESTRY
	{
	  ASIAN,
	  AMERICA,
	  AFRICA,
	  AUSTRALIA,
	  EUROPE
	};

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
		: age_ (20), height_ (175), weight_ (75), ecolor_ (EYECOLOR::BLUE), gender_ (GENDER::MALE), hcolor_ (HAIRCOLOR::BROWN), ancestry_ (ANCESTRY::EUROPE)
	{
	}

	Human (uint8_t age, uint8_t height, uint16_t weight, EYECOLOR ecolor, GENDER gender, HAIRCOLOR hcolor, ANCESTRY ancestry)
		: age_ (age), height_ (height), weight_ (weight), ecolor_ (ecolor), gender_ (gender), hcolor_ (hcolor), ancestry_ (ancestry)
	{
	}

	virtual ~Human ();

	virtual void setAge (uint8_t age) = 0;
	virtual void setHeight (uint8_t height) = 0;
	virtual void setWeight (uint8_t weight) = 0;
	virtual void setEyeColor (EYECOLOR ecolor) = 0;
	virtual void setGender (GENDER gender) = 0;
	virtual void setHairColor (HAIRCOLOR hcolor) = 0;
	virtual void setAncestry (ANCESTRY ancestry) = 0;

	virtual uint8_t getAge () = 0;
	virtual uint8_t getHeight () = 0;
	virtual uint16_t getWeight () = 0;
	virtual EYECOLOR getEyeColor () = 0;
	virtual GENDER getGender () = 0;
	virtual HAIRCOLOR getHairColor () = 0;
	virtual ANCESTRY getAncestry () = 0;

  protected:

	uint8_t age_;
	uint8_t height_;
	uint16_t weight_;
	EYECOLOR ecolor_;
	GENDER gender_;
	HAIRCOLOR hcolor_;
	ANCESTRY ancestry_;
};

#endif /* HUMAN_H_ */
