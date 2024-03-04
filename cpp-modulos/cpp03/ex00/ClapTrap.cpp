/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorais- < gmorais-@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:26:49 by gmorais-          #+#    #+#             */
/*   Updated: 2024/03/04 11:30:06 by gmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	this->maxHitPoints = 10;
}

ClapTrap::ClapTrap(ClapTrap const& copy)
{
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& copy)
{
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	this->maxHitPoints = copy.maxHitPoints;
	return *this;
}

ClapTrap::~ClapTrap(void){}

std::string ClapTrap::getName(void)
{
	return this->name;
}

unsigned int ClapTrap::setAttack(unsigned int amount)
{
	return this->attackDamage = amount;
}

int ClapTrap::getAttack(void)
{
	return (this->attackDamage);
}

int	ClapTrap::getHeatlh()
{
	return (this->hitPoints);
}

void ClapTrap::setHealth(unsigned int amount)
{
	this->hitPoints = amount;
	this->maxHitPoints = amount;
}

int	ClapTrap::getEnergy()
{
	return (this->energyPoints);
}

void ClapTrap::setEnergy(unsigned int amount)
{
	this->energyPoints = amount;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "No more energy points ):" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << 
	", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints >= amount)
		this->hitPoints -= amount;
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
	else
		std::cout << this->name << " took " << amount << " of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " it's dead." << std::endl;
		return ;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "No more energy points ):" << std::endl;
		return;
	}
	if (amount == 0)
	{
		std::cout << "At least 1 point to recover" << std::endl;
		return ;
	}
	if (this->hitPoints == maxHitPoints)
	{
		std::cout << "Max hit points" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	if (this->hitPoints > maxHitPoints)
		this->hitPoints = maxHitPoints;
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " repaired " << amount << 
	" now is having " << this->hitPoints << std::endl;
}