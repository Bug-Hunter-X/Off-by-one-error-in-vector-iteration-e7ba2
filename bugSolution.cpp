std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) { // Corrected loop condition
    std::cout << vec[i] << " ";
}
std::cout << std::endl; // Corrected loop condition to prevent out-of-bounds access