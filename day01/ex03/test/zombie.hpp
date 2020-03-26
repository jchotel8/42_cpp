#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
public:
    Zombie(void);
    Zombie(std::string name, std::string type);
    ~Zombie(void);
    void    setName(std::string name);
    void    setType(std::string type);
    void	announce(void);

private:
    std::string _type;
    std::string _name;
};

#endif