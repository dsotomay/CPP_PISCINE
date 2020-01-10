#ifndef AWEAPON_HPP
# define AWEAPON_HPP
# include <iomanip>

class AWeapon 
{
	private:
		AWeapon(void);

	protected:
		

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon(void);

		AWeapon &	operator=( AWeapon const & rhs );

		std::string virtual getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif