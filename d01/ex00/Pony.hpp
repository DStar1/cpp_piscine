/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasmith <hasmith@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 19:49:55 by hasmith           #+#    #+#             */
/*   Updated: 2019/01/21 21:05:05 by hasmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H_
# define PONY_H_

#include <string>
#include <iostream>

class Pony {
    public:
        Pony(std::string name){ name_pony = name; }
        void setSpecies(std::string);
        void setMagic(std::string);
        void setNumTeeth(int);
        std::string getSpecies(void);
        std::string getMagic(void);
        int getNumTeeth(void);
        void print_class() {
            std::cout << this->name_pony << std::endl;
            std::cout << this->getSpecies() << std::endl;
            std::cout << this->getMagic() << std::endl;
            std::cout << this->getNumTeeth() << std::endl;
        }
    private:
        std::string  name_pony;
        std::string  species_type;
        std::string  magic_power;
        int          num_of_teeth;

};


#endif