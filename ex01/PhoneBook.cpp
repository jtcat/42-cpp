/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaoteix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:54:59 by joaoteix          #+#    #+#             */
/*   Updated: 2023/12/12 11:26:54 by jcat             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _contacts_n(0) {}

void	PhoneBook::addContact(const Contact &contact) {
	if (_contacts_n < MAX_CONTACTS)
		_contacts_n++;
	_contacts[_contacts_n - 1] = contact;
}

Contact	&PhoneBook::getContact(int index)
{
	return _contacts[index];
}

int		PhoneBook::getContactNum(void)
{
	return _contacts_n;
}

const Contact	*PhoneBook::getContacts(void) {
	return _contacts;
}
