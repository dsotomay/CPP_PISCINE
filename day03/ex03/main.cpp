#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void){
	ClapTrap clap_trap("Almighty");
	FragTrap fr4g_trap1("fr4g Trap");
	FragTrap fr4g_trap2(fr4g_trap1);
	fr4g_trap2.setname("fr4g trap 2");
	fr4g_trap2.takeDamage(fr4g_trap1.meleeAttack(fr4g_trap2.getname()));
	fr4g_trap1.takeDamage(fr4g_trap2.vaulthunter_dot_exe(fr4g_trap1.getname()));
	fr4g_trap1.takeDamage(fr4g_trap2.vaulthunter_dot_exe(fr4g_trap1.getname()));
	fr4g_trap1.takeDamage(fr4g_trap2.vaulthunter_dot_exe(fr4g_trap1.getname()));
	fr4g_trap1.takeDamage(fr4g_trap2.vaulthunter_dot_exe(fr4g_trap1.getname()));
	fr4g_trap1.takeDamage(fr4g_trap2.vaulthunter_dot_exe(fr4g_trap1.getname()));
	fr4g_trap1.takeDamage(fr4g_trap2.vaulthunter_dot_exe(fr4g_trap1.getname()));
	fr4g_trap1.beRepaired(30);
	fr4g_trap2.beRepaired(50);
	fr4g_trap1.setHP(-23);
	std::cout << fr4g_trap1.getHP() << std::endl;
	ScavTrap scavtrap1("scav trap");
	ScavTrap scavtrap2(scavtrap1);
	scavtrap2.setname("scav trap 2");
	scavtrap2.takeDamage(scavtrap1.rangedAttack(scavtrap2.getname()));
	scavtrap1.takeDamage(scavtrap2.meleeAttack(scavtrap1.getname()));
	scavtrap1.challengeNewcomer(fr4g_trap1.getname());
	NinjaTrap ninja1("ninja trap");
	NinjaTrap ninja2("ninja trap 2");
	ninja1.Shoebox(clap_trap);
	ninja1.Shoebox(fr4g_trap1);
	ninja1.Shoebox(scavtrap1);
	ninja1.Shoebox(ninja2);
}
