#include <iostream>

int main()
{
	char tipo = ' ';
	float quantidade = 0;
	float preco = 0;
	
	for (int i = 0; i < 3; i++)
	{
		std::cout<<"\nA – Álcool\n" ;
		std::cout<<"D – Diesel\n";
		std::cout<<"G – Gasolina\n";
		std::cout<<"\nDigite o tipo de combustível que deseja: ";
		std::cin>>tipo;
		std::cout<<"Digite a quantidade que deseja em litros: ";
		std::cin>>quantidade;
		
		switch(tipo)
		{
		case 'A':
			preco = quantidade *4.805;
			std::cout<<"O preço a pagar é R$"<<preco<<'\n';
		break;				
			case'D':			
				preco = quantidade *5.953;
				std::cout<<"O preço a pagar é R$"<<preco<<'\n';
			break;			
				case 'G':				
					preco = quantidade *6.565;
					std::cout<<"O preço a pagar é R$"<<preco<<'\n';
				break;
					default:
						std::cout<<"Tipo inexistente\n";
					break;
		}
	}
}
	
	

