#include <string>
#include <iostream>
#include <string_view>


class BMI{
	public:
		
		BMI(std::string_view a,long b,double c,double d):
			Patient_Name{a},Patient_ID{b},
			Patient_Weight{c},Patient_Height{d}{
				  _BMI = Patient_Weight/( Patient_Height *
                                        Patient_Height);
			};
		~BMI(){}

		void Calculate_BMI(){
			_BMI = Patient_Weight/( Patient_Height * 
					Patient_Height);
			std::cout<< "\n BMI is : " << _BMI << 
				std::endl;
		}

		void Get_Details() const
		{
			std::cout<<"\n\n\tPatient Name : " << 
				Patient_Name << std::endl;
			std::cout<<"\tPatient ID : " <<
				Patient_ID << std::endl;
			std::cout<< "\tPatient Weight : " <<
				Patient_Weight << std::endl ;
			std::cout<< "\tPatient Height : " <<
				Patient_Height << std::endl ;
			std::cout<< "\tPatient BMI : " <<
				_BMI << std::endl;

			if (_BMI < 18.5) {
				std::cout<<"Underweight"<<std::endl;
			}
			else if(_BMI >= 18.5 && _BMI <= 24.9){
				std::cout<<"Healthy / Normal Weight Range" 
					<< std::endl;	
			} 
			else if (_BMI>=25.0 && _BMI <= 30.0) {
			   std::cout<< " OVERWEIGHT ??? " <<std::endl;
			}
			else if (_BMI > 30.0 ) {
				std::cout << "Obese (higher risk for heart disease or diabetes) "
					<<std::endl;
			}

			else {
				std::cout<< "Can't determine " << std::endl;	
			}
		}

	private:
		std::string Patient_Name{};
		double Patient_Height{};
		double Patient_Weight{};
		long Patient_ID{};
		double _BMI {};
};

int main(){

		BMI Prince("PRINCE",1000,50,1.52);
		Prince.Get_Details();

		BMI John("John" ,1001,51,0.98 );
		John.Get_Details();


	return 0;
}
