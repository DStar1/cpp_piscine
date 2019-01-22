/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 17:20:04 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

std::string Contact::getFirstName(void)
{
    return (this->firstName);
}

std::string Contact::getLastName(void)
{
    return (this->lastName);
}

std::string Contact::getNickname(void)
{
    return (this->nickname);
}

std::string Contact::getLogin(void)
{
    return (this->login);
}

std::string Contact::getPostalAddress(void)
{
    return (this->postalAddress);
}

std::string Contact::getEmailAddress(void)
{
    return (this->emailAddress);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->phoneNumber);
}

std::string Contact::getBirthdayDate(void)
{
    return (this->birthdayDate);
}

std::string Contact::getFavoriteMeal(void)
{
    return (this->favoriteMeal);
}

std::string Contact::getUnderWearColor(void)
{
    return (this->underwearColor);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->darkestSecret);
}

void        Contact::setFirstName(std::string str)
{
    this->firstName = str;
}

void        Contact::setLastName(std::string str)
{
    this->lastName = str;
}

void        Contact::setNickname(std::string str)
{
    this->nickname = str;
}

void        Contact::setLogin(std::string str)
{
    this->login = str;
}

void        Contact::setPostalAddress(std::string str)
{
    this->postalAddress = str;
}

void        Contact::setEmailAddress(std::string str)
{
    this->emailAddress = str;
}

void        Contact::setPhoneNumber(std::string str)
{
    this->phoneNumber = str;
}

void        Contact::setBirthdayDate(std::string str)
{
    this->birthdayDate = str;
}

void        Contact::setFavoriteMeal(std::string str)
{
    this->favoriteMeal = str;
}

void        Contact::setUnderwearColor(std::string str)
{
    this->underwearColor = str;
}

void        Contact::setDarkestSecret(std::string str)
{
    this->darkestSecret = str;
}
