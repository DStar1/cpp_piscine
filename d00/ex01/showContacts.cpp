/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showContacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 17:20:43 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void    showContact(Contact contacts[], int contact_id)
{
    std::cout << contacts[contact_id].getFirstName() << std::endl;
    std::cout << contacts[contact_id].getLastName() << std::endl;
    std::cout << contacts[contact_id].getNickname() << std::endl;
    std::cout << contacts[contact_id].getLogin() << std::endl;
    std::cout << contacts[contact_id].getPostalAddress() << std::endl;
    std::cout << contacts[contact_id].getEmailAddress() << std::endl;
    std::cout << contacts[contact_id].getPhoneNumber() << std::endl;
    std::cout << contacts[contact_id].getBirthdayDate() << std::endl;
    std::cout << contacts[contact_id].getFavoriteMeal() << std::endl;
    std::cout << contacts[contact_id].getUnderWearColor() << std::endl;
    std::cout << contacts[contact_id].getDarkestSecret() << std::endl << std::endl;
}

std::string    truncate(std::string truncated_str)
{
    if (truncated_str.length() > 10){
        return (truncated_str.substr(0, 9) + ".");
    }
    return (truncated_str);
}

void    showContacts(Contact contacts[], int max_id)
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < max_id; i++) {
        std::string firstName = truncate(contacts[i].getFirstName());
        std::string lastName = truncate(contacts[i].getLastName());
        std::string nickname = truncate(contacts[i].getNickname());
        std::cout << "|";
        std::cout.width(9);
        std::cout << i << " |";
        std::cout.width(10);
        std::cout << firstName << "|";
        std::cout.width(10);
        std::cout << lastName << "|";
        std::cout.width(10);
        std::cout << nickname << "|" << std::endl;
    }
    std::cout << std::endl;
}
