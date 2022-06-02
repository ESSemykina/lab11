#include <iostream>

/*
class CodeGenerator
{
public:
    enum Lang { JAVA = 0, C_PLUS_PLUS = 1, PHP = 2 };
    CodeGenerator(Lang language) { _language = language; }
    std::string generateCode()
    {
        switch (_language) {
        case JAVA: someCodeRelatedThing();       //return generated java code
        case C_PLUS_PLUS: someCodeRelatedThing();//return generated C++ code
        case PHP: someCodeRelatedThing();         //return generated PHP code
        }
        throw new std::logic_error("Bad language");
    }
    std::string someCodeRelatedThing() // used in generateCode()
    {
        switch (_language) {
        case JAVA: return “CPP code”;        //return generated java-related stuff
        case C_PLUS_PLUS: //return generated C++-related stuff
        case PHP:         //return generated PHP-related stuff
        }
        throw new std::logic_error("Bad language");
    }

private:
    Lang _language;
}*/





enum Lang{ JAVA = 0, C_PLUS_PLUS = 1, PHP = 2 };

class CodeGenerator
{
public:
	CodeGenerator()
	{

	}
	virtual ~CodeGenerator()
	{

	}

	std::string generateCode()
	{
		return someCodeRelatedThing();
	}



protected:
	virtual std::string someCodeRelatedThing() = 0;

};

class JAVAcodeGenerator : public CodeGenerator
{
public:

	JAVAcodeGenerator() : CodeGenerator()
	{

	}
	virtual~JAVAcodeGenerator()
	{

	}

private:
	std::string someCodeRelatedThing() override
	{
		return "JAVA code\n";
	}
};

class C_PLUS_PLUScodeGenerator : public CodeGenerator
{
public:

	C_PLUS_PLUScodeGenerator() : CodeGenerator()
	{

	}
	virtual~C_PLUS_PLUScodeGenerator()
	{

	}

	std::string someCodeRelatedThing() override
	{
		return "C++ code\n";
	}

};

class PHPcodeGenerator : public CodeGenerator
{
public:

	PHPcodeGenerator() : CodeGenerator()
	{

	}
	virtual~PHPcodeGenerator()
	{

	}

	std::string someCodeRelatedThing() override
	{
		return "PHP code\n";
	}

};



int main()
{
	JAVAcodeGenerator java;
	std::cout << java.generateCode();
	C_PLUS_PLUScodeGenerator C_PLUS_PLUS;
	std::cout << C_PLUS_PLUS.generateCode();
	PHPcodeGenerator php;
	std::cout << php.generateCode();

    return 0;
}