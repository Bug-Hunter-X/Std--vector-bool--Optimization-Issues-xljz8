std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This might be optimized to access a bitfield instead of a bool