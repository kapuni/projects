#include <iostream>

using namespace std;

class Movie
{
private:
    string rating;
public:
    string title;
    string director;

    Movie(string aTitle ,string aDirector, string aRating)
    {
        title = aTitle;
        director = aDirector;
        setrating(aRating);
    }
    void setrating(string aRating){
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "N" || aRating == "NG"){
            rating = aRating;
        }else{
            rating = "NG";
        }
    }
    string getRating(){
        return rating;
    }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    avengers.setrating("Dog");
    cout << avengers.getRating();

    return 0;
}
