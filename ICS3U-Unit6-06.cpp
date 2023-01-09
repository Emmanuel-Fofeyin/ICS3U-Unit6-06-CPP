// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Dec 2019
// This program uses an associative array

#include <iostream>
#include <map>

main() {
    // this function uses an associative array

    std::string airportName = "";

    // an empty map
    std::map<std::string, std::string> airports;
    // a map filled with data
    std::map<char, int> someInfo = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
    };

    // adding items
    airports.insert(std::pair<std::string, std::string>("YYZ", "Toronto Pearson"));
    airports.insert(std::pair<std::string, std::string>("YOW", "Ottawa Canada"));
    airports["DUB"] = "Dublin Ireland";
    airports["LHR"] = "London Heathrow";

    std::cout << "Type in an airport code: ";
    std::cin >> airportName;
    std::cout << " " << std::endl;

    if (airports.count(airportName) > 0) {
        std::cout << "The name of the airport you chose is " << airports[airportName];
    } else {
        std::cout << "That airport is not in the airport's dictionary.";
    }
    std::cout << " " << std::endl;
    std::cout << " " << std::endl;

    std::cout << "All the airports:" << std::endl;
    for (auto const& pair : airports) {
        std::cout << "The airport code is " << pair.first << " for " << pair.second << std::endl;
    }

    std::cout << " " << std::endl;
}
