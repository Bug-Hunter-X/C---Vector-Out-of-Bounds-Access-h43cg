std::vector<int> vec = {1, 2, 3, 4, 5};
for (int i = 0; i < vec.size(); ++i) {
  std::cout << vec[i] << std::endl;
}
Alternatively, use iterators for better safety and readability:
for (int x : vec) {
  std::cout << x << std::endl;
} 