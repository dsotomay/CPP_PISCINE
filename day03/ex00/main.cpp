#include "FragTrap.hpp"

int main(void){
	FragTrap clap_trap1("Clap Trap");
	FragTrap clap_trap2(clap_trap1);
	clap_trap2.setname("clap trap 2");
	clap_trap2.takeDamage(clap_trap1.meleeAttack(clap_trap2.getname()));
	clap_trap1.takeDamage(clap_trap2.vaulthunter_dot_exe(clap_trap1.getname()));
	clap_trap1.takeDamage(clap_trap2.vaulthunter_dot_exe(clap_trap1.getname()));
	clap_trap1.takeDamage(clap_trap2.vaulthunter_dot_exe(clap_trap1.getname()));
	clap_trap1.takeDamage(clap_trap2.vaulthunter_dot_exe(clap_trap1.getname()));
	clap_trap1.takeDamage(clap_trap2.vaulthunter_dot_exe(clap_trap1.getname()));
	clap_trap1.takeDamage(clap_trap2.vaulthunter_dot_exe(clap_trap1.getname()));
	clap_trap1.beRepaired(30);
	clap_trap2.beRepaired(50);
	clap_trap1.setHP(-23);
	std::cout << clap_trap1.getHP() << std::endl;
}
