using namespace std;

string replace(const string &s)
{
  string sentence = s;
  
  for (auto &element:sentence){
    if (element == 'a' || element == 'e' || element == 'i' || element == 'o' || element == 'u'
                   || element == 'A' || element == 'E' || element == 'I' || element == 'O' || element == 'U'){
      element = '!';
    }
  }
    return sentence; //coding and coding....
}
