/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meharit <meharit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:28:30 by meharit           #+#    #+#             */
/*   Updated: 2023/10/19 20:48:35 by meharit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* materia[4];
	public:
		MateriaSource();	
		MateriaSource(const MateriaSource& og);	
		MateriaSource& operator=(const MateriaSource& og);
		~MateriaSource();
		
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif