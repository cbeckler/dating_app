#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, 
                std::string new_sexuality, std::vector<std::string> new_hobbies, std::string new_pronouns)
                : name(new_name), age(new_age), city(new_city), country(new_country), sexuality(new_sexuality),  
                hobbies(new_hobbies), pronouns(new_pronouns) {

}

std::string Profile::view_profile(){
            
            std::string bio = "Name: " + name + "\n";
            bio+= "Age: " + std::to_string(age) + "\n";
            bio+=  "City: " + city + "\n";
            bio+=  "Country: " + country + "\n";
            bio+=  "Pronouns: " + pronouns + "\n";
            bio+=  "Sexuality: " + sexuality + "\n";
            bio+=  "Hobbies:\n";

            for (int i=0; i<hobbies.size(); i++) {
                bio+= hobbies[i] + "\n";
            }

            return bio;

        }

void Profile::add_hobby(std::string new_hobby) {

    hobbies.push_back(new_hobby);   

}