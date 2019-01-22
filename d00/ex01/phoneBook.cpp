/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 17:20:18 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact addContact(void)
{
    Contact     new_contact;
    std::string buffer;

    std::cout << "First name : ";
    std::cin >> buffer;
    new_contact.setFirstName(buffer);
    std::cout << "Last name : ";
    std::cin >> buffer;
    new_contact.setLastName(buffer);
    std::cout << "Nick name : ";
    std::cin >> buffer;
    new_contact.setNickname(buffer);
    std::cout << "Login : ";
    std::cin >> buffer;
    new_contact.setLogin(buffer);
    std::cout << "Postal Address : ";
    std::cin >> buffer;
    new_contact.setPostalAddress(buffer);
    std::cout << "Email Address : ";
    std::cin >> buffer;
    new_contact.setEmailAddress(buffer);
    std::cout << "Phone Number : ";
    std::cin >> buffer;
    new_contact.setPhoneNumber(buffer);
    std::cout << "Birthday : ";
    std::cin >> buffer;
    new_contact.setBirthdayDate(buffer);
    std::cout << "Favorite Meal : ";
    std::cin >> buffer;
    new_contact.setFavoriteMeal(buffer);
    std::cout << "Underwear Color : ";
    std::cin >> buffer;
    new_contact.setUnderwearColor(buffer);
    std::cout << "Darkest Secret : ";
    std::cin >> buffer;
    new_contact.setDarkestSecret(buffer);
    std::cout << std::endl << "We got a contact in this here phonebook here! :P" << std::endl;
    return (new_contact);
}
