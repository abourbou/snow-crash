
#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	char	*str = argv[1];
	size_t i = 0;
	while(str[i])
	{
		int	nb = str[i];
		std::cout << "'" << str[i] << "'"<< " ";
		++i;
	}
	std::cout << std::endl;
}