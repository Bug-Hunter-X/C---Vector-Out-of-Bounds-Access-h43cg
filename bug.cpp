std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i <= vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}
This code attempts to access vec[vec.size()], which is out of bounds, causing undefined behavior.  The loop condition should be i < vec.size();