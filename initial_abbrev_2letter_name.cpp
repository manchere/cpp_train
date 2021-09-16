//My first solution
include <cctype>

std::string abbrevName(std::string name)
{
  std::string abrev;
  for (unsigned int x = 0; x < name.length(); x++) {
    if (x == 0 || name[x - 1] ==  ' ') {
      abrev += toupper(name[x]);
      abrev += ".";
    }
   }
  abrev.pop_back();
  return abrev;
}

//Best refactored solution
std::string abbrevName(std::string name)
{
  return std::string({ (char)toupper(name[0]), '.', (char)toupper(name[name.find(' ')+1]) });
}