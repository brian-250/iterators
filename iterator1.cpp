#include <iostream>
#include <iterator>
#include <map>
#include <unordered_map>
#include <vector>

int main() {

    // std::vector<int> my_vector;
    // my_vector.push_back(12);
    // my_vector.push_back(23);
    // my_vector.push_back(45);
    // my_vector.push_back(76);
    // my_vector.push_back(88);

    // for (std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); it++) {
    //     std::cout << *it << '\n';
    // }

    // for (auto it = my_vector.begin(); it != my_vector.end(); it++) {
    //     std::cout << *it << '\n';
    // }

    // std::map<std::string, int> my_map;
    // my_map.insert({"hello", 24});
    // my_map.insert({"bob", 46});
    // my_map.insert({"loti", 33});
    // my_map.insert({"cooray", 78});
    // my_map.insert({"simon", 98});

    // for (auto it = my_map.begin(); it != my_map.end(); it++) {
    //     std::cout << it->first << ' ' << it->second << '\n';
    // }

    std::unordered_map<int, std::string> my_hash_map;
    my_hash_map.insert({3, "bye"});
    my_hash_map.insert({6, "no"});
    my_hash_map.insert({5, "jilo"});
    my_hash_map.insert({7, "yes"});
    my_hash_map.insert({8, "bnm"});
    my_hash_map.insert({11, "wow"});
    my_hash_map.insert({99, "almost 100!"});

    // for (auto it = my_hash_map.begin(); it != my_hash_map.end(); it++) {
    //     std::cout << it->first << it->second << '\n';
    // }

    for (auto& [key, value] : my_hash_map) {
        std::cout << key << ' ' << value << '\n';
    }

    return 0;

}