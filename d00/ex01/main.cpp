/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 20:10:27 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 17:19:42 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int main()
{
    std::string buff;
    Contact person[MAX_CONTACTS];
    int cur_contact_idx;
    int idx;

    cur_contact_idx = 0;
    std::cout << "\n    - ONE PHONEBOOK TO RULE THEM ALL -   \n"  << std::endl;
    while (1){
        std::cout << "Enter input(SEARCH, ADD, EXIT): "  << std::endl;
        std::cin >> buff;
        if (buff == "EXIT")
            break;
        else if (buff == "ADD") {
            if (cur_contact_idx >= MAX_CONTACTS)
                std::cout << "MAX contacts reached!\n" << std::endl;
            else {
                person[cur_contact_idx] = addContact();
                cur_contact_idx++;
            }
        }
        else if (buff == "SEARCH") {
            if (cur_contact_idx == 0)
                std::cout << "No contacts, ADD some!\n" << std::endl;
            else {
                showContacts(person, cur_contact_idx);
                std::cout << "Enter index (0-" << cur_contact_idx-1 << ")inclusive, of contact:" << std::endl;
                std::cin >> idx;
                // Input loop
                while (1) {
                    if (!std::cin || idx < 0 || idx >= cur_contact_idx) {
                        // Clears flag bit
                        std::cin.clear();
                        // Ignores, so does not enter infinit loop
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Bad index! Enter index (0-" << cur_contact_idx-1 << ")inclusive, of contact:" << std::endl;
                        std::cin >> idx;
                    }
                    else {
                        showContact(person, idx);
                        break;
                    }
                    
                }
            }
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return 0;
}